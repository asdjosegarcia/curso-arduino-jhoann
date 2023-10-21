int greenPin=13;
int redPin=12;
int bluePin=11;
String ledColor;
String msg1="Escribe el color del led";
void setup() {
Serial.begin(115200);
pinMode(greenPin,OUTPUT);
pinMode(redPin,OUTPUT);
pinMode(bluePin,OUTPUT);

}

void loop() {
Serial.println();
Serial.println(msg1);
while(Serial.available()==0){

}
ledColor=Serial.readString();

if(ledColor == "verde"||ledColor == "VERDE"){
  digitalWrite(greenPin,LOW);
  digitalWrite(redPin,HIGH);
  digitalWrite(bluePin,HIGH);
}
if(ledColor == "rojo"||ledColor == "ROJO"){
  digitalWrite(greenPin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,HIGH);
}
if(ledColor == "azul"||ledColor == "AZUL"){
  digitalWrite(greenPin,HIGH);
  digitalWrite(redPin,HIGH);
  digitalWrite(bluePin,LOW);
}

}
