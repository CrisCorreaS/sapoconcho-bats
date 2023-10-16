// Cristina Correa

int ledVerde = 10; // creamos una variable con nombre ledVerde y valor 10
void setup()
{
  pinMode(ledVerde, OUTPUT); // vamos a usar el pin 'ledVerde' como salida
}

void loop()
{
  digitalWrite(ledVerde, HIGH); // pone el pin 'ledVerde' en estado 'alto', a 5 voltios, y enciende el led
  delay(500);                   // espera medio segundo sin hacer nada
  digitalWrite(ledVerde, LOW);  // pone el pin 'ledVerde' en estado 'bajo', y apaga el led
  delay(500);                   // espera medio segundo sin hacer nada
}