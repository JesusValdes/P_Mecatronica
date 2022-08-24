#define LED 13   //definimos el led


void setup() {
  // put your setup code here, to run once:
  pinMode (LED,OUTPUT );  //le decimos que queremos un output
 



}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (LED,HIGH);  //valor alto
  delay(1000);  //tiempo 
  digitalWrite (LED, LOW);  //valor bajo 
  delay(1000);  // tiempo



}
