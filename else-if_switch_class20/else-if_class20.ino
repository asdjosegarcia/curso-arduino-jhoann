int greenPin = 13;
int redPin = 12;
int bluePin = 11;
String ledColor;
String msg1 = "Escribe el color del led";
void setup() {
  Serial.begin(115200);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  Serial.println();
  Serial.println(msg1);
  while (Serial.available() == 0) {
  }
  ledColor = Serial.readString();

  if (ledColor == "verde") {
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
    digitalWrite(bluePin, HIGH);
  }
  else if (ledColor == "rojo") {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, HIGH);
  }
  else if (ledColor == "azul" ) {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, HIGH);
    digitalWrite(bluePin, LOW);
  } 
  else{
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, HIGH);
    digitalWrite(bluePin, HIGH);
    Serial.println("El valor es incorrecto. Intenta de nuevo");
  }
}
