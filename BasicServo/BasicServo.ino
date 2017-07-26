#include <Servo.h>

const int servoPin = 9;
int i = 31;
Servo servo;

void setup() {
  // put your setup code here, to run once:
  pinMode(servoPin, OUTPUT);
  servo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  // arc between -90 and +90 (180 degree arc) 
  while (i < 120) {
    servo.write(i++);
    delay(50);
  }
  while (i > 30) {
    servo.write(i--);
    delay(50);
  }
  
}
