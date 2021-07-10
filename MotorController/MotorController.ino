#include<Servo.h>

Servo motor;
const int MOTOR_PIN = 8;
const int MIN_MOTOR_VALUE = 1000;
const int MAX_MOTOR_VALUE = 1000;
const int MIN_INPUT_VALUE = 0;
const int MAX_INPUT_VALUE = 1023;


void setup() {
  // put your setup code here, to run once:
  motor.attach(MOTOR_PIN);
  motor.writeMicroseconds(MIN_MOTOR_VALUE);
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  val = analogRead(A0, );
  val = map(val, MIN_INPUT_VALUE, MAX_INPUT_VALUE, MIN_MOTOR_VALUE, MAX_MOTOR_VALUE)
  motor.writeMicroseconds(val);
}
