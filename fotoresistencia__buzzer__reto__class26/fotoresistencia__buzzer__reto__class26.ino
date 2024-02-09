//reto: hacer sonar el buzzer segun el nivel de luz
//valor maximo potenciometro/fotorestencia que no tengo:1023
//valor minimo potenciometro:0
int pinBuzzer = 10;
int pinAnalog = A5;
int potencimeterVal;
float m=0;
float buzzDelay;
void setup() {
  Serial.begin(9600);
  pinMode(pinAnalog, INPUT);
  pinMode(pinBuzzer, OUTPUT);
}


void loop() {
  potencimeterVal = analogRead(pinAnalog);
  // Serial.println(potencimeterVal);
  buzzDelay=(float(1000-60)/float(1023-0)) *potencimeterVal+60 ;//trnsformamos el valor del potencimetro
  Serial.println(buzzDelay);
  if(buzzDelay>80){
    // digitalWrite(pinBuzzer, 1);//opcion2
    tone(pinBuzzer, buzzDelay);
    delay(100);
    // delay/* Microseconds */(buzzDelay);//opcion2
    noTone(pinBuzzer);
    // digitalWrite(pinBuzzer,0);//opcion2
  }
    // digitalWrite(pinBuzzer,0);//opcion2

  
}



  //aca entramos con la pendiente de linea
  //formula:
  //M=(Y2-Y1) =resultado =
  //              /        (M * Valor ) + Y1 = resultado
  //M=(X2-X1) =resultado =
  //
  //ej de uso:
  //buzzer de 60 a 10000 micro segundos
  //entrada analogica de 0 a 1023
  //X1=0,Y1=60, X2=1023,Y2=10000
  //M=10000-60 = 9940 =
  //               /     9,716520039 * valorPotenciometro + 60
  //M=1023-0   = 1023 =
  //