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

const int motorCount = 4;
const int speedValue = 150;
const int delayTime = 2000;
const int decelerationStep = 10; // Step for gradual slowing down
const int decelerationDelay = 50; // Delay between each deceleration step

volatile long encoderCount[motorCount] = {0, 0, 0, 0};

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

  // Display the PWM values on the SerialUSB Monitor
  SerialUSB.print("Motor ");
  SerialUSB.print(motorIndex + 1);
  SerialUSB.print(" - RPWM: ");
  SerialUSB.print(rpwmValue);
  SerialUSB.print(", LPWM: ");
  SerialUSB.print(lpwmValue);
  for (int i = 0; i < motorCount; i++) {
    SerialUSB.print("  Motor ");
    SerialUSB.print(i + 1);
    SerialUSB.print(": ");
    SerialUSB.print(encoderCount[i]);
  }
  SerialUSB.println();
  delay(duration);
}

void setup() {
  SerialUSB.begin(115200);  // Initialize SerialUSB communication
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

  attachInterrupt(digitalPinToInterrupt(ENC_A[0]), encoderISR0, RISING);
  attachInterrupt(digitalPinToInterrupt(ENC_A[1]), encoderISR1, RISING);
  attachInterrupt(digitalPinToInterrupt(ENC_A[2]), encoderISR2, RISING);
  attachInterrupt(digitalPinToInterrupt(ENC_A[3]), encoderISR3, RISING);
}

void loop() {
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
