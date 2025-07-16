
const int pinVD1 = 11;

void setup() {
    pinMode(pinVD1, OUTPUT);
}

void loop() {
    for (uint8_t i = 0; i < 255; i++) {
        analogWrite(pinVD1, i);
        delay(5);
    }
    for (uint8_t i = 255; i > 0; i--) {
        analogWrite(pinVD1, i);
        delay(5);
    }
}