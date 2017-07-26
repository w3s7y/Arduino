
const int red = 11;
const int amber = 10; 
const int green = 9; 

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red, LOW);
  digitalWrite(amber, LOW);
  digitalWrite(green, HIGH);

  delay(4000);

  digitalWrite(amber, HIGH);
  digitalWrite(green, LOW);

  delay(800);

  digitalWrite(red, HIGH);
  digitalWrite(amber, LOW);

  delay(4000);

  digitalWrite(amber, HIGH);

  delay(800);
}
