
const int pinKey = 2;
const int pinLed = 10;
bool action = 0;

// run once
void setup() {
    pinMode(pinKey, INPUT);
    pinMode(pinLed, OUTPUT);
}

// run in loop
void loop() {
    action = digitalRead(pinKey);
    digitalWrite(pinLed, action);
}
