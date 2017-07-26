#include "SevSeg.h"
SevSeg sevseg; //Instantiate a seven segment object
 
 void setup() {
  // put your setup code here, to run once:
  byte numDigits = 1;   
   byte digitPins[] = {2};
   byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
   bool resistorsOnSegments = false; // 'false' means resistors are on digit pins
   byte hardwareConfig = COMMON_ANODE; // See README.md for options
   sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
}

void loop() {
  // put your main code here, to run repeatedly:
  sevseg.setNumber(0);
}
