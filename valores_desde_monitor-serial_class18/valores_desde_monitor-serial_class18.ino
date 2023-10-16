int blinkTimes;  //numeroq ue leeremos desde el monitor seial
int ledPin=8;
String msg1 = "Por favor ingresa el numero de parpadeos";
String msg2 = "Tu número es: ";
int delayTime=500;
int i=0;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  Serial.println(msg1);              //pintamos el primer mensaje
  Serial.read();                      //toma el los valores que escribamos en el serial
  while (Serial.available() == 0) {  //mientras Serial.avaible sea 0 (osea vacio),serial.avaible detecta el numero de caracteres que hay en el input del serial
  }
  blinkTimes = Serial.parseInt();  //elimina los decimales
  for ( i = 0; i < blinkTimes; i++) {
    digitalWrite(ledPin, HIGH);
    delay(delayTime);
    digitalWrite(ledPin, LOW);
    delay(delayTime);
  }
  Serial.flush();//elimina los datos de entrada
}

