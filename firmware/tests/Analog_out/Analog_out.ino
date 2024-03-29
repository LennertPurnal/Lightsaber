/*
  Fading

  This example shows how to fade an LED using the analogWrite() function.

  The circuit:
  - LED attached from digital pin 9 to ground through 220 ohm resistor.

  created 1 Nov 2008
  by David A. Mellis
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Fading
*/

int ledPin = 9;    // LED connected to digital pin 9

void setup() {
  // nothing happens in setup
}

void loop() {
  // arpegio:
//  for (int fadeValue = 204 ; fadeValue <= 255; fadeValue += 6) {
//    // sets the value (range from 0 to 255):
//    analogWrite(ledPin, fadeValue);
//    // wait for 30 milliseconds to see the dimming effect
//    delay(500);
//  }

  
  analogWrite(ledPin, 204);

}
