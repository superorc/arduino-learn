
/* Turn on and off led with button */

const int pinVD1 = 11;
const int pinBTN1 = 2;
const int delayMs = 3;
bool action = 0;
bool ledOn = 0;

void setup() {
    pinMode(pinVD1, OUTPUT);
    pinMode(pinBTN1, INPUT);
}

void loop() {
    /* read button */
    action = digitalRead(pinBTN1);

    /* turn on light */
    if(action && !ledOn) {
        for (uint8_t i = 0; i < 255; i++) {
            analogWrite(pinVD1, i);
            delay(delayMs);
        }
        ledOn = true;
    /* turn off */
    } else if (action && ledOn) {
        for (uint8_t i = 255; i > 0; i--) {
            analogWrite(pinVD1, i);
            delay(delayMs);
        }
        ledOn = false;
    }
}
