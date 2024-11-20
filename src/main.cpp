#include <Arduino.h>

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
  } else if (speed < 0) {
    analogWrite(motor.RPWM, 0);
    analogWrite(motor.LPWM, -speed); // Mundur
  } else {
    analogWrite(motor.RPWM, 0); // Berhenti
    analogWrite(motor.LPWM, 0);
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
  
  // Inisialisasi semua motor
  initMotors();
}

void loop() {
  // Baca data PWM dari ROS
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    int speeds[NUM_MOTORS];

    // Parsing data dari format "FL,BL,FR,BR\n"
    sscanf(input.c_str(), "%d,%d,%d,%d", &speeds[0], &speeds[1], &speeds[2], &speeds[3]);

    // Kontrol semua motor
    setAllMotors(speeds);
  }
}
