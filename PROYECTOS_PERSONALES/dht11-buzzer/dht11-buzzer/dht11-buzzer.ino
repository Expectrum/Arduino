#include <DHT.h>
#include <DHT_U.h>

int SENSOR = 3;
int BUZZER = 2;
int HUMEDAD;
int TEMPERATURA;

DHT dht(SENSOR, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(BUZZER, OUTPUT);
}

void parpadearBuzzer(int repeticiones, int duracion) {
  for (int i = 0; i < repeticiones; i++) {
    digitalWrite(BUZZER, HIGH);
    delay(duracion);
    digitalWrite(BUZZER, LOW);
    delay(200);
  }
}

void loop() {
  TEMPERATURA = dht.readTemperature();
  HUMEDAD = dht.readHumidity();

  Serial.print("Temperatura: ");
  Serial.print(TEMPERATURA);
  Serial.print(" Humedad: ");
  Serial.println(HUMEDAD);
  
  delay(500);

  if (TEMPERATURA <= 25 && HUMEDAD >=5) { //la temperatura debe ser inferior a 20ºc y la humedad superior al 5%
    parpadearBuzzer(4, 50);  // El buzzer parpadea 4 veces con duración de 50 ms
  } else {
    digitalWrite(BUZZER, LOW);
  }
}
