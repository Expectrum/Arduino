int LED1 = 2;
int LED2 = 3;
int LED3 = 4;

int BOT1 = 5;
int BOT2 = 6;
int BOT3 = 7;

int BUZZER = 10;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  pinMode(BOT1, INPUT_PULLUP);
  pinMode(BOT2, INPUT_PULLUP);
  pinMode(BOT3, INPUT_PULLUP);

  pinMode(BUZZER, OUTPUT);
}

bool ledEncendido1 = false;  // Estado inicial de LED1 (apagado)
bool ledEncendido2 = false;  // Estado inicial de LED2 (apagado)
bool ledEncendido3 = false;  // Estado inicial de LED3 (apagado)

bool botonEstado1 = false;   // Estado actual de BOT1
bool botonEstado2 = false;   // Estado actual de BOT2
bool botonEstado3 = false;   // Estado actual de BOT3

bool botonAnterior1 = false; // Estado anterior de BOT1
bool botonAnterior2 = false; // Estado anterior de BOT2
bool botonAnterior3 = false; // Estado anterior de BOT3

void loop(){
  botonEstado1 = digitalRead(BOT1);
  botonEstado2 = digitalRead(BOT2);
  botonEstado3 = digitalRead(BOT3);


  if(botonEstado1 && !botonAnterior1){
    ledEncendido1 = !ledEncendido1;
    digitalWrite(LED1, ledEncendido1 ? HIGH : LOW);
    }
    
    if(botonEstado2 && !botonAnterior2){
    ledEncendido2 = !ledEncendido2;
    digitalWrite(LED2, ledEncendido2 ? HIGH : LOW);
    }
    
    if(botonEstado3 && !botonAnterior3){
    ledEncendido3 = !ledEncendido3;
    digitalWrite(LED3, ledEncendido3 ? HIGH : LOW);
    }


  botonAnterior1 = botonEstado1;
  botonAnterior2 = botonEstado2;
  botonAnterior3 = botonEstado3;


  if (!ledEncendido1 && ledEncendido2 && ledEncendido3) {
    digitalWrite(BUZZER, HIGH);  // Enciende el buzzer
  } else {
   digitalWrite(BUZZER, LOW);   // Apaga el buzzer
  }


}
