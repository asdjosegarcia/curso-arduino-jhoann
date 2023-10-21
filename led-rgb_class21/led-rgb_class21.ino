int redPin=11;
int greenPin=10;
int bluePin=9;
String color;
String msg1= "Por favor elige un color";
void setup() {
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);

}

void loop() {
  Serial.println();
  Serial.println(msg1);
  while(Serial.available()==0){ //esperamos hasta que el usuario escriba algo

  }
  color=Serial.readString();
  if(color=="red"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,HIGH);
  }
    if(color=="green"){
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,HIGH);
  }  
  if(color=="blue"){
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,LOW);
  }
    if(color=="turquesa"){
    analogWrite(redPin,255);
    analogWrite(greenPin,0);
    analogWrite(bluePin,105);
  }

}
