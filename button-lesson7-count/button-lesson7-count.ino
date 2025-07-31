
/* Serial print button press count */
const int pinKey = 2;
const int pinLed1 = 13;
const int pinLed2 = 12;
const int pinLed3 = 11;
const int pinLed4 = 10;
int pressCount = 0;
int lastButtonState;

void setup() {
  pinMode(pinKey, INPUT);
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
  Serial.begin(9600);
  Serial.println("Button Press Counter");
}

void loop() {
  delay(100);
  int currentButtonState = digitalRead(pinKey);
  
  if (currentButtonState == LOW && lastButtonState == HIGH) {
    delay(50);
    if (digitalRead(pinKey) == LOW) {
      pressCount++;
      Serial.print("Press count: ");
      Serial.println(pressCount);

      // led
      digitalWrite(pinLed1, 1);
      delay(100);
      digitalWrite(pinLed1, 0);
    }
  }
  
  lastButtonState = currentButtonState;
}
