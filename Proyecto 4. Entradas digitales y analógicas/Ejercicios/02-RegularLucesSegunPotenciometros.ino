// Si el valor de los dos potenciómetros es igual se enciende la luz roja
// Si el valor del potenciómetro A1 es mayor, se enciende la luz amarilla
// Si el valor del potenciómetro A2 es mayor, se enciende la luz verde

// Potenciómetros
int potenciometroA1 = 15;
int potenciometroA2 = 16;

// Luces
int ledVerde = 10;
int ledAmarilla = 11;
int ledRoja = 12;

void setup() {
  pinMode(potenciometroA1, INPUT);
  pinMode(potenciometroA2, INPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarilla, OUTPUT);
  pinMode(ledRoja, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int valorPotenciometroA1 = analogRead(potenciometroA1);
  int valorPotenciometroA2 = analogRead(potenciometroA2);

  int brilloLedAmarilla = map(valorPotenciometroA1, 0, 1023, 0, 255);
  int brilloLedVerde = map(valorPotenciometroA2, 0, 1023, 0, 255);

  if (valorPotenciometroA1 > valorPotenciometroA2) {
    analogWrite(ledAmarilla, brilloLedAmarilla);
  }
  else if (valorPotenciometroA1 < valorPotenciometroA2) {
    analogWrite(ledVerde, brilloLedVerde);
  }
  else {
    analogWrite(ledRoja, brilloLedVerde); // Ponemos brilloLedVerde porque es igual al brilloLedAmarilla, pero da igual cual de las dos variables se utilicen
  }

  // Añadimos que nos mande por serial motor los valores de los potenciómetros para comprobar que el código esté bien
  Serial.print("Valor Potenciómetro A1: ");
  Serial.println(valorPotenciometroA1);
  Serial.print("Valor Potenciómetro A2: ");
  Serial.println(valorPotenciometroA2);

  delay(10000);
}
