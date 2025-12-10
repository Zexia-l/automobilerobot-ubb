/*
 * Program ros2_control Hardware Interface + IMU + cmd_vel Kinematics
 * Integrasi micro-ROS pada Arduino Due
 */

#include <Arduino.h>
#include <micro_ros_platformio.h>
#include <stdio.h>
#include "Wire.h"

// Header ROS
#include <rcl/rcl.h>
#include <rosidl_runtime_c/string_functions.h> 
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <rcl/error_handling.h>
#include <rcutils/error_handling.h>
#include <rmw_microros/rmw_microros.h>

// Header Tipe Pesan
#include <sensor_msgs/msg/joint_state.h> 
#include <sensor_msgs/msg/imu.h> 
#include <geometry_msgs/msg/twist.h> // --- [MODIFIKASI] Header Twist ditambahkan

// Header Sensor IMU
#include "I2Cdev.h"
#include "MPU6050.h"
#include "HMC5883L.h"

// =================================================================
// KONFIGURASI MOTOR & ROBOT
// =================================================================

struct Motor {
    int RPWM; int LPWM; int REN; int LEN;
};

// Motor motors[] = {
//     {3, 2, 24, 22},  // Motor 0: KIRI DEPAN - kiri belakang
//     {5, 4, 28, 26},  // Motor 1: KANAN DEPAN - kiri depan
//     {6, 7, 30, 32},  // Motor 2: KIRI BELAKANG - kanan belakang
//     {8, 9, 34, 36}   // Motor 3: KANAN BELAKANG - kanan depan
// };

Motor motors[] = {
    {8, 9, 24, 22},  // Motor 0: KIRI DEPAN {3, 2, 24, 22}
    {5, 4, 28, 26},  // Motor 1: KANAN DEPAN {5, 4, 28, 26}
    {6, 7, 30, 32},  // Motor 2: KIRI BELAKANG {6, 7, 30, 32}
    {3, 2, 34, 36}   // Motor 3: KANAN BELAKANG {8, 9, 34, 36}
};

const int NUM_MOTORS = 4;
const char* joint_names[] = {"base_to_wheel_front_left", "base_to_wheel_front_right", "base_to_wheel_back_left", "base_to_wheel_back_right"};

// Encoder Pins
const int ENC_A[] = {41, 31, 37, 27}; 
const int ENC_B[] = {39, 33, 35, 29}; 

// --- [MODIFIKASI] Konstanta Kinematika ---
// Pastikan nilai ini sesuai dengan fisik robot Anda untuk perhitungan akurat
#define WHEEL_DIAMETER 0.05   // Meter
#define WHEEL_BASE     0.29   // Meter (Jarak roda kiri ke kanan / Track Width)
#define TICKS_PER_REV  106
#define PWM_DEADZONE   0

// =================================================================
// Variabel Global ROS
// =================================================================
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;
rclc_executor_t executor;

// Publisher Joint State
rcl_publisher_t joint_state_publisher;
sensor_msgs__msg__JointState joint_state_msg;

// Publisher IMU
rcl_publisher_t imu_publisher;
sensor_msgs__msg__Imu imu_msg;

// --- [MODIFIKASI] Subscriber cmd_vel (Gantikan Joint Command lama) ---
rcl_subscription_t cmd_vel_subscriber;
geometry_msgs__msg__Twist cmd_vel_msg; 

rcl_timer_t control_timer;

// =================================================================
// Variabel Global Data Hardware
// =================================================================
volatile long encoderCount[NUM_MOTORS] = {0, 0, 0, 0}; 
double joint_positions[NUM_MOTORS] = {0}; 
double joint_velocities[NUM_MOTORS] = {0}; 
double joint_commands[NUM_MOTORS] = {0}; // Target kecepatan per roda (rad/s)

long last_encoder_count[NUM_MOTORS] = {0};
unsigned long prev_control_time = 0;

// IMU Objects
MPU6050 accelgyro;
HMC5883L mag;
int16_t mx, my, mz;
int16_t ax, ay, az; 
int16_t gx, gy, gz;
int16_t gyro_bias[3] = {0, 0, 0};

#define ACCEL_SCALE_FACTOR (6.6263 / 16384.0) // Asumsi FS=2g default
#define GYRO_SCALE_FACTOR (0.0174532925 / 131.0) 

// =================================================================
// Helper Functions
// =================================================================

void set_header_time(builtin_interfaces__msg__Time* time_msg) {
    int64_t nanoseconds = rmw_uros_epoch_nanos();
    time_msg->sec = (int32_t)(nanoseconds / 1000000000);
    time_msg->nanosec = (uint32_t)(nanoseconds % 1000000000);
}

