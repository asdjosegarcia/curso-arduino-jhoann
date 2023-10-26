int buzzPin = 8;
int potenciotiometerIn = A0;
int potentiometerValue;
void setup() {
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  potentiometerValue = analogRead(potenciotiometerIn);
  Serial.println(potentiometerValue);
  while (potentiometerValue > 1000) { //usamos un while aunque seria mas eficiente usar un if
    digitalWrite(buzzPin, HIGH);
    potentiometerValue = analogRead(potenciotiometerIn);
    Serial.println(potentiometerValue);
  }
    digitalWrite(buzzPin, LOW);

}
