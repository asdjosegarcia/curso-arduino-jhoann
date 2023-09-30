int analogPin=A0;//pin analogico 
float V2; //declaramos v2 como float por que almacenaremos numero decimales
int analogVal;//inicializamos la variable sin un valor 
int dt=500; //delay time
void setup() {
  pinMode(analogPin,INPUT);//configuramos el pin A0 como entrada
  Serial.begin(9600);//le indicamos a arduino que enviara datos a la pc con un ritmo de 9600 bits por segundo 
}

void loop() {
  analogVal=analogRead(analogPin);//almacenamos lo que lea el pin analogPin(A0) en la variable analogVal
  V2=(5.*analogVal)/1023.; //llevan "." para que sean tomados como numero decimales
  //1023 valor maximo soportado por la entrada(5V), p
  Serial.println(V2);//pintamos 
  delay(dt);//establecemos un delay para que tarde en volver a mostrar otro valor
  
}
