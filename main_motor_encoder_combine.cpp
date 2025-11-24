#include <Arduino.h>

const int ENC_A[] = {27, 31, 35, 39};
const int ENC_B[] = {29, 33, 37, 41};

volatile long encoderCount[4] = {0, 0, 0, 0};
long prev_ticks[4] = {0, 0, 0, 0};
double actual_vel[4] = {0, 0, 0, 0};

#define ENCODER_TPR 106
#define PI 3.1415926535897932384626433832795
#define MAX_INPUT_LEN 32

const float LOOP_RATE_HZ = 50.0; // Loop kontrol 50 Hz (20ms)
const float LOOP_TIME_S = 1.0 / LOOP_RATE_HZ;
const long ENCODER_COUNT_MAX = 4294967295L; // Nilai maksimal encoder

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

// Struktur untuk menyimpan konfigurasi motor
struct Motor {
  int RPWM;  // Pin PWM kanan
  int LPWM;  // Pin PWM kiri
  int REN;   // Pin Enable kanan
  int LEN;   // Pin Enable kiri
};

// Konfigurasi semua motor
Motor motors[] = {
  {3, 2, 24, 22},  // FRONT LEFT
  {5, 4, 28, 26},  // BACK LEFT
  {6, 7, 30, 32},  // FRONT RIGHT
  {8, 9, 34, 36}   // BACK RIGHT
};

// Jumlah motor
const int NUM_MOTORS = sizeof(motors) / sizeof(Motor);

// Fungsi untuk inisialisasi motor
void initMotors() {
  for (int i = 0; i < NUM_MOTORS; i++) {
    pinMode(motors[i].RPWM, OUTPUT);
    pinMode(motors[i].LPWM, OUTPUT);
    pinMode(motors[i].REN, OUTPUT);
    pinMode(motors[i].LEN, OUTPUT);

    // Aktifkan pin enable
    digitalWrite(motors[i].REN, HIGH);
    digitalWrite(motors[i].LEN, HIGH);
  }
}

// Fungsi untuk mengontrol satu motor
void setMotor(Motor motor, int speed) {
  if (speed > 0) {
    analogWrite(motor.RPWM, speed); // Maju
    analogWrite(motor.LPWM, 0);
    digitalWrite(motor.REN, HIGH);  // Aktifkan enable
    digitalWrite(motor.LEN, HIGH);
  } else if (speed < 0) {
    analogWrite(motor.RPWM, 0);
    analogWrite(motor.LPWM, -speed); // Mundur
    digitalWrite(motor.REN, HIGH);  // Aktifkan enable
    digitalWrite(motor.LEN, HIGH);
  } else {
    analogWrite(motor.RPWM, 0); // Berhenti
    analogWrite(motor.LPWM, 0);
    digitalWrite(motor.REN, LOW);  // Aktifkan enable
    digitalWrite(motor.LEN, LOW);
  }
}

// Fungsi untuk mengontrol semua motor
void setAllMotors(int speeds[]) {
  for (int i = 0; i < NUM_MOTORS; i++) {
    setMotor(motors[i], speeds[i]);
  }
}

void setup() {
  // Inisialisasi komunikasi serial
  Serial.begin(115200);
    for (int i = 0; i < 4; i++) {
        pinMode(ENC_A[i], INPUT);
        pinMode(ENC_B[i], INPUT);
    }
  
    attachInterrupt(digitalPinToInterrupt(ENC_A[0]), encoderISR0, RISING);
    attachInterrupt(digitalPinToInterrupt(ENC_A[1]), encoderISR1, RISING);
    attachInterrupt(digitalPinToInterrupt(ENC_A[2]), encoderISR2, RISING);
    attachInterrupt(digitalPinToInterrupt(ENC_A[3]), encoderISR3, RISING);

  // Inisialisasi semua motor
  initMotors();
}

void loop() {
static unsigned long last_time = 0;
  if (millis() - last_time >= (LOOP_TIME_S * 1000)) {
    last_time = millis();
  // Baca data PWM dari ROS

    for(int i = 0; i < 4; i++){
        long ticks_change = encoderCount[i] - prev_ticks[i];
        prev_ticks[i] = encoderCount[i];

    // Mengatasi overflow (jika terjadi)
    if (ticks_change > ENCODER_COUNT_MAX / 2) {
      ticks_change -= ENCODER_COUNT_MAX;
    } else if (ticks_change < -ENCODER_COUNT_MAX / 2) {
      ticks_change += ENCODER_COUNT_MAX;
    }

    // Hitung kecepatan sudut (rad/s)
    // (Perubahan Ticks * 2 * PI) / (Ticks per Putaran * Waktu Loop dalam detik)
    actual_vel[i] = (float)ticks_change * (2.0 * PI) / (float)ENCODER_TPR / LOOP_TIME_S;  
    }
    Serial.print(actual_vel[0]); Serial.print(",");
    Serial.print(actual_vel[1]); Serial.print(",");
    Serial.print(actual_vel[2]); Serial.print(",");
    Serial.println(actual_vel[3]);
    

  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    int speeds[NUM_MOTORS];

    // Parsing data dari format "FL,BL,FR,BR\n"
    sscanf(input.c_str(), "%d,%d,%d,%d", &speeds[1], &speeds[0], &speeds[3], &speeds[2]);

    // Kontrol semua motor
    setAllMotors(speeds);
    }
  }
}
