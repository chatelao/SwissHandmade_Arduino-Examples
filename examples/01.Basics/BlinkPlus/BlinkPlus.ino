/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified  8 May 2014
  by Scott Fitzgerald

  modified 19 Dec 2015
  by Olivier Chatelain
 */

#define LED_PIN_FIRST 13
#define LED_PIN_LAST  13

#define DELAY_HIGH_ON  100
#define DELAY_LOW_OFF 1000


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize the pin range "first" to "last" as an output.
  for(int i = LED_PIN_FIRST; i <= LED_PIN_LAST; i++) pinMode(i, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(int i = LED_PIN_FIRST; i <= LED_PIN_LAST; i++) digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay( DELAY_HIGH_ON );  // wait for a second
  for(int i = LED_PIN_FIRST; i <= LED_PIN_LAST; i++) digitalWrite(i, LOW);    // turn the LED off by making the voltage LOW
  delay( DELAY_LOW_OFF );              // wait for a second
}