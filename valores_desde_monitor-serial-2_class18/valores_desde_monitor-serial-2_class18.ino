//A=pi*radion^2
float radius;
float pi=3.1415;
float area;
String msg1 = "escribe el radio de tu circunferencia";
String msg2 = "El área de tu circunferencia es ";
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(msg1);              //pintamos el primer mensaje
  Serial.read();                      //toma el los valores que escribamos en el serial
  while (Serial.available() == 0) {  //mientras Serial.avaible sea 0 (osea vacio),serial.avaible detecta el numero de caracteres que hay en el input del serial
  }
  radius=Serial.parseFloat();
  area=pi*radius*radius;
  Serial.print(msg2);
  Serial.println(area);
  Serial.println();
}

