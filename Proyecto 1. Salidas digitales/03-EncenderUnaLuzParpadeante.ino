// Cristina Correa

void setup() // esto se hará sólo una vez
{
  pinMode(11, OUTPUT); // vamos a usar el pin 11 como salida -> amarilla
}

void loop() // esto se va a repetir para siempre
{
  digitalWrite(11, HIGH); // pone el pin 11 en estado 'alto', a 5 voltios, y enciende el led
  delay(500);             // espera medio segundo (500 milisegundos) sin hacer nada
  digitalWrite(11, LOW);  // pone el pin 11 en estado 'bajo', y apaga el led
  delay(500);             // espera medio segundo sin hacer nada
}