 
void setup() {
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(11, HIGH);
  delay(400);
  digitalWrite(11, LOW);
  delay(600);
}
