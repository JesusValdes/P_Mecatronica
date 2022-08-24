//definicion
#define R1 8
#define Y1 9
#define G1 10
#define R2 11
#define Y2 12
#define G2 13

//definimos el comportamiento
void setup() {
  pinMode(R1,OUTPUT); //salida
  pinMode(Y1,OUTPUT); //salida
  pinMode(G1,OUTPUT); //salida
  pinMode(R2,OUTPUT); //salida
  pinMode(Y2,OUTPUT); //salida
  pinMode(G2,OUTPUT); //salida
}// setup

void loop() {
  digitalWrite(Y1,LOW); //valor bajo
  digitalWrite(R2,LOW); //valor bajo
  digitalWrite(R1,HIGH); // valor alto
  digitalWrite(G2,HIGH); // valor alto
  delay(5000); //tiempo prendido
  digitalWrite(G2,LOW); //bajo
  digitalWrite(Y2,HIGH); //alto
  delay(1000); //tiempo
  digitalWrite(Y2,LOW); //bajo
  digitalWrite(R2,HIGH); //alto
  digitalWrite(R1,LOW); //bajo
  digitalWrite(G1,HIGH); // alto
  delay(5000); //tiempo
  digitalWrite(G1,LOW); //bajo
  digitalWrite(Y1,HIGH); //alto
  delay(1000); //tiempo 
  
  
}// loop
