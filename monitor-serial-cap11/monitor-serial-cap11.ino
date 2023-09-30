//calcular el area de un circulo A=PI*r^2

int wait = 500;//tiempo de delay
float area;
float Pi=3.1415;
int rad = 3;//radio
String mensaje1 = "El area de una circulo con area de un circulo con radio de ";    //por alguna razon no se puede usarlka palabra operator  
String mensaje2 = " es de ";     

void setup() {
  Serial.begin(9600);//recivimos la informacion del arduino a una tasa de 9600bits por segundo
}

void loop() {
  area = Pi*rad*rad;
  // int z=x-y; //declaramos la variable en medio del codigo, ojo no es una variable global como las del inicio
  Serial.print(mensaje1 );//print imprime en la misma linea, util para concatenar
  Serial.print( rad );
  Serial.print(mensaje2 );
  // Serial.print("x + y = "); //al aprecer hay diferencia entre '' y ""
  Serial.println( area);//pintamos informacion en pantalla,  println imprime y luego hace un salto de linea
  delay(wait);
  rad= rad+1;
  }