
/* Change led state by button */

const int pinKey = 2;
const int pinLed = 10;
bool actLed = 0;

void setup() {
    pinMode(pinKey, INPUT);
    pinMode(pinKey, OUTPUT);
}

void loop() {
    if(digitalRead(pinKey)) {
        actLed = !actLed;
        digitalWrite(pinLed, actLed);

        while(digitalRead(pinKey)) {
            delay(30);
        }
    }
}
