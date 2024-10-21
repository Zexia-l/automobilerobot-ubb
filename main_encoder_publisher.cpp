#include <Arduino.h>
#include <micro_ros_platformio.h>

#include <rcl/rcl.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <std_msgs/msg/int32_multi_array.h>  // Menggunakan array untuk mengirim data encoder

// Pin definitions for motors
const int R_EN[] = {22, 26, 30, 34};
const int L_EN[] = {24, 28, 32, 36};
const int RPWM[] = {2, 4, 6, 8};
const int LPWM[] = {3, 5, 7, 9};
const int ENC_A[] = {27, 31, 35, 39};
const int ENC_B[] = {29, 33, 37, 41};

const int motorCount = 4;
const int speedValue = 150;
const int delayTime = 2000;

volatile long encoderCount[motorCount] = {0, 0, 0, 0};

// Micro-ROS variables
rcl_publisher_t encoder_publisher;
std_msgs__msg__Int32MultiArray encoder_msg;

rclc_executor_t executor;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;
rcl_timer_t timer;

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop();}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}

// Error handling loop
void error_loop() {
  while(1) {
    delay(100);
  }
}

// Function to publish encoder data
void publish_encoder_data() {
  // Mengisi data encoder ke array
  for (int i = 0; i < motorCount; i++) {
    encoder_msg.data.data[i] = encoderCount[i];
  }

  RCSOFTCHECK(rcl_publish(&encoder_publisher, &encoder_msg, NULL));
}

// Callback for the timer to publish data periodically
void timer_callback(rcl_timer_t * timer, int64_t last_call_time) {
  RCLC_UNUSED(last_call_time);
  if (timer != NULL) {
    publish_encoder_data();  // Publish encoder data setiap kali timer dipanggil
  }
}

// Encoder read function
void readEncoder(int motorIndex) {
  int b = digitalRead(ENC_B[motorIndex]);
  if (b > 0) {
    encoderCount[motorIndex]++;  // CW rotation
  } else {
    encoderCount[motorIndex]--;  // CCW rotation
  }
}

// ISR for each motor
void encoderISR0() { readEncoder(0); }
void encoderISR1() { readEncoder(1); }
void encoderISR2() { readEncoder(2); }
void encoderISR3() { readEncoder(3); }

// Motor control function
void controlMotor(int motorIndex, int rpwmValue, int lpwmValue, int duration) {
  analogWrite(RPWM[motorIndex], rpwmValue);
  analogWrite(LPWM[motorIndex], lpwmValue);

  delay(duration);
  RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100)))
}

// Setup function
void setup() {
  SerialUSB.begin(115200);  // Initialize SerialUSB communication

  // Set motor pins
  for (int i = 0; i < motorCount; i++) {
    pinMode(R_EN[i], OUTPUT);
    pinMode(L_EN[i], OUTPUT);
    pinMode(RPWM[i], OUTPUT);
    pinMode(LPWM[i], OUTPUT);
    pinMode(ENC_A[i], INPUT);
    pinMode(ENC_B[i], INPUT);

    digitalWrite(R_EN[i], HIGH);
    digitalWrite(L_EN[i], HIGH);
  }

  // Set up interrupt for encoders
  attachInterrupt(digitalPinToInterrupt(ENC_A[0]), encoderISR0, RISING);
  attachInterrupt(digitalPinToInterrupt(ENC_A[1]), encoderISR1, RISING);
  attachInterrupt(digitalPinToInterrupt(ENC_A[2]), encoderISR2, RISING);
  attachInterrupt(digitalPinToInterrupt(ENC_A[3]), encoderISR3, RISING);

  // Set up Micro-ROS
  set_microros_serial_transports(SerialUSB);
  delay(2000);

  allocator = rcl_get_default_allocator();
  RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

  RCCHECK(rclc_node_init_default(&node, "encoder_node", "", &support));

  // Set up publisher for encoder data
  RCCHECK(rclc_publisher_init_default(
    &encoder_publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32MultiArray),
    "encoder_data"));

  // Set up timer for periodic publishing
  const unsigned int timer_timeout = 1000;
  RCCHECK(rclc_timer_init_default(
    &timer,
    &support,
    RCL_MS_TO_NS(timer_timeout), timer_callback));

  // Set up executor
  RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
  RCCHECK(rclc_executor_add_timer(&executor, &timer));

  // Initialize encoder message array size
  encoder_msg.data.data = (int32_t*) malloc(motorCount * sizeof(int32_t));
  encoder_msg.data.size = motorCount;
  encoder_msg.data.capacity = motorCount;
}

void loop() {
  // Control motors
  for (int i = 0; i < motorCount; i++) {
    // Motor Forward
    controlMotor(i, speedValue, 0, delayTime);
    delay(500);
    controlMotor(i, 0, 0, delayTime);

    // Motor Reverse
    controlMotor(i, 0, speedValue, delayTime);
    delay(500);
    controlMotor(i, 0, 0, delayTime); 
  }

  // Slow down motors step by step
  for (int speed = speedValue; speed >= 0; speed -= 10) {
    for (int i = 0; i < motorCount; i++) {
      controlMotor(i, speed, 0, 500);
    }
  }

  // Spin the executor to handle timer callbacks
  //RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100)));
}
