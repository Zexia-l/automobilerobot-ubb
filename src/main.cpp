#include <Arduino.h>
#include <MovingAverageFilter.h>
#include <PID_v1.h>
#include <Wire.h>
#include <I2Cdev.h>
#include <MPU6050.h>

MovingAverageFilter M1SpeedFilter(25);
MovingAverageFilter M2SpeedFilter(25);
MovingAverageFilter M3SpeedFilter(25);
MovingAverageFilter M4SpeedFilter(25);

int16_t ax, ay, az;
int16_t gx, gy, gz;
float Ax, Ay, Az;
float Gx, Gy, Gz;

// Pin definitions for motors
//const int R_IS[] = {38, 42, 46, 50};
//const int L_IS[] = {40, 44, 48, 52};
const int R_EN[] = {22, 26, 30, 34};
const int L_EN[] = {24, 28, 32, 36};
const int RPWM[] = {2, 4, 6, 8};
const int LPWM[] = {3, 5, 7, 9};
const int ENC_A[] = {27, 31, 35, 39};
const int ENC_B[] = {29, 33, 37, 41};

/*

const int R_IS[] = {38, 42, 46, 50};
const int L_IS[] = {40, 44, 48, 52};
const int R_EN[] = {22, 26, 30, 34};
const int L_EN[] = {24, 28, 32, 36};
const int RPWM[] = {2, 4, 6, 8};
const int LPWM[] = {3, 5, 7, 9};
*/

int M1_CPR = 150;
int M2_CPR = 150;
int M3_CPR = 150;
int M4_CPR = 150;

double vM1;
double vM2;
double vM3;
double vM4;

MPU6050 accelgyro;

const int offsetM1 = 1;
const int offsetM2 = 1;
const int offsetM3 = 1;
const int offsetM4 = 1;

unsigned long current_time, last_time = 0;

const int motorCount = 4;
const int speedValue = 100;
const int delayTime = 1000;
const int decelerationStep = 10; // Step for gradual slowing down
const int decelerationDelay = 50; // Delay between each deceleration step

volatile long encoderCount[motorCount] = {0, 0, 0, 0};

double M1Setpoint, M1Input, M1Output;
double M2Setpoint, M2Input, M2Output;
double M3Setpoint, M3Input, M3Output;
double M4Setpoint, M4Input, M4Output;

double M1Kp=700.00, M1Ki=2000.1, M1Kd= 25.5;
double M2Kp=700.00, M2Ki=2000.1, M2Kd= 25.5;
double M3Kp=700.00, M3Ki=2000.1, M3Kd= 25.5;
double M4Kp=700.00, M4Ki=2000.1, M4Kd= 25.5;

PID M1_PID(&M1Input, &M1Output, &M1Setpoint, M1Kp, M1Ki, M1Kd, DIRECT);
PID M2_PID(&M2Input, &M2Output, &M2Setpoint, M2Kp, M2Ki, M2Kd, DIRECT);
PID M3_PID(&M3Input, &M3Output, &M3Setpoint, M3Kp, M3Ki, M3Kd, DIRECT);
PID M4_PID(&M4Input, &M4Output, &M4Setpoint, M4Kp, M4Ki, M4Kd, DIRECT);

void readEncoder(int motorIndex) {
  // Check direction based on the value of ENC_B
  int b = digitalRead(ENC_B[motorIndex]);
  if (b > 0) {
    encoderCount[motorIndex]++;  // CW rotation
  } else {
    encoderCount[motorIndex]--;  // CCW rotation
  }
}

void encoderISR0() { readEncoder(0); }
void encoderISR1() { readEncoder(1); }
void encoderISR2() { readEncoder(2); }
void encoderISR3() { readEncoder(3); }

