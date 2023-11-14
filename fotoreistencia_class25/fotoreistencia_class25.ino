int gPin = 9;  //tendria que ser verde en este caso blanco
int rPin = 8;  //led rojo


int lightPin = A5;
int lightVal;
int dt = 100;

void setup() {
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(gPin, OUTPUT);
  pinMode(rPin, OUTPUT);
}

void loop() {
  lightVal = analogRead(lightPin);  //lo que lee el pin analogico
  Serial.println(lightVal);         //mostramos en el puerto serial el valor de la luz
  delay(dt);

  if (lightVal < 700) {
    digitalWrite(gPin, 1);  //1 significa HIGH
    digitalWrite(rPin, 0);  //1 significa HIGH
  }
  if (lightVal > 700) {
    digitalWrite(gPin, 0);  //1 significa HIGH
    digitalWrite(rPin, 1);  //1 significa HIGH
  }
}
