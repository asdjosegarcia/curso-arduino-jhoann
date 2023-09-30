float V2;
int readVal;
int analogPin =A2;
int dt=100;
int ledPin=10;

void setup() {
Serial.begin(9600);
pinMode(analogPin, INPUT);
pinMode(ledPin,OUTPUT);
}

void loop() {
  readVal=analogRead(analogPin);
  V2=(5.*readVal)/1023;
    if(V2>=2.0 && V2<=4.0){ //si el voltaje es igual a 5.0
      digitalWrite(ledPin,HIGH);//digitalWrite por que son los pines digitales
    }
    if(V2<2.0 || V2>4.0){//este if apaga el led, sio o si necesitamos 2 if, si el voltaje no es igual a 5, se apaga
      digitalWrite(ledPin,LOW);//digitalWrite por que son los pines digitales
    }
  Serial.println(V2);
  delay(dt);
}
