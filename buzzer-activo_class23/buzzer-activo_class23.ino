int buzzPin=8;
int number;
String msg1="Por favor introduce tu numero: ";
int dt=2000;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin,OUTPUT);
}

void loop() {
Serial.println();
Serial.println(msg1);
while(Serial.available()==0){

}
number=Serial.parseInt();
if (number>10){
  digitalWrite(buzzPin,HIGH);
  delay(dt);
  digitalWrite(buzzPin,LOW);


}
}
