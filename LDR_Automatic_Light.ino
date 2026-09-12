const int LEDPin = 13;
const int LDRPin = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(LDRPin, INPUT);
}

void loop()
{
  int LDRStatus = analogRead(LDRPin);

  if (LDRStatus <= 500)
  {
    digitalWrite(LEDPin, HIGH);
    Serial.print("Current Light Intensity Value is - ");
    Serial.println(LDRStatus);
  }
  else
  {
    digitalWrite(LEDPin, LOW);
    Serial.print("Current Light Intensity Value is - ");
    Serial.println(LDRStatus);
  }
}
