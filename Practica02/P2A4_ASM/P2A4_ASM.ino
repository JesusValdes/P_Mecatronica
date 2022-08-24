void setup()
{
DDRB = DDRB | B10000000; // Data Direction Register B: Inputs 0-6, Output 7
}
void loop()
{
asm (
"inicio: \n\t"
"sbi 0x05,0x07 \n\t"  // seteamos el bit 
"call tiempo \n\t"   //llamamos la función tiempo 
"cbi 0x05,0x07 \n\t" //Clearea el bit
"call tiempo \n\t"  //llama la función tiempo 
"jmp main \n\t"  //nos brincamos a main 
  
"tiempo: \n\t"   // es nuestra funcion tiempo 
"LDI r22, 45 \n\t"   // cargamos en el registro 22 el valor 45
"LOOP_3: \n\t"    // nos da un loop 
"LDI r21, 255 \n\t"  // carga en el registro 21 el valor 255
"LOOP_2: \n\t"   // otro loop 
"LDI r20, 255 \n\t"  // en el registro 20 cargas el valor 255
"LOOP_1: \n\t"        // loop 
"DEC r20 \n\t"       // decrementa el valor de r20 en uno 
"BRNE LOOP_1 \n\t"        // si el valor no es 0, sigue a siguiente linea. Es un loop, cuando z=0 entonces nos manda a Loop 1 
"DEC r21 \n\t"  // decrementa el valor de r21 en uno 
"BRNE LOOP_2 \n\t"  // Si no es 0 pasa
"DEC r22 \n\t"  // decrementa en 1 el valor de r22
"BRNE LOOP_3 \n\t" // mismo loop que los anteriores pero se va a 3 
"ret \n\t"  // termina la función tiempo y nos regresa a jmp main 
);
}
