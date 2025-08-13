
const int pinRes = A0;
const int pinPWM = 11;

int valRes = 0;
int valPWM = 0;

void setup() {
  pinMode(pinPWM, OUTPUT);
  // reduce sound, need more info
  TCCR2B = 0b00000001;
  TCCR2A = 0b00000011;

}

void loop() {
  valRes = analogRead(pinRes);
  valPWM = map(valRes, 0,1023, 0,255);

  analogWrite(pinPWM, valPWM);
}
