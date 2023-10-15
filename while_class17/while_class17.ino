int potPin = A1;  //pin por donde leemos el potenciometro
int ledPin = 2;   //numero de pin digital por donde prendemos el led
int potVal;       //valor de potenciometro
int i;
int dt = 400;
void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potVal = analogRead(potPin);//alamacenamos en variable el valor leido del pin
  while (potVal>1000) {//mientras potVal sea mayo a 1000 se ejecuta
    Serial.println(potVal);//pintamos en serial potVal
    digitalWrite(ledPin, HIGH); //prendemos led
    potVal=analogRead(potPin); //leemos el valor del potenciometro para actualizar el valor sino caemos en bucle infinito
    // delay(dt);//delay
  }
    Serial.println(potVal);//pintamos en serial la informacion
    digitalWrite(ledPin, LOW);// apagamos el led 

}
