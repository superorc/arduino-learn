
const int pinVD1 = 11;
const int pinVD2 = 10;
const int pinVD3 = 9;

void setup() {
    pinMode(pinVD1, OUTPUT);
    pinMode(pinVD2, OUTPUT);
    pinMode(pinVD3, OUTPUT);
}

void loop() {
    analogWrite(pinVD1, random(50, 256));
    analogWrite(pinVD2, random(10, 50));
    analogWrite(pinVD3, random(50, 256));
    delay(random(10, 100));
}
