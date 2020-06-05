
// Designed by: Juan Rodrigo Guzman Martinez

int LED_ROJO= 13; // Declramos el pin 13 con el nombre de LED_ROJO
int LED_AMARILLO=12; // Declramos el pin 12 con el nombre de LED_AMARILLO
int LED_VERDE=11; // Declramos el pin 11 con el nombre de LED_VERDE

void setup() {
  
pinMode(LED_ROJO, OUTPUT); // Declaramos el LED_ROJO como una salida
pinMode(LED_AMARILLO, OUTPUT); // Declaramos el LED_AMARILLO como una salida
pinMode(LED_VERDE, OUTPUT); // Declaramos el LED_VERDE como una salida
}

void loop() {
  
digitalWrite(LED_ROJO, HIGH); // Se enciende el LED_ROJO
delay(4000); // Espera un retardo de 4 segundos 
digitalWrite(LED_ROJO, LOW); // Se apaga el LED_ROJO
digitalWrite(LED_AMARILLO, HIGH); // Se enciende el LED_AMARILO
delay(2000); // Espera un retardo de 2 segundos
digitalWrite(LED_AMARILLO, LOW); // Se apaga el LED_AMARILLO
digitalWrite(LED_VERDE, HIGH); // Se enciende el LED_VERDE
delay(4000); // Espera un retardo de 4 segundos 
digitalWrite(LED_VERDE, LOW); // Se apaga el LED_VERDE


}
