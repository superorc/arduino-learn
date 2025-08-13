
#include <time.h>

const int pinSV = 2;
const int pinVD = 10;
bool state = 0;

// TODO - replace with MCU registers and C, no Arduino IDE

void setup() {
  pinMode(pinSV, INPUT);
  pinMode(pinVD, OUTPUT);

  Serial.begin(9600);
  Serial.println("Started");

  srand(time(0)); // Seed the random number generator with current time
}

void loop() {
  /* Turn on and off led and print random Manger message */
  if(digitalRead(pinSV)) {
    if(state) {
      state = 0;
    } else {
      state = 1;
    }
    digitalWrite(pinVD, state);
    Serial.println(get_message());
    delay(200);
  }
  
}


/*
    return string with random message from Manager
    TODO - read messages from txt on sd card
*/
const char *get_message() {
  char *msgs[] = {
      "Коллеги какой статус?",
      "Что по той задаче?",
      "Когда сборка?",
      "Там ещё баги!",
      "Сколько ещё времени нужно?",
      "Почему второую неделю не можем выпустить релиз?"
  };
  int num_msg = sizeof(msgs) / sizeof(msgs[0]);
  int random_index = rand() % num_msg;

  return msgs[random_index];
}
