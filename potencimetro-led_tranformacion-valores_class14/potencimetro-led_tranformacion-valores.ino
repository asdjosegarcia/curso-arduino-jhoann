int ledPin=10;
int potPin=A2;
int potVal;
int dt=100;
int light;
void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(potPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  potVal=analogRead(potPin);//recivimos un valor entre 0 y 1023 (10 bits)
  Serial.println(potVal);
  light=map(potVal,0,1023,0,255);//transformamos a 1 byte
  // Serial.println(light);

  //rastrea y transforma a equivalente 
  //rastrea potVal, 0 valor inicial del rastro, 1023valor maximo rastreo,0 valor inicial transformacion, 255 valor final transformacion
  analogWrite(ledPin,light );//enviamos una señal PWM entre 0 y 255
  delay(dt);
}