void setMotorVelocity(int motorIndex, double target_velocity_rad_s) {
    double max_vel_rad_s = 25.5; // Sesuaikan batas maksimum motor
    int pwm = (int)(target_velocity_rad_s * 255.0 / max_vel_rad_s);
    
    // Clamp PWM
    if(pwm > 255) pwm = 255;
    if(pwm < -255) pwm = -255;

    int direction = (pwm > 0) ? 1 : ((pwm < 0) ? -1 : 0);
    int abs_pwm = abs(pwm);

    if (abs_pwm > 0 && abs_pwm < PWM_DEADZONE) abs_pwm = PWM_DEADZONE;
    
    if (direction == 1) { 
        analogWrite(motors[motorIndex].RPWM, abs_pwm);
        analogWrite(motors[motorIndex].LPWM, 0);
    } else if (direction == -1) { 
        analogWrite(motors[motorIndex].RPWM, 0);
        analogWrite(motors[motorIndex].LPWM, abs_pwm);
    } else { 
        analogWrite(motors[motorIndex].RPWM, 0);
        analogWrite(motors[motorIndex].LPWM, 0);
    }
}

// ISR Encoder (Tetap sama)
void readEncoder(int motorIndex) {
    int b = digitalRead(ENC_B[motorIndex]);
    if (b == LOW) encoderCount[motorIndex]++; else encoderCount[motorIndex]--;
}
void encoderISR0() { readEncoder(0); }
void encoderISR1() { readEncoder(1); }
void encoderISR2() { readEncoder(2); }
void encoderISR3() { readEncoder(3); }

// =================================================================
// Setup Hardware
// =================================================================
void setup_motors() {
    for (int i = 0; i < NUM_MOTORS; i++) {
        pinMode(motors[i].RPWM, OUTPUT); pinMode(motors[i].LPWM, OUTPUT);
        pinMode(motors[i].REN, OUTPUT); pinMode(motors[i].LEN, OUTPUT);
        digitalWrite(motors[i].REN, HIGH); digitalWrite(motors[i].LEN, HIGH);
        setMotorVelocity(i, 0.0);
    }
}
void setup_encoders() {
    for (int i = 0; i < NUM_MOTORS; i++) {
        pinMode(ENC_A[i], INPUT_PULLUP); pinMode(ENC_B[i], INPUT_PULLUP);
    }
    attachInterrupt(digitalPinToInterrupt(ENC_A[0]), encoderISR0, RISING);
    attachInterrupt(digitalPinToInterrupt(ENC_A[1]), encoderISR1, RISING);
    attachInterrupt(digitalPinToInterrupt(ENC_A[2]), encoderISR2, RISING);
    attachInterrupt(digitalPinToInterrupt(ENC_A[3]), encoderISR3, RISING);
}

void calibrate_imu() {
    // SerialUSB.println("Calibrating IMU... Keep robot still.");
    long sum_gx=0, sum_gy=0, sum_gz=0;
    const int num_readings = 200;

    for (int i = 0; i < num_readings; i++) {
        accelgyro.getMotion6(NULL, NULL, NULL, &gx, &gy, &gz); // Hanya baca gyro
        sum_gx += gx; sum_gy += gy; sum_gz += gz;
        delay(5);
    }

    gyro_bias[0] = sum_gx / num_readings;
    gyro_bias[1] = sum_gy / num_readings;
    gyro_bias[2] = sum_gz / num_readings;

    // SerialUSB.println("Calibration complete.");
}

void setup_imu() {
    Wire.begin();
    mag.initialize();
    accelgyro.initialize();
}

// =================================================================
// Callback & Logika Kinematika (UTAMA)
// =================================================================

// --- [MODIFIKASI] Callback cmd_vel ---
void cmd_vel_callback(const void *msgin) {
    const geometry_msgs__msg__Twist *msg = (const geometry_msgs__msg__Twist *)msgin;

    float linear_x = msg->linear.x;  // Kecepatan maju/mundur (m/s)
    float angular_z = msg->angular.z; // Kecepatan putar (rad/s)

    // Hitung kecepatan tangensial untuk sisi kiri dan kanan (Differential Drive Logic)
    // V_left  = V_lin - (Omega * (WheelBase / 2))
    // V_right = V_lin + (Omega * (WheelBase / 2))
    
    double vel_left_m_s  = linear_x - (angular_z * (WHEEL_BASE / 2.0));
    double vel_right_m_s = linear_x + (angular_z * (WHEEL_BASE / 2.0));

    // Konversi m/s ke rad/s (Kecepatan Sudut Roda)
    // Omega_roda = V_tangensial / Jari-jari Roda
    double wheel_radius = WHEEL_DIAMETER / 2.0;
    double target_speed_left  = vel_left_m_s / wheel_radius;
    double target_speed_right = vel_right_m_s / wheel_radius;

    // Terapkan ke 4 motor (Skid Steer Logic)
    // Motor 0 (FL) & Motor 2 (BL) = Sisi Kiri
    // Motor 1 (FR) & Motor 3 (BR) = Sisi Kanan
    
    joint_commands[0] = target_speed_left;  // FL
    joint_commands[1] = target_speed_right; // FR
    joint_commands[2] = target_speed_left;  // BL
    joint_commands[3] = target_speed_right; // BR
}

