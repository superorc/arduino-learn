
const int pinRes = A5;
const int pinLed = 9;
int valRes = 0;
int valPWM = 0;

void setup() {
  pinMode(pinLed, OUTPUT);
}

void loop() {
  // read
  valRes = analogRead(pinRes);
  // write
  //valPWM = map(valRes, 0, 1023 , 0,255);
  valPWM = map(valRes, 800, 100, 255, 0);

  analogWrite(pinLed, valPWM);
}
