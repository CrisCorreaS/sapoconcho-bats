/*
Utilizamos el método map(), que es un método que convierte o mapea el rango de valores que se obtienen del potenciómetro (0-1023) a un nuevo rango que es el rango de brillo que pueden manejar los LED (0-255).

El método map() en Arduino toma cinco argumentos:

  - El valor que queremos mapear (en este caso, valorPotenciometro que es el valor leído del potenciómetro).
  - El límite inferior del rango actual de ese valor (en este caso, 0, porque el potenciómetro puede dar valores entre 0 y 1023).
  - El límite superior del rango actual de ese valor (en este caso, 1023).
  - El límite inferior del rango al que queremos mapear el valor (en este caso, 0, porque el brillo de los LED puede estar entre 0 y 255).
  - El límite superior del rango al que queremos mapear el valor (en este caso, 255).

En resumen:
Primero ponemos el valor del potenciómetro que queramos convertir (valorPotenciometro), luego el intervalo sobre el que está medido (0, 1023) y por último el intervalo al que se tiene que convertir (0, 255).
*/

int potenciometroA1 = 15; 
int ledAmarilla = 11;

void setup() {
  pinMode(potenciometroA1, INPUT);
  pinMode(ledAmarilla, OUTPUT);
}

void loop() {
  int valorPotenciometro = analogRead(potenciometroA1);  // Leemos el valor del potenciómetro (0-1023)
  int brilloLed = map(valorPotenciometro, 0, 1023, 0, 255);  // Mapeamos el valor del potenciómetro (0-1023) al rango del brillo del LED (0-255), haciendo una equivalencia
  
  analogWrite(ledAmarilla, brilloLed);  // Encendemos el LED amarillo con el brillo calculado (el cual es variable)
  
  delay(10);
}
