#include <Arduino.h>
#include "Wire.h"
#include "I2Cdev.h"
#include "MPU6050.h"
#include "HMC5883L.h"

HMC5883L mag;
MPU6050 accelgyro;

int16_t mx, my, mz;
int16_t ax, ay, az;
int16_t gx, gy, gz;

#define OUTPUT_READABLE_ACCELGYRO
//mengatur output keluaran yang dapat dibaca oleh manusia, data yang dihasilkan mungkin akan sulit jika diparsing dan berjalan dengan lambat saat UART


#define LED_PIN 13
bool blinkState = false;

void setup(){
    Wire.begin();
    Serial.begin(38400);

    Serial.println("Memulai I2C....");
    mag.initialize();
    accelgyro.initialize();

    Serial.println(mag.testConnection() ? "HMC5883L succes" : "HMC5883L failed");
    Serial.println(accelgyro.testConnection() ? "MPU6050 succes" : "MPU6050 failed");
    pinMode(LED_PIN, OUTPUT);
}

void loop(){
    // read raw heading measurements from device
    // read raw accel/gyro measurements from device
    accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
    mag.getHeading(&mx, &my, &mz);

    // display tab-separated gyro x/y/z values
    Serial.print("mag:\t");
    Serial.print(mx); Serial.print("\t");
    Serial.print(my); Serial.print("\t");
    Serial.print(mz); Serial.print("\t");
// To calculate heading in degrees. 0 degree indicates North
    float heading = atan2(my, mx);
    if(heading < 0)
      heading += 2 * M_PI;
    Serial.print("heading:\t");
    Serial.println(heading * 180/M_PI);

    Serial.print("a/g:\t");
    Serial.print(ax); Serial.print("\t");
    Serial.print(ay); Serial.print("\t");
    Serial.print(az); Serial.print("\t");
    Serial.print(gx); Serial.print("\t");
    Serial.print(gy); Serial.print("\t");
    Serial.println(gz);

    // blink LED to indicate activity
    blinkState = !blinkState;
    digitalWrite(LED_PIN, blinkState);

}