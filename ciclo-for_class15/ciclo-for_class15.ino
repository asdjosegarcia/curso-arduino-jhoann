int yellowPin = 13;
int redPin = 12;
int dt = 500;
int yellowBlink = 3;
int redBlink = 5;
int i;  //no entiendo por que la declaramos aqui si la podemos declarar en el for, ademas esto no dañaria otros ciclos for?

void setup() {
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  for (i = 0; i < yellowBlink; i = i + 1) {  //checar si pueso usar i++ envesde i=i+1
    digitalWrite(yellowPin, HIGH);
    delay(dt);
    digitalWrite(yellowPin, LOW);
    delay(dt);
  }
  for(i=0; i < redBlink; i++){//al parecer si se puede, y tambien se ahorro el int para declarar a i como 0, vale la pena? no se pero cuenta
  digitalWrite(redPin, HIGH);
  delay(dt);
  digitalWrite(redPin, LOW);
  delay(dt);
  }





}
