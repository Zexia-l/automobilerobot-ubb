#include <Arduino.h>

// Pin motor BTS7960
const int RPWM_PIN = 2;
const int LPWM_PIN = 3;
const int REN_PIN = 4;
const int LEN_PIN = 5;

// Pin encoder
const int ENCODER_A_PIN = 27;
const int ENCODER_B_PIN = 29;

// Variabel encoder
volatile long encoderPosition = 0;
int lastEncoded = 0;

void updateEncoder();

void setup() {
  // Konfigurasi pin motor sebagai output
  pinMode(RPWM_PIN, OUTPUT);
  pinMode(LPWM_PIN, OUTPUT);
  pinMode(REN_PIN, OUTPUT);
  pinMode(LEN_PIN, OUTPUT);

  // Konfigurasi pin encoder sebagai input
  pinMode(ENCODER_A_PIN, INPUT);
  pinMode(ENCODER_B_PIN, INPUT);

  // Aktifkan pull-up resistor pada pin encoder
  digitalWrite(ENCODER_A_PIN, HIGH);
  digitalWrite(ENCODER_B_PIN, HIGH);

  // Attach interrupt untuk encoder
  attachInterrupt(digitalPinToInterrupt(ENCODER_A_PIN), updateEncoder, CHANGE);
  attachInterrupt(digitalPinToInterrupt(ENCODER_B_PIN), updateEncoder, CHANGE);

  // Serial monitor untuk debug
  SerialUSB.begin(9600);

  // Aktifkan motor driver (enable)
  digitalWrite(REN_PIN, HIGH);
  digitalWrite(LEN_PIN, HIGH);
}

void loop() {
  // Tes gerakan motor
  SerialUSB.print("Encoder Position: ");
  SerialUSB.println(encoderPosition);

  // Putar motor ke kanan (forward)
  for(int i=0; i<250; i++){
  analogWrite(RPWM_PIN, i); // Sesuaikan kecepatan 0-255
  analogWrite(LPWM_PIN, 0);
  delay(100);
  }
  delay(1000); // Putar selama 2 detik

  // Hentikan motor
  analogWrite(RPWM_PIN, 0);
  analogWrite(LPWM_PIN, 0);
  delay(1000); // Tunggu 1 detik

  // Putar motor ke kiri (reverse)
  for(int i=0; i<250; i++){
  analogWrite(RPWM_PIN, 0);
  analogWrite(LPWM_PIN, i); // Sesuaikan kecepatan 0-255
  delay(100);
  }
  delay(1000); // Putar selama 2 detik

  // Hentikan motor
  analogWrite(RPWM_PIN, 0);
  analogWrite(LPWM_PIN, 0);
  delay(1000); // Tunggu 1 detik
}

void updateEncoder() {
  int MSB = digitalRead(ENCODER_A_PIN); // Most Significant Bit
  int LSB = digitalRead(ENCODER_B_PIN); // Least Significant Bit

  int encoded = (MSB << 1) | LSB; // Gabungkan kedua bit
  int sum = (lastEncoded << 2) | encoded; // Tambahkan hasil sebelumnya

  // Mengubah posisi encoder berdasarkan arah putaran
  if (sum == 0b1101 || sum == 0b0100 || sum == 0b0010 || sum == 0b1011) encoderPosition++;
  if (sum == 0b1110 || sum == 0b0111 || sum == 0b0001 || sum == 0b1000) encoderPosition--;

  lastEncoded = encoded; // Simpan nilai terakhir
}
