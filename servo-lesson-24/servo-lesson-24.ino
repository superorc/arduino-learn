#include <Servo.h>

const int pinRes = A0;
const int pinSer = 12;
int angl;

Servo SerObj;

void setup() {
  SerObj.attach(pinSer);
}

void loop() {
  angl = analogRead(pinRes);
  angl = map(angl,0,1023,0,180);
  SerObj.write(angl);
}

