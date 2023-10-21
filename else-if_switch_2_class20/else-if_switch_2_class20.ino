int greenPin = 13;
int redPin = 12;
int bluePin = 11;
int ledColor;
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
  while (Serial.available() == 0) {//esperamos a que el usuario escriba
  }
  ledColor = Serial.parseInt();
  switch (ledColor) {//variable que vamos a procesar
    case 1: //si el ccalor de led color es 1
      digitalWrite(greenPin, LOW);
      digitalWrite(redPin, HIGH);
      digitalWrite(bluePin, HIGH);
      break;
    case 2:
      digitalWrite(greenPin, HIGH);
      digitalWrite(redPin, LOW);
      digitalWrite(bluePin, HIGH);
      break;
    case 3:
      digitalWrite(greenPin, HIGH);
      digitalWrite(redPin, HIGH);
      digitalWrite(bluePin, LOW);
      break;
    default:
      digitalWrite(greenPin, HIGH);
      digitalWrite(redPin, HIGH);
      digitalWrite(bluePin, HIGH);
      Serial.println("el valor es incorrecto intenta de nuevo");
  }
}