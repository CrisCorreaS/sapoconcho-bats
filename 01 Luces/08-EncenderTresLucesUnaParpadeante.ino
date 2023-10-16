// Cristina Correa

int ledVerde = 10;
int ledAmarilla = 11;
int ledRoja = 12;
void setup() // esto se hará sólo una vez
{
  pinMode(ledVerde, OUTPUT);    // vamos a usar la ledVerde como salida -> luz verde
  pinMode(ledAmarilla, OUTPUT); // vamos a usar la ledAmarilla como salida -> luz amarilla
  pinMode(ledRoja, OUTPUT);     // vamos a usar la ledRoja como salida -> luz roja
}

void loop() // esto se va a repetir para siempre
{
  digitalWrite(ledVerde, HIGH); // pone la ledVerde en estado 'alto', a 5 voltios -> verde
  digitalWrite(ledRoja, HIGH);  // pone la ledRoja en estado 'alto', a 5 voltios -> rojo

  digitalWrite(ledAmarilla, HIGH); // pone la ledAmarilla en estado 'alto', a 5 voltios, y enciende el led
  delay(500);                      // espera medio segundo (500 milisegundos) sin hacer nada
  digitalWrite(ledAmarilla, LOW);  // pone la ledAmarilla en estado 'bajo', y apaga el led
  delay(500);                      // espera medio segundo sin hacer nada
}