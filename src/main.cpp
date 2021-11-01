#include <Arduino.h>

#define MODE1 4 // Digital Input 4
#define MODE2 5 // Digital Input 4
#define MODE3 6 // Digital Input 4

#define DIR 9
#define STEP 8
#define STANDBY 10

void setup() {
  // Initalise MODE pins
  pinMode(MODE1, OUTPUT);
  pinMode(MODE2, OUTPUT);
  pinMode(MODE3, OUTPUT);
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(STANDBY, OUTPUT);

  digitalWrite(DIR, LOW);  // set direction

  digitalWrite(STANDBY, HIGH); // Wake up controller

  // Set MODE pins to full-step
  digitalWrite(MODE1, LOW);
  digitalWrite(MODE2, LOW);
  digitalWrite(MODE3, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(STEP, LOW);
  delay(100);
  
  digitalWrite(STEP, HIGH);
  delay(1000);
}