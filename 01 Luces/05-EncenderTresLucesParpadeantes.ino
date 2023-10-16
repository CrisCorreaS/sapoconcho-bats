// Cristina Correa

void setup() // esto se hará sólo una vez
{
  pinMode(10, OUTPUT); // vamos a usar el pin 10 como salida -> luz verde
  pinMode(11, OUTPUT); // vamos a usar el pin 11 como salida -> luz amarilla
  pinMode(12, OUTPUT); // vamos a usar el pin 12 como salida -> luz roja
}

void loop() // esto se va a repetir para siempre
{
  digitalWrite(10, HIGH); // pone el pin 10 en estado 'alto', a 5 voltios, y enciende el led
  delay(500);             // espera medio segundo (500 milisegundos) sin hacer nada
  digitalWrite(10, LOW);  // pone el pin 10 en estado 'bajo', y apaga el led
  delay(500);             // espera medio segundo sin hacer nada

  digitalWrite(11, HIGH); // pone el pin 11 en estado 'alto', a 5 voltios, y enciende el led
  delay(500);             // espera medio segundo (500 milisegundos) sin hacer nada
  digitalWrite(11, LOW);  // pone el pin 11 en estado 'bajo', y apaga el led
  delay(500);             // espera medio segundo sin hacer nada

  digitalWrite(12, HIGH); // pone el pin 12 en estado 'alto', a 5 voltios, y enciende el led
  delay(500);             // espera medio segundo (500 milisegundos) sin hacer nada
  digitalWrite(12, LOW);  // pone el pin 12 en estado 'bajo', y apaga el led
  delay(500);             // espera medio segundo sin hacer nada
}