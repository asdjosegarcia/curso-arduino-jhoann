int i;
int delayTime=200;

void setup() {
  Serial.begin(9600);
}

void loop() {//% calcula el resultado de la division, mientras que / hace una division
  for (i=0;i<10;(i%2!=0)? i=i+2:i=i+1){ //por alguna razon si pongo i++ no suma, pero el ciclo for si toma el i++ funciona
    Serial.println(i); //mostramos valor de i con salto de linea
    delay(delayTime); //tiempo de espera
  };
  Serial.println();//una vez terminado el ciclo damos un salto de linea
}
