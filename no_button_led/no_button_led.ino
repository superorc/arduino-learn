
const int pinLed = 10;
const int pinLedGreen = 8;
const int pinLedYellow = 6;
const int delayMs = 100;

void setup() {
    pinMode(pinLed, OUTPUT);
    pinMode(pinLedGreen, OUTPUT);
    pinMode(pinLedYellow, OUTPUT);
}

void loop() {
    digitalWrite(pinLed, HIGH);
    delay(delayMs);
    digitalWrite(pinLed, LOW);
    delay(delayMs);
    digitalWrite(pinLedGreen, HIGH);
    delay(delayMs);
    digitalWrite(pinLedGreen, LOW);
    delay(delayMs);
    digitalWrite(pinLedYellow, HIGH);
    delay(delayMs);
    digitalWrite(pinLedYellow, LOW);
    delay(delayMs);
}

