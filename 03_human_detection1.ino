int PIR = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  PIR = digitalRead(2);
  if (PIR == HIGH) {
    digitalWrite(13, HIGH);
  }
  if (PIR == LOW) {
    digitalWrite(13, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}