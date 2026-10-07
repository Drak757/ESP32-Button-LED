const int ledPin = 23;
const int buttonPin = 18;
void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
   int buttonState = digitalRead(buttonPin);

   if(buttonState == LOW)
   {
    digitalWrite(ledPin, HIGH);
   } 
   else 
   {
    digitalWrite(ledPin, LOW);
   }
}