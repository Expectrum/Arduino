int PULSADOR = 2; 
int LED=3; 
int ESTADO=LOW; 

void setup(){ 

pinMode(PULSADOR, INPUT); 
pinMode(LED, OUTPUT); 
digitalWrite(LED, LOW);

 } 

void loop (){ 

while(digitalRead(PULSADOR) == LOW){   // espera infinitamente hasta que se presione el pulsador
 }

digitalWrite(LED, HIGH);    // enciende LED
delay(5000);        // espera de 5 seg.
digitalWrite(LED, LOW);     // apaga LED

while(digitalRead(PULSADOR) == HIGH){   // espera como funcion antirebote simple
 }

}
