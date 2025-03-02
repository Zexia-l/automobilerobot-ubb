#include <Arduino.h>

const int R_EN[] = {22, 26, 30, 34};
const int L_EN[] = {24, 28, 32, 36};
const int RPWM[] = {2, 4, 6, 8};
const int LPWM[] = {3, 5, 7, 9};
const int ENC_A[] = {27, 31, 35, 39};
const int ENC_B[] = {29, 33, 37, 41};

volatile long encoderCount[4] = {0, 0, 0, 0};

void readEncoder(int motorIndex) {
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

void setup() {
    Serial.begin(115200);
    for (int i = 0; i < 4; i++) {
        pinMode(ENC_A[i], INPUT);
        pinMode(ENC_B[i], INPUT);
    }
    
    attachInterrupt(digitalPinToInterrupt(ENC_A[0]), encoderISR0, RISING);
    attachInterrupt(digitalPinToInterrupt(ENC_A[1]), encoderISR1, RISING);
    attachInterrupt(digitalPinToInterrupt(ENC_A[2]), encoderISR2, RISING);
    attachInterrupt(digitalPinToInterrupt(ENC_A[3]), encoderISR3, RISING);
}

void loop() {
    Serial.print("Encoder 1: "); Serial.print(encoderCount[0]);
    Serial.print("\tEncoder 2: "); Serial.print(encoderCount[1]);
    Serial.print("\tEncoder 3: "); Serial.print(encoderCount[2]);
    Serial.print("\tEncoder 4: "); Serial.println(encoderCount[3]);
    delay(500);
}
