int x = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  x = analogRead(A0);
  analogWrite(10, x);
  delay(10); // Delay a little bit to improve simulation performance
}