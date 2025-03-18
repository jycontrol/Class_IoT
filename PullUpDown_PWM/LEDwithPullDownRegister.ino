const int INPUT_BUTTON_PIN = 2;
const int OUTPUT_LED_PIN = LED_BUILTIN;

void setup()
{
  pinMode(INPUT_BUTTON_PIN, INPUT);
  pinMode(OUTPUT_LED_PIN, OUTPUT);
}

void loop()
{
  // read the state of the pushbutton value
  int buttonState = digitalRead(INPUT_BUTTON_PIN);
  digitalWrite(OUTPUT_LED_PIN, buttonState);
  delay(30);
}
