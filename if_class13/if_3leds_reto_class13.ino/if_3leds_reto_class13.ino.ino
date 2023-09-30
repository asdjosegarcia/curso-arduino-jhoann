float V2;
int readVal;
int analogPin =A2;
int dt=100;
int led1Pin=2;
int led2Pin=3;
int led3Pin=4;


void setup() {
Serial.begin(9600);
pinMode(analogPin, INPUT);
pinMode(led1Pin,OUTPUT);
pinMode(led2Pin,OUTPUT);
pinMode(led3Pin,OUTPUT);

}

void loop() {
  readVal=analogRead(analogPin);
  V2=(5.*readVal)/1023;
  switch(true){
   case 1:
    if(V2>0.0 && V2<3.0){
      digitalWrite(led1Pin,HIGH);
      digitalWrite(led2Pin,LOW);
      digitalWrite(led3Pin,LOW);
      break;
    }
    case 2:
     if(V2>3.0 && V2<4.0){
      digitalWrite(led1Pin,LOW);
      digitalWrite(led2Pin,HIGH);
      digitalWrite(led3Pin,LOW);
      break;
    }
    case 3:
     if(V2>4.0){
      digitalWrite(led1Pin,LOW);
      digitalWrite(led2Pin,LOW);
      digitalWrite(led3Pin,HIGH);
      break;
    }
    
    default:
      // digitalWrite(led1Pin,LOW);
      break;


  }
/*     if(V2>=2.0){ //si el voltaje es igual a 5.0
      digitalWrite(led1Pin,HIGH);//digitalWrite por que son los pines digitales
    }
    if(V2<2.0 || V2>4.0){//este if apaga el led, sio o si necesitamos 2 if, si el voltaje no es igual a 5, se apaga
      digitalWrite(led1Pin,LOW);//digitalWrite por que son los pines digitales
    } */
  Serial.println(V2);
  delay(dt);
}
