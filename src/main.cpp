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

int left_CPR = 412;
int right_CPR = 412;

double vM1;
double vM2;
double vM3;
double vM4;

const int offsetM4 = 1;
const int offsetM2 = 1;
const int offsetM3 = 1;
const int offsetM4 = 1;

const int motorCount = 4;
const int speedValue = 150;
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
  //analogWriteResolution(10);
  analogWrite(RPWM[motorIndex], rpwmValue);
  analogWrite(LPWM[motorIndex], lpwmValue);

  // Display the PWM values on the Serial Monitor
  Serial.print("Motor ");
  Serial.print(motorIndex + 1);
  Serial.print(" - RPWM: ");
  Serial.print(rpwmValue);
  Serial.print(", LPWM: ");
  Serial.print(lpwmValue);
  for (int i = 0; i < motorCount; i++) {
    Serial.print("  Motor ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.print(encoderCount[i]);
  }
  Serial.println();
  delay(duration);
}

void setup() {
  Wire.begin();
  Serial.begin(115200);  // Initialize Serial communication
  // Set all pins as output and enable motors

  for (int i = 0; i < motorCount; i++) {
    //pinMode(R_IS[i], OUTPUT);
    //pinMode(L_IS[i], OUTPUT);
    pinMode(R_EN[i], OUTPUT);
    pinMode(L_EN[i], OUTPUT);
    pinMode(RPWM[i], OUTPUT);
    pinMode(LPWM[i], OUTPUT);
    pinMode(ENC_A[i], INPUT);  // Set encoder A as input with pullup
    pinMode(ENC_B[i], INPUT);  // Set encoder B as input with pullup

    digitalWrite(R_EN[i], HIGH);
    digitalWrite(L_EN[i], HIGH);
  }

  attachInterrupt(digitalPinToInterrupt(ENC_A[0]), encoderISR0, CHANGE);
  attachInterrupt(digitalPinToInterrupt(ENC_A[1]), encoderISR1, CHANGE);
  attachInterrupt(digitalPinToInterrupt(ENC_A[2]), encoderISR2, CHANGE);
  attachInterrupt(digitalPinToInterrupt(ENC_A[3]), encoderISR3, CHANGE);

  M1_PID.SetMode(AUTOMATIC);
  M1_PID.SetOutputLimits(-1023, 1023);
  M1_PID.SetSampleTime(10);

  M2_PID.SetMode(AUTOMATIC);
  M2_PID.SetOutputLimits(-1023, 1023);
  M2_PID.SetSampleTime(10);

  M3_PID.SetMode(AUTOMATIC);
  M3_PID.SetOutputLimits(-1023, 1023);
  M3_PID.SetSampleTime(10);

  M4_PID.SetMode(AUTOMATIC);
  M4_PID.SetOutputLimits(-1023, 1023);
  M4_PID.SetSampleTime(10);
}

void loop() {
  if (Serial.available() > 0) {
    // Read the incoming string until newline
    String inputString = Serial.readStringUntil('\n');

    // Convert the string to a float
    M1Setpoint = inputString.toFloat();
    M2Setpoint = inputString.toFloat();
  }

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

  delay(1000);
  /* program maju mundur 
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
  */
}
