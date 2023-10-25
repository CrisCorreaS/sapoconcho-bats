int ledVerde = 10;
int ledAmarilla = 11;
int ledRoja = 12;

void setup()
{
    pinMode(ledAmarilla, OUTPUT);
}

void loop()
{
    for (int luminosidad = 0; luminosidad < 60; luminosidad = luminosidad + 10) // Vamos de 10 en 10 desde 0 hasta 59
    {
        analogWrite(ledAmarilla, luminosidad);
        delay(500);
    }
}
