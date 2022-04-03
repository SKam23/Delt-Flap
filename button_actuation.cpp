// For CMU DTD Booth Event 2022

#include <Keyboard.h>

const int button = 9; //CHANGE BUTTON PIN
const int led = 13; //CHANGE LED PIN 
int buttonState = 0; //State of button

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  Keyboard.begin();
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(button);
  if (buttonState == HIGH) {
    Keyboard.write(32); // Keyboard write for a blank space, ASCII
    digitalWrite(led, HIGH); // LED high when button is engaged
  }
  else {
    digitalWrite(led, LOW); // LED low when button is not engaged
  }
}
