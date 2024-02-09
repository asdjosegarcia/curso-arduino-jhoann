/* int buzzPin = 4;
float buzzDelay;
int potPin = A4;
int potVal;



void setup() {
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
  pinMode(potPin, INPUT);
}

void loop() {
  potVal = analogRead(potPin);  //lectura analagica 0 a 1023
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
  buzzDelay = (9940. / 1023.) * potVal + 60;  //transformamos valores de 60 a 1000 a un equivalente entre 0 y 1023
  Serial.println(potVal);



  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(buzzDelay);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzDelay);
} */