// Function to control motor direction
void controlMotor(int motorIndex, int rpwmValue, int lpwmValue, int duration) {
  int adjustedRpwmValue = constrain(rpwmValue, 0, 255);
  int adjustedLpwmValue = constrain(lpwmValue, 0, 255);
  
  analogWrite(RPWM[motorIndex], adjustedRpwmValue);
  analogWrite(LPWM[motorIndex], adjustedLpwmValue);

  // Display the PWM values on the Serial Monitor
  /*
  Serial.print("Motor ");
  Serial.print(motorIndex + 1);
  Serial.print(" - RPWM: ");
  Serial.print(rpwmValue);
  Serial.print(", LPWM: ");
  Serial.print(lpwmValue);
  */
  for (int i = 0; i < motorCount; i++) {
    Serial.print("  Motor ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.print(encoderCount[i]);
  }
  //Serial.println();

  delay(duration);
}



void IMU_Initialization();
void IMU_Calculate();
void ForwardKinematics(float lx, float ly, float *front_left_wheel_velocity, float *back_left_wheel_velocity, 
                        float *front_right_wheel_velocity, float *back_right_wheel_velocity);

void wheel_velocity_calculate(int front_left_tick_per_revolution, int back_left_tick_per_revolution,
                              int front_right_tick_per_revolution, int back_right_tick_per_revolution,
                              double *front_left_wheel_velocity, double *front_right_wheel_velocity,
                              double *back_left_wheel_velocity, double *back_right_wheel_velocity);

void setup() {
  Wire.begin();
  Serial.begin(115200);  // Initialize Serial communication
  // Set all pins as output and enable motors

  IMU_Initialization();

  for (int i = 0; i < motorCount; i++) {
    //pinMode(R_IS[i], OUTPUT);
    //pinMode(L_IS[i], OUTPUT);
    pinMode(R_EN[i], OUTPUT);
    pinMode(L_EN[i], OUTPUT);
    pinMode(RPWM[i], OUTPUT);
    pinMode(LPWM[i], OUTPUT);
    pinMode(ENC_A[i], INPUT_PULLUP);  // Set encoder A as input with pullup
    pinMode(ENC_B[i], INPUT_PULLUP);  // Set encoder B as input with pullup

    digitalWrite(R_EN[i], HIGH);
    digitalWrite(L_EN[i], HIGH);
  }

  attachInterrupt(digitalPinToInterrupt(ENC_A[0]), encoderISR0, RISING);
  attachInterrupt(digitalPinToInterrupt(ENC_A[1]), encoderISR1, RISING);
  attachInterrupt(digitalPinToInterrupt(ENC_A[2]), encoderISR2, RISING);
  attachInterrupt(digitalPinToInterrupt(ENC_A[3]), encoderISR3, RISING);

  //analogWriteResolution(8);

  M1_PID.SetMode(AUTOMATIC);
  M1_PID.SetOutputLimits(-255, 255);
  M1_PID.SetSampleTime(10);

  M2_PID.SetMode(AUTOMATIC);
  M2_PID.SetOutputLimits(-255, 255);
  M2_PID.SetSampleTime(10);

  M3_PID.SetMode(AUTOMATIC);
  M3_PID.SetOutputLimits(-255, 255);
  M3_PID.SetSampleTime(10);

  M4_PID.SetMode(AUTOMATIC);
  M4_PID.SetOutputLimits(-255, 255);
  M4_PID.SetSampleTime(10);

  delay(1500);
}

void loop() {
  if (Serial.available() > 0) {
    // Read the incoming string until newline
    String inputString = Serial.readStringUntil('\n');

    // Convert the string to a float
    M1Setpoint = inputString.toFloat();
    M2Setpoint = inputString.toFloat();
    M3Setpoint = inputString.toFloat();
    M4Setpoint = inputString.toFloat();
  }
  
  wheel_velocity_calculate(M1_CPR, M2_CPR, M3_CPR, M4_CPR, &vM1, &vM2, &vM3, &vM4);
  double M1_filter = M1SpeedFilter.process(vM1);
  double M2_filter = M2SpeedFilter.process(vM2);
  double M3_filter = M3SpeedFilter.process(vM3);
  double M4_filter = M4SpeedFilter.process(vM4);

  M1Input = M1_filter;
  M2Input = M2_filter;
  M3Input = M3_filter;
  M4Input = M4_filter;

  M1_PID.Compute();
  M2_PID.Compute();
  M3_PID.Compute();
  M4_PID.Compute();

  controlMotor(0, M1Output, 0, 0);
  controlMotor(1, M2Output, 0, 0);
  controlMotor(2, 0, M3Output, 0);
  controlMotor(3, 0, M4Output, 0);
  

  Serial.print(M1Setpoint); Serial.print(" - ");
  Serial.print(M2Setpoint); Serial.print(" - ");
  Serial.print(M3Setpoint); Serial.print(" - ");
  Serial.print(M4Setpoint); Serial.print(" - filter: ");
  Serial.print(M1_filter); Serial.print(" - ");
  Serial.print(M2_filter); Serial.print(" - ");
  Serial.print(M3_filter); Serial.print(" - ");
  Serial.println(M4_filter);
  

  for (int i = 0; i < motorCount; i++) {
    digitalWrite(R_EN[i], HIGH);
    digitalWrite(L_EN[i], HIGH);
  }

  controlMotor(0, speedValue, 0, 0);
  controlMotor(1, speedValue, 0, 0);
  controlMotor(2, 0, speedValue, 0);
  controlMotor(3, 0, speedValue, 0);

  delay(2000);

  for (int i = 0; i < motorCount; i++) {
    digitalWrite(R_EN[i], LOW);
    digitalWrite(L_EN[i], LOW);
  }

  delay(2000);

  for (int i = 0; i < motorCount; i++) {
    digitalWrite(R_EN[i], HIGH);
    digitalWrite(L_EN[i], HIGH);
  }

  controlMotor(0, 0, speedValue, 0);
  controlMotor(1, 0, speedValue, 0);
  controlMotor(2, speedValue, 0, 0);
  controlMotor(3, speedValue, 0, 0);

  delay(2000);

  for (int i = 0; i < motorCount; i++) {
    digitalWrite(R_EN[i], LOW);
    digitalWrite(L_EN[i], LOW);
  }

  delay(2000);

}

void wheel_velocity_calculate(int front_left_tick_per_revolution, int back_left_tick_per_revolution,
                              int front_right_tick_per_revolution, int back_right_tick_per_revolution,
                              double *front_left_wheel_velocity, double *front_right_wheel_velocity,
                              double *back_left_wheel_velocity, double *back_right_wheel_velocity)
{
  double WHEEL_RADIUS = 0.03;
  double wheelCircumference = 2 * PI * WHEEL_RADIUS;
  unsigned long current_time = millis();
  unsigned long elapsed_time = current_time - last_time;
  
  if (elapsed_time >= 30) {
    // Calculate revolutions for each wheel
    double front_left_revolutions = (double)encoderCount[0] / front_left_tick_per_revolution;
    double back_left_revolutions = (double)encoderCount[1] / back_left_tick_per_revolution;
    double front_right_revolutions = (double)encoderCount[2] / front_right_tick_per_revolution;
    double back_right_revolutions = (double)encoderCount[3] / back_right_tick_per_revolution;

    // Calculate velocities for each wheel
    *front_left_wheel_velocity = (front_left_revolutions * wheelCircumference) / (elapsed_time / 1000.0); // m/s
    *front_right_wheel_velocity = (front_right_revolutions * wheelCircumference) / (elapsed_time / 1000.0); // m/s
    *back_left_wheel_velocity = (back_left_revolutions * wheelCircumference) / (elapsed_time / 1000.0); // m/s
    *back_right_wheel_velocity = (back_right_revolutions * wheelCircumference) / (elapsed_time / 1000.0); // m/s

    // Reset tick count and update last time
    encoderCount[0] = 0;
    encoderCount[1] = 0;
    encoderCount[2] = 0;
    encoderCount[3] = 0;
    last_time = current_time;
  }
}

void ForwardKinematics(float lx, float ly, float angularZ, float *front_left_wheel_velocity, float *back_left_wheel_velocity, 
                        float *front_right_wheel_velocity, float *back_right_wheel_velocity)
{
  float WHEEL_RADIUS = 0.03;
  float WHEEL_BASE = 29.0;
  float WHEEL_SEPARATION_WIDTH = 17.8;
  float WHEEL_SEPARATION_LENGTH = 16.6;

  // Hitung kecepatan untuk roda kiri depan dan belakang
  *front_left_wheel_velocity = (1/WHEEL_RADIUS) * (lx - ly - (WHEEL_SEPARATION_WIDTH + WHEEL_SEPARATION_LENGTH) * angularZ);
  *front_right_wheel_velocity = (1/WHEEL_RADIUS) * (lx + ly + (WHEEL_SEPARATION_WIDTH + WHEEL_SEPARATION_LENGTH) * angularZ);
  *back_left_wheel_velocity = (1/WHEEL_RADIUS) * (lx + ly - (WHEEL_SEPARATION_WIDTH + WHEEL_SEPARATION_LENGTH) * angularZ);
  *back_right_wheel_velocity = (1/WHEEL_RADIUS) * (lx - ly + (WHEEL_SEPARATION_WIDTH + WHEEL_SEPARATION_LENGTH) * angularZ);

  *front_right_wheel_velocity = -1 * *front_right_wheel_velocity;
  *back_right_wheel_velocity = -1 * *back_right_wheel_velocity;
}

void InverseKinematics(float *front_left_wheel_velocity, float *back_left_wheel_velocity, 
                        float *front_right_wheel_velocity, float *back_right_wheel_velocity)
{
  float WHEEL_RADIUS = 0.03;
  float WHEEL_BASE = 29.0;
  float WHEEL_SEPARATION_WIDTH = 17.8;
  float WHEEL_SEPARATION_LENGTH = 16.6;
  
  float lx = (*front_left_wheel_velocity + *front_right_wheel_velocity + *back_left_wheel_velocity + *back_right_wheel_velocity) * (WHEEL_RADIUS / 4);
  float ly = (*front_left_wheel_velocity + *front_right_wheel_velocity + *back_left_wheel_velocity + *back_right_wheel_velocity) * (WHEEL_RADIUS / 4);
  float angularZ = (*front_left_wheel_velocity + *front_right_wheel_velocity + *back_left_wheel_velocity + *back_right_wheel_velocity) * (WHEEL_RADIUS / (4 * (WHEEL_SEPARATION_WIDTH + WHEEL_SEPARATION_LENGTH)));
}

void IMU_Initialization()
{
  // join I2C bus (I2Cdev library doesn't do this automatically)
  #if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
      Wire.begin();
  #elif I2CDEV_IMPLEMENTATION == I2CDEV_BUILTIN_FASTWIRE
      Fastwire::setup(400, true);
  #endif

  // initialize device
  Serial.println("Initializing I2C devices...");
  accelgyro.initialize();

  // verify connection
  Serial.println("Testing device connections...");
  Serial.println(accelgyro.testConnection() ? "MPU6050 connection successful" : "MPU6050 connection failed");
}

void IMU_Calculate()
{
  // read raw accel/gyro measurements from device
  accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
   //turn accelerometer 16-bit data into Acceleration (G)
  Ax = (float) ax / 16384.0;
  Ay = (float) ay / 16384.0;
  Az = (float) az / 16384.0;
  Gx = (float) gx / 131.0;
  Gy = (float) gy / 131.0;
  Gz = (float) gz / 131.0;
}