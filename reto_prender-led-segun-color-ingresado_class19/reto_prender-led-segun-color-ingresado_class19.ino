int pinBlue1 = 2;
int pinGreen2 = 3;
int pinRed3 = 4;
String msg1 = "que led desea prender?";  // a pesar de que use un led rgb de tipo anodo ()
String msg2 = "sus opciones son las siguientes:";
String msg3 = "\"1\" for blue";  // \"1\" es para que me permita poner "" dentro del string
String msg4 = "\"2\" for green";
String msg5 = "\"3\" for red";
int userInputLed;
void turnOffLedWait() {
    Serial.println("ingrese cualquier caracter para iniciar nuevamente");
    while (Serial.available() == 0) {//espera a que ingresemos algo
  };
    Serial.read();//lee el valor y lo borra del serial
}

void setup() {
  Serial.begin(115200);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  digitalWrite(pinBlue1, HIGH);
  digitalWrite(pinGreen2, HIGH);
  digitalWrite(pinRed3, HIGH);
  Serial.println(msg1);
  Serial.println(msg2);
  Serial.println(msg3);
  Serial.println(msg4);
  Serial.println(msg5);
  while (Serial.available() == 0) {
  };
  userInputLed = Serial.parseInt();
  Serial.println(userInputLed);
  switch (userInputLed) {
    case 1:
      digitalWrite(pinBlue1, LOW);
      turnOffLedWait();
      break;

    case 2:
      digitalWrite(pinGreen2, LOW);
      turnOffLedWait();
      break;

    case 3:
      digitalWrite(pinRed3, LOW);
      turnOffLedWait();
      break;
    default:
      Serial.println("este no es un numero valido");
      break;
  }
}
