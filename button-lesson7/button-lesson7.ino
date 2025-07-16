
const int pinKey = 2;
const int pinLed1 = 13; // blink on press
const int pinLed2 = 12; // blink on release
const int pinLed3 = 11; // blink if pressed for 2 sec
const int pinLed4 = 10; // blink while pressed for 2 sec
int timerKey = 0;

void setup() {
  pinMode(pinKey, INPUT);
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
}

void loop() {
  if(digitalRead(pinKey)) {
    /* turn on led1 when pressed*/
    timerKey = 0;
    digitalWrite(pinLed1, 1);
    delay(100);
    digitalWrite(pinLed1, 0);

    /* when pressed */
    while(digitalRead(pinKey)) {
      if(timerKey < 11) { timerKey ++; }

      if(timerKey == 10) {digitalWrite(pinLed3, 1);}
      if(timerKey > 10) {digitalWrite(pinLed4, 1);}
      delay(100);

      if(timerKey == 10) {digitalWrite(pinLed3, 0);}
      if(timerKey > 10) {digitalWrite(pinLed4, 0);}
      delay(100);
    }

    digitalWrite(pinLed2, 1);
    delay(100);
    digitalWrite(pinLed2, 0);

  }
}
