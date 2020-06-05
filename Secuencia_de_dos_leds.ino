// Designed by: Juan Rodrigo Guzman Martinez 

int LED1= 11; // Declaramos el pin 11 con el nombre de LED1
int LED2= 12; // Declaramos el pin 12 con el nombre de LED2
int TIEMPO= 1000; // Declarammos una variable llamada TIEMPO donde se almacenara el retardo

void setup() {
  
pinMode(LED1, OUTPUT); // Declaramos LED1 como una salida
pinMode(LED2, OUTPUT); // Declaramos LED2 como una salida
}

void loop() {
  
digitalWrite(LED1, HIGH); // Se enciende  el LED1
delay(TIEMPO); // Esperamos el retardo que esta almacenada en la variable TIEMPO
digitalWrite(LED1, LOW); // Se apaga el LED1
delay(TIEMPO); // Esperamos el retardo que esta almacenada en la variable TIEMPO
digitalWrite(LED2, HIGH); // Se enciende  el LED2
delay(TIEMPO); // Esperamos el retardo que esta almacenada en la variable TIEMPO
digitalWrite(LED2, LOW); // Se apaga el LED2
delay(TIEMPO); // Esperamos el retardo que esta almacenada en la variable TIEMPO

}
