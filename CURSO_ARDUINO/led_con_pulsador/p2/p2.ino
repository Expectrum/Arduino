int PULSADOR = 2; 
int LED=3; 
int ESTADO=LOW; 

void setup(){ 

pinMode(PULSADOR, INPUT); 
pinMode(LED, OUTPUT); 
digitalWrite(LED, LOW);

 } 

void loop (){ 

while(digitalRead(PULSADOR) == HIGH){   // espera infinitamente hasta que se presione el pulsador
 }

ESTADO = digitalRead(LED);    // leo estado del LED para saber si esta encendido o apagado
digitalWrite(LED, !ESTADO);     // escribo en la salida el valor apuesto al leido con anterioridad

while(digitalRead(PULSADOR) == LOW){   // espera como funcion antirebote simple
 }

}
