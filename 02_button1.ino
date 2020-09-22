int b1 = 0;

int b2 = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  b1 = digitalRead(2);
  b2 = digitalRead(3);
  if (b1 == HIGH || b2 == HIGH) {
    digitalWrite(13, HIGH);
  }
  if (b1 == LOW && b2 == LOW) {
    digitalWrite(13, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}