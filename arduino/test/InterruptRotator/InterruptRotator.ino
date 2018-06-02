// -----
// InterruptRotator.ino - Example for the RotaryEncoder library.
// This class is implemented for use with the Arduino environment.
// Copyright (c) by Matthias Hertel, http://www.mathertel.de
// This work is licensed under a BSD style license. See http://www.mathertel.de/License.aspx
// More information on: http://www.mathertel.de/Arduino
// -----
// 18.01.2014 created by Matthias Hertel
// -----

// This example checks the state of the rotary encoder in the loop() function.
// The current position is printed on output when changed.

// Hardware setup:
// Attach a rotary encoder with output pins to A2 and A3.
// The common contact should be attached to ground.

#include "RotaryEncoder.h"

// Setup a RoraryEncoder for pins A2 and A3:
RotaryEncoder encoder(0, 1);

void setup()
{
  Serial.begin(9600);
  Serial.println("SimplePollRotator example for the RotaryEncoder library.");

  attachInterrupt(2, tick, CHANGE);
  attachInterrupt(3, tick, CHANGE);
  
} // setup()


void tick() {
  encoder.tick();
}

/*
 * 
 ISR(PCINT1_vect) {
  encoder.tick(); // just call tick() to check the state.
}
*/


// Read the current position of the encoder and print out when changed.
void loop() {
  static int pos = 0;

  int newPos = encoder.getPosition();
  if (pos != newPos) {
    Serial.print(newPos);
    Serial.println();
    delay(100);
    pos = newPos;
  }
}

// The End
