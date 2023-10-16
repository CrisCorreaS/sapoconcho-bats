// Cristina Correa

void setup()
{
  pinMode(10,OUTPUT); // vamos a usar el pin 10 como salida -> luz verde
  pinMode(11, OUTPUT); // vamos a usar el pin 11 como salida -> luz amarilla
  pinMode(12, OUTPUT); // vamos a usar el pin 12 como salida -> luz roja
}

void loop()
{
  digitalWrite(10,HIGH); // pone el pin 10 en estado 'alto', a 5 voltios
  digitalWrite(11, HIGH); // pone el pin 11 en estado 'alto', a 5 voltios
  digitalWrite(12, HIGH); // pone el pin 12 en estado 'alto', a 5 voltios
}