void control_timer_callback(rcl_timer_t *timer, int64_t last_call_time) {
    if (timer == NULL) return;
    unsigned long now = millis();
    double dt = (now - prev_control_time) / 1000.0;
    prev_control_time = now;

    // 1. Baca Encoder & Update State
    noInterrupts();
    long current_encoder_count[NUM_MOTORS];
    for(int i=0; i<NUM_MOTORS; i++) current_encoder_count[i] = encoderCount[i];
    interrupts();

    for (int i = 0; i < NUM_MOTORS; i++) {
        long delta = current_encoder_count[i] - last_encoder_count[i];
        joint_positions[i] = ((double)current_encoder_count[i] / TICKS_PER_REV) * 2.0 * PI;
        joint_velocities[i] = ((double)delta / (dt<=0?0.001:dt)) * (2.0 * PI / TICKS_PER_REV);
        last_encoder_count[i] = current_encoder_count[i];
    }

    // 2. Baca IMU
    accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

    gx -= gyro_bias[0];
    gy -= gyro_bias[1];
    gz -= gyro_bias[2];

    // 3. Publish Joint States
    builtin_interfaces__msg__Time current_time;
    set_header_time(&current_time);
    joint_state_msg.header.stamp = current_time;
    for(int i=0; i<NUM_MOTORS; i++) {
        joint_state_msg.position.data[i] = joint_positions[i];
        joint_state_msg.velocity.data[i] = joint_velocities[i];
    }
    rcl_publish(&joint_state_publisher, &joint_state_msg, NULL);

    // 4. Publish IMU
    imu_msg.header.stamp = current_time;
    imu_msg.linear_acceleration.x = ax * ACCEL_SCALE_FACTOR;
    imu_msg.linear_acceleration.y = ay * ACCEL_SCALE_FACTOR;
    imu_msg.linear_acceleration.z = az * ACCEL_SCALE_FACTOR;
    imu_msg.angular_velocity.x = gx * GYRO_SCALE_FACTOR;
    imu_msg.angular_velocity.y = gy * GYRO_SCALE_FACTOR;
    imu_msg.angular_velocity.z = gz * GYRO_SCALE_FACTOR;
    imu_msg.orientation.w = 1.0; 
    rcl_publish(&imu_publisher, &imu_msg, NULL);

    // 5. Motor Actuation (Simple Open Loop)
    for (int i = 0; i < NUM_MOTORS; i++) {
        setMotorVelocity(i, joint_commands[i]);
    }
}

// =================================================================
// Setup ROS & Main Loop
// =================================================================

void setup_ros_messages() {
    // Alloc Joint State
    rosidl_runtime_c__String__Sequence__init(&joint_state_msg.name, NUM_MOTORS);
    for(int i=0; i<NUM_MOTORS; i++) rosidl_runtime_c__String__assign(&joint_state_msg.name.data[i], joint_names[i]);
    
    joint_state_msg.position.data = (double*)malloc(sizeof(double)*NUM_MOTORS);
    joint_state_msg.position.size = NUM_MOTORS;
    joint_state_msg.position.capacity = NUM_MOTORS;
    
    joint_state_msg.velocity.data = (double*)malloc(sizeof(double)*NUM_MOTORS);
    joint_state_msg.velocity.size = NUM_MOTORS;
    joint_state_msg.velocity.capacity = NUM_MOTORS;

    // Alloc IMU
    rosidl_runtime_c__String__assign(&imu_msg.header.frame_id, "imu_link");
    
    // --- [MODIFIKASI] Pesan cmd_vel tidak perlu alokasi array dinamis ---
    // geometry_msgs/Twist hanya berisi float primitif (Vector3 linear, Vector3 angular)
}

void setup() {
    SerialUSB.begin(115200);
    while (!SerialUSB);
    set_microros_serial_transports(SerialUSB);
    delay(2000);

    setup_motors();
    setup_encoders();
    setup_imu();
    calibrate_imu();
    prev_control_time = millis();
    setup_ros_messages();

    allocator = rcl_get_default_allocator();
    rclc_support_init(&support, 0, NULL, &allocator);
    rclc_node_init_default(&node, "arduino_due_hw_node", "", &support);

    // Init Publisher JointState
    rclc_publisher_init_default(&joint_state_publisher, &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, JointState), "raw_joint_states");

    // Init Publisher IMU
    rclc_publisher_init_default(&imu_publisher, &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Imu), "imu/data_raw");

    // --- [MODIFIKASI] Init Subscriber cmd_vel ---
    rclc_subscription_init_default(
        &cmd_vel_subscriber,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
        "/diff_cont/cmd_vel_unstamped" // Topik standar ROS Navigation
    );

    // Init Timer
    rclc_timer_init_default(&control_timer, &support, RCL_MS_TO_NS(20), control_timer_callback);

    // Init Executor
    // Total handles: 1 Subs + 1 Timer = 2. Publisher tidak dihitung di executor.
    rclc_executor_init(&executor, &support.context, 2, &allocator);
    
    // --- [MODIFIKASI] Add Subscriber to executor ---
    rclc_executor_add_subscription(&executor, &cmd_vel_subscriber, &cmd_vel_msg, &cmd_vel_callback, ON_NEW_DATA);
    
    rclc_executor_add_timer(&executor, &control_timer);
}

void loop() {
    rclc_executor_spin_some(&executor, RCL_MS_TO_NS(10));
}