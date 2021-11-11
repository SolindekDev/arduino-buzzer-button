int stateButton;

void setup() {
  // Buzzer
  pinMode(11, OUTPUT);
  // Button
  pinMode(9, INPUT);
  // Leds
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}
 
void loop() {
  stateButton = digitalRead(9);
  Serial.println(stateButton);
  if (stateButton == HIGH) {
    digitalWrite(11, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
  } else {
    digitalWrite(11, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
  }
}
