
const int pinRes = A0;
const int pinLed = 10;

int valRes = 0;
int valPWM = 0;

void setup() {
  pinMode(pinLed, OUTPUT);
}

void loop() {
  valRes = analogRead(pinRes);
  valPWM = map(valRes, 0,1023, 0,255);
  analogWrite(pinLed, valPWM);
}
