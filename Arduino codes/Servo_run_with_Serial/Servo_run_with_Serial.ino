#include <Servo.h>
Servo myservo;
int deg = 0;
int deg_ = 0;



void setup() {
  // put your setup code here, to run once:
myservo.attach(2,600,2600); //these numebrs works best for my servo
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

if (Serial.available() >0){
  deg_ = Serial.parseInt();
  if (deg_ != NULL){
    deg = deg_;
  }
  
}
myservo.write(deg);

}
