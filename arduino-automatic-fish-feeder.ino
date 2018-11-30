#include <Servo.h>
Servo servo;
#define pinServo 16

int derajat = 0;

void setup() {
  Serial.begin (9600);
  servo.attach(pinServo);
  servo.write(90);
}

void loop() {
  
  derajat = (derajat + 30) % 360;
  servo.write(derajat);
  Serial.println(derajat);
  int nilai = servo.read();
  delay(1000);

}
