#include <Arduino.h>
#include <MadgwickAHRS.h>
#include <movingAvg.h>
#include "Wire.h"
#include "I2Cdev.h"
#include "MPU6050.h"
#include "HMC5883L.h"

// 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
// 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

Madgwick filter;
HMC5883L mag;
MPU6050 accelgyro;

movingAvg rollAvg(10);
movingAvg pitchAvg(10);

int16_t mx, my, mz;
int16_t ax, ay, az;
int16_t gx, gy, gz;

float ax_offset = 0, ay_offset = 0, az_offset = 0;
float gx_offset = 0, gy_offset = 0, gz_offset = 0;

#define OUTPUT_READABLE_ACCELGYRO
//mengatur output keluaran yang dapat dibaca oleh manusia, data yang dihasilkan mungkin akan sulit jika diparsing dan berjalan dengan lambat saat UART


#define LED_PIN 13
bool blinkState = false;

void calibrate(int samples = 500){
    long ax_sum = 0, ay_sum = 0, az_sum = 0;
    long gx_sum = 0, gy_sum = 0, gz_sum = 0;

    for(int i = 0; i < samples; i++){
        //accelgyro.getRotation(&gx, &gy, &gz);
        accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
        ax_sum += ax;
        ay_sum += ay;
        az_sum += az;
        gx_sum += gx;
        gy_sum += gy;
        gz_sum += gz;
        delay(2);
    }
    ax_offset = ax_sum / samples;
    ay_offset = ay_sum / samples;
    az_offset = az_sum / samples;
    gx_offset = gx_sum / samples;
    gy_offset = gy_sum / samples;
    gz_offset = gz_sum / samples;

    SerialUSB.println("MPU6050 calibrated");
}

void setup(){
    Wire.begin();
    SerialUSB.begin(38400);
    filter.begin(25);

    SerialUSB.println("Memulai I2C....");
    mag.initialize();
    accelgyro.initialize();

    SerialUSB.println(mag.testConnection() ? "HMC5883L succes" : "HMC5883L failed");
    SerialUSB.println(accelgyro.testConnection() ? "MPU6050 succes" : "MPU6050 failed");
    calibrate();
    pinMode(LED_PIN, OUTPUT);
    delay(2000);
}

void loop(){
    // read raw heading measurements from device
    // read raw accel/gyro measurements from device
    float roll, pitch, yaw;
    accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
    mag.getHeading(&mx, &my, &mz);

    //ax -= ax_offset;
    //ay -= ay_offset;
    //az -= az_offset;
    gx -= gx_offset;
    gy -= gy_offset;
    gz -= gz_offset;

    // display tab-separated gyro x/y/z values 
    /*
    SerialUSB.print("mag:\t");
    SerialUSB.print(mx); SerialUSB.print("\t");
    SerialUSB.print(my); SerialUSB.print("\t");
    SerialUSB.print(mz); SerialUSB.print("\t");
    */
// To calculate heading in degrees. 0 degree indicates North
    float heading = atan2(my, mx);
    if(heading < 0)
      heading += 2 * M_PI;
    /*
    SerialUSB.print("heading:\t");
    SerialUSB.println(heading * 180/M_PI);
    */

    filter.update(gx, gy, gz, ax, ay, az, mx, my, mz);

    roll = filter.getRoll();
    pitch = filter.getPitch();
    yaw = filter.getYaw();
    
    float rollFiltered = rollAvg.reading(roll);
    float pitchFiltered = pitchAvg.reading(pitch);

    SerialUSB.print("pitch: ");
    SerialUSB.print(pitch);
    SerialUSB.print(" roll: ");
    SerialUSB.print(roll);
    SerialUSB.print(" yaw: ");
    SerialUSB.println(yaw);
    
    /*
    SerialUSB.print("a/g:\t");
    SerialUSB.print(ax); SerialUSB.print("\t");
    SerialUSB.print(ay); SerialUSB.print("\t");
    SerialUSB.print(az); SerialUSB.print("\t");
    SerialUSB.print(gx); SerialUSB.print("\t");
    SerialUSB.print(gy); SerialUSB.print("\t");
    SerialUSBUSB.println(gz);
    */
    

    // blink LED to indicate activity
    blinkState = !blinkState;
    digitalWrite(LED_PIN, blinkState);

}