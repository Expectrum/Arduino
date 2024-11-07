#include <Servo.h>      

Servo servo1;     // crea objeto

int PINSERVO = 2;   
int PULSOMIN = 1000;    // pulso minimo en microsegundos
int PULSOMAX = 2000;    // pulso maximo en microsegundos
int VALORPOT;     // variable para almacenar valor leido en entrada A0
int ANGULO;     // valor de angulo a cargar en el servo

int POT = 0;      

void setup()
{
  servo1.attach(PINSERVO, PULSOMIN, PULSOMAX);  
}

void loop()
{
  VALORPOT = analogRead(POT);     // lee valor de entrada A0
  ANGULO = map(VALORPOT, 0, 1023, 0, 180);  
  servo1.write(ANGULO);       // envia al servo el valor del angulo
  delay(20);          
}
