
#define LED 3
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly
  Serial.println("New Loop");
  for (int i = 0; i <= 255; i += 1) {
    analogWrite(LED, i);
    delay(10);
  }

  Serial.println("Going Down");
  for (int i = 255; i >= 0; i -= 1) {
    analogWrite(LED, i);
    delay(10);
  }
}
