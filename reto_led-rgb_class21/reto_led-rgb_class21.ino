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
  if(color=="red"){//primario
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,HIGH);
  }
  if(color=="blue"){//primario
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,LOW);
  }
      if(color=="yellow"){//primario
    analogWrite(redPin,128);
    analogWrite(greenPin,128);
    analogWrite(bluePin,255);
  }
    if(color=="green"){//secundario
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,HIGH);
  }  
    if(color=="purple"){//secundario
    analogWrite(redPin,128);
    analogWrite(greenPin,255);
    analogWrite(bluePin,128);
  }
      if(color=="orange"){//secundario
    analogWrite(redPin,0);
    analogWrite(greenPin,128);
    analogWrite(bluePin,255);
  }
  
/*     analogWrite(redPin,0);
    analogWrite(greenPin,128);
    analogWrite(bluePin,255); */
  
  /* amarillo 128,128,255 */ //primario 
  /* morado 128,255,128 */ //secundario
  /* naranja  0,128, 255*/ //secundario
  /*  */


}
















