int buzzPin = 8;
int number;
int potPin = A5;
int potVal;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {

  potVal = analogRead(potPin);
  Serial.println(potVal);
  while (potVal > 1000) {//lel hizo el mismo codigo que yo xd
    digitalWrite(buzzPin, HIGH);
    Serial.println(potVal);
    potVal = analogRead(potPin);
  }
  digitalWrite(buzzPin, LOW);
  /* if (potVal>1000){
  digitalWrite(buzzPin,HIGH);
}else{//aqui use un else envede un if por que hacia el codigo mas corto y no afecta en este caso, depues veremos is  no reutilizamos
  digitalWrite(buzzPin,LOW);

} */
}
