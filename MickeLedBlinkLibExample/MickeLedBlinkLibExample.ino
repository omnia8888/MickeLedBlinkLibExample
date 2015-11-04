/*
 Name:		MickeLedBlinkLibExample.ino
 Created:	11/4/2015 3:14:33 AM
 Author:	Micke
*/

#include "MickeLedPulse.h"

MickeLedPulse ledPulse(3);

// the setup function runs once when you press reset or power the board
void setup() {

}

// the loop function runs over and over again until power down or reset
void loop() {
	analogWrite(3, 100);
}
