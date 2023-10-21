String myName;
String msg1 ="escribe tu nombre";
String msg2 ="Hola, ";
String msg3 =", Bienvenido a el curso de arduino";

void setup() {
  Serial.begin(115200);

}

void loop() {
  Serial.println();
  Serial.println(msg1);
  while (Serial.available()==0){//esperamos a que el usuario ingrese algo

  }
  myName=Serial.readString();//le decimos que va a leer un string
  Serial.print(msg2);
  Serial.print(myName);
  Serial.print(msg3);


  

}
