int ledVerde = 10;
int ledAmarilla = 11;
int ledRoja = 12;

void setup()
{
    pinMode(ledAmarilla, OUTPUT);
    pinMode(ledVerde, OUTPUT);
}

void loop()
{
    //Primero se enciende la luz amarilla
    for (int luminosidad = 0; luminosidad < 60; luminosidad = luminosidad + 10) // Vamos de 10 en 10 desde 0 hasta 59
    {
        analogWrite(ledAmarilla, luminosidad);
        delay(500);
    }

    //Después se enciende la luz verde
    for (int i = 0; i < 60; i++) // Vamos de 1 en 1 desde 0 hasta 59
    {
        analogWrite(ledVerde, i);
        delay(50);
    }
}