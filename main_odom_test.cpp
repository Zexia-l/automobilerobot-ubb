#include <Arduino.h>
#include <micro_ros_platformio.h>

#include <rcl/rcl.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <std_msgs/msg/int32_multi_array.h>
#include <nav_msgs/msg/odometry.h>
//#include <tf2_msgs/msg/tf_message.h>
#include <geometry_msgs/msg/transform_stamped.h>
#include <geometry_msgs/msg/quaternion.h>
#include <math.h>

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop();}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}

const int motorCount = 4;
const float wheel_radius = 0.05; // radius roda dalam meter
const float wheel_base_x = 0.2;  // jarak antara roda depan-belakang (m)
const float wheel_base_y = 0.2;  // jarak antara roda kiri-kanan (m)
const float encoder_resolution = 4096.0;
const float gear_ratio = 1.0;

// Pin definitions for motors
const int R_EN[] = {22, 26, 30, 34};
const int L_EN[] = {24, 28, 32, 36};
const int RPWM[] = {2, 4, 6, 8};
const int LPWM[] = {3, 5, 7, 9};
const int ENC_A[] = {27, 31, 35, 39};
const int ENC_B[] = {29, 33, 37, 41};

const int speedValue = 150;
const int delayTime = 2000;

volatile long encoderCount[motorCount] = {0, 0, 0, 0};
float x = 0.0, y = 0.0, theta = 0.0;
float prev_encoder[motorCount] = {0, 0, 0, 0};

// Micro-ROS variables
rcl_publisher_t odom_publisher;
nav_msgs__msg__Odometry odom_msg;

rclc_executor_t executor;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;
rcl_timer_t timer;

// Function to calculate odometry
void calculate_odometry() {
    float d[motorCount];
    for (int i = 0; i < motorCount; i++) {
        d[i] = ((encoderCount[i] - prev_encoder[i]) / encoder_resolution) * (2 * M_PI * wheel_radius) / gear_ratio;
        prev_encoder[i] = encoderCount[i];
    }
    
    float dx = (d[0] - d[1] - d[2] + d[3]) / 4.0;
    float dy = (-d[0] - d[1] + d[2] + d[3]) / 4.0;
    float dtheta = (-d[0] + d[1] - d[2] + d[3]) / (4.0 * (wheel_base_x + wheel_base_y));
    
    float new_x = x + (dx * cos(theta) - dy * sin(theta));
    float new_y = y + (dx * sin(theta) + dy * cos(theta));
    float new_theta = theta + dtheta;
    
    x = new_x;
    y = new_y;
    theta = new_theta;
    
    odom_msg.pose.pose.position.x = x;
    odom_msg.pose.pose.position.y = y;
    odom_msg.pose.pose.position.z = 0.0;
    
    geometry_msgs__msg__Quaternion quat;
    quat.x = 0.0;
    quat.y = 0.0;
    quat.z = sin(theta / 2.0);
    quat.w = cos(theta / 2.0);
    odom_msg.pose.pose.orientation = quat;
    
    rcl_publish(&odom_publisher, &odom_msg, NULL);
}

void error_loop() {
  while(1) {
    delay(100);
  }
}

// Timer callback for publishing odometry
void timer_callback(rcl_timer_t *timer, int64_t last_call_time) {
    RCLC_UNUSED(last_call_time);
    if (timer != NULL) {
        calculate_odometry();
    }
}

void readEncoder(int motorIndex) {
  int b = digitalRead(ENC_B[motorIndex]);
  if (b > 0) {
    encoderCount[motorIndex]++;  // CW rotation
  } else {
    encoderCount[motorIndex]--;  // CCW rotation
  }
  Serial.print("Motor "); Serial.print(motorIndex);
  Serial.print(" Encoder: "); Serial.println(encoderCount[motorIndex]);
}

// ISR for each motor
void encoderISR0() { readEncoder(0); }
void encoderISR1() { readEncoder(1); }
void encoderISR2() { readEncoder(2); }
void encoderISR3() { readEncoder(3); }

void setup() {
    Serial.begin(115200);
    set_microros_serial_transports(Serial);
    delay(2000);
    
    allocator = rcl_get_default_allocator();
    RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));
    RCCHECK(rclc_node_init_default(&node, "odometry_node", "", &support));
    
    RCCHECK(rclc_publisher_init_default(
        &odom_publisher,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, Odometry),
        "odom"));
    
    const unsigned int timer_timeout = 100;
    RCCHECK(rclc_timer_init_default(
        &timer,
        &support,
        RCL_MS_TO_NS(timer_timeout), timer_callback));
    
    RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
    RCCHECK(rclc_executor_add_timer(&executor, &timer));
  attachInterrupt(digitalPinToInterrupt(ENC_A[0]), encoderISR0, RISING);
  attachInterrupt(digitalPinToInterrupt(ENC_A[1]), encoderISR1, RISING);
  attachInterrupt(digitalPinToInterrupt(ENC_A[2]), encoderISR2, RISING);
  attachInterrupt(digitalPinToInterrupt(ENC_A[3]), encoderISR3, RISING);

  // Set up Micro-ROS
  delay(2000);
}

void loop() {
    RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100)));
}
