
// Designed by: Juan Rodrigo Guzman Martinez 

int LED= 11; // Declaramos el pin 11 con el nombre de LED
int TIEMPO= 1000; // Declarammos una variable llamada TIEMPO donde se almacenara el retardo

void setup() {
  
pinMode(LED, OUTPUT); // Declaramos LED como una salida

}

void loop() {
  
digitalWrite(LED, HIGH); // Se enciende el LED
delay(TIEMPO); // Esperamos el retardo que esta almacenada en la variable TIEMPO
digitalWrite(LED, LOW); // Se apaga el LED
delay(TIEMPO); // Esperamos el retardo que esta almacenada en la variable TIEMPO

}
