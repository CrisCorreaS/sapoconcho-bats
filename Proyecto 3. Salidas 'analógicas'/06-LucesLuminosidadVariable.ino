int ledVerde = 10;
int ledAmarilla = 11;
int ledRoja = 12;

void setup()
{
    pinMode(ledVerde, OUTPUT);
    pinMode(ledAmarilla, OUTPUT);
    pinMode(ledRoja, OUTPUT);
}

void loop()
{
    // Primero se enciende la luz verde
    for (int luminosidad = 0; luminosidad <= 60; luminosidad = luminosidad + 10) // Vamos de 10 en 10 desde 0 hasta 60
    {
        analogWrite(ledVerde, luminosidad);
        delay(500);
    }

    // Después se enciende la luz amarilla
    for (int i = 0; i <= 55; i++) // Vamos de 1 en 1 desde 0 hasta 60
    {
        analogWrite(ledAmarilla, i);
        delay(50);
    }

    // Por último se enciende la luz roja
    digitalWrite(ledRoja, HIGH);
    delay(9000);
    digitalWrite(ledRoja, LOW);
}