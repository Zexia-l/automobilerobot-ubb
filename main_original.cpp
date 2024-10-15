#include <Arduino.h>

#define RPWM 5
#define LPWM 6
#define R_EN 7
#define L_EN 8

#define encoderPinA 2
#define encoderPinB 3

volatile long encoderCount = 0;

long previousTime = 0;
float ePrevious = 0;
float eIntegral = 0;

//void handleEncoder();
float pidController(int target, float kp, float kd, float ki);
void moveMotor(int pwmPin, float u);

void setup() {
  Serial.begin(9600);

  pinMode(R_EN, OUTPUT);//digitalWrite(R_EN, LOW);
  pinMode(L_EN, OUTPUT);//digitalWrite(L_EN, LOW);
  pinMode(RPWM, OUTPUT);//digitalWrite(RPWM, LOW);
  pinMode(LPWM, OUTPUT);//digitalWrite(LPWM, LOW);


  pinMode(encoderPinA, INPUT);
  pinMode(encoderPinB, INPUT);

  //attachInterrupt(digitalPinToInterrupt(encoderPinA), handleEncoder, RISING);
}

void loop() {
  int target = 1000;

  float kp = 0.0;
  float kd = 0.0;
  float ki = 0.0;
  float u;
  //= pidController(target, kp, kd, ki);

  digitalWrite(R_EN, HIGH);
  //digitalWrite(L_EN, HIGH);

  moveMotor(RPWM, u);

  Serial.print(target);
  Serial.print(", ");
  Serial.print(encoderCount);
}


/*void handleEncoder() {
  if (digitalRead(encoderPinA) > digitalRead(encoderPinB)){
    encoderCount++;
  }
  else{
    encoderCount--;
  }
}*/

void moveMotor(int pwmPin, float u){
  float speed = fabs(u);

  if(speed > 255){
    speed = 255;
  }
 /*int direction = 1;
  if (u < 0){
    direction = 0;
  }
  digitalWrite(dirPin, direction);*/
  delay(1000);
  for(int i=0; i<256; i++){
    analogWrite(pwmPin, i);
    Serial.println(i);
    delay(100);
  }
  delay(500);
  for(int i=255;i>0;i--){
    analogWrite(pwmPin,i);
  // analogWrite(LPWM,255-i);
    delay(100);
  }
  
}

float pidController(int target, float kp, float kd, float ki) {
  long currentTime = micros();
  float deltaT = ((float)(currentTime - previousTime)) / 1.0e6;

  int e = encoderCount - target;
  float eDerivative = (e - ePrevious) / deltaT;
  eIntegral = eIntegral + e * deltaT;

  float u = (kp * e) + (kd * eDerivative) + (ki * eIntegral);

  previousTime = currentTime;
  ePrevious = e;

  return u;
}