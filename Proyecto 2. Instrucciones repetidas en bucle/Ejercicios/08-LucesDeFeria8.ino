/*
Nuestras luces ya no son un semáforo, ahora son una feria. Escribir un programa para que parpadeen todos los leds (los verdes, amarillo y rojos) por turnos. El orden de parpadeo y la frecuencia son libres.
Como bola extra, tratar de que parpadeen por grupos. El objetivo de la tarea y la bola extra es tratar de entender bien el orden en que se realizan las instrucciones.

Este es el ejemplo anterior pero mucho más rápido
*/
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
    for (int i = 0; i < 5; i++)
    {
        digitalWrite(ledVerde, HIGH);
        delay(25);
        digitalWrite(ledAmarilla, HIGH);
        delay(50);
        digitalWrite(ledRoja, HIGH);
        delay(75);

        digitalWrite(ledVerde, LOW);
        delay(25);
        digitalWrite(ledAmarilla, LOW);
        delay(50);
        digitalWrite(ledRoja, LOW);
        delay(75);

        digitalWrite(ledRoja, HIGH);
        delay(25);
        digitalWrite(ledAmarilla, HIGH);
        delay(50);
        digitalWrite(ledVerde, HIGH);
        delay(75);

        digitalWrite(ledRoja, LOW);
        delay(25);
        digitalWrite(ledAmarilla, LOW);
        delay(50);
        digitalWrite(ledVerde, LOW);
        delay(75);

        for (int j = 2; j > 0; j--) // Por cada vez que se repita el for con "i", se repetirá dos veces este for con "j"
        {
            digitalWrite(ledVerde, HIGH);
            digitalWrite(ledRoja, HIGH);
            delay(25);
            digitalWrite(ledAmarilla, HIGH);
            delay(50);

            digitalWrite(ledVerde, LOW);
            digitalWrite(ledRoja, LOW);
            delay(25);
            digitalWrite(ledAmarilla, LOW);
            delay(50);

            digitalWrite(ledAmarilla, HIGH);
            delay(25);
            digitalWrite(ledVerde, HIGH);
            digitalWrite(ledRoja, HIGH);
            delay(50);

            digitalWrite(ledAmarilla, LOW);
            delay(25);
            digitalWrite(ledVerde, LOW);
            digitalWrite(ledRoja, LOW);
            delay(50);
        }
    }

    for (int k = 5; k > 0; k--)
    {
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledRoja, HIGH);
        delay(25);
        digitalWrite(ledAmarilla, HIGH);
        delay(50);

        digitalWrite(ledVerde, LOW);
        digitalWrite(ledRoja, LOW);
        delay(25);
        digitalWrite(ledAmarilla, LOW);
        delay(50);

        digitalWrite(ledAmarilla, HIGH);
        delay(25);
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledRoja, HIGH);
        delay(50);

        digitalWrite(ledAmarilla, LOW);
        delay(25);
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledRoja, LOW);
        delay(50);

        for (int l = 0; l < 2; l++) // Por cada vez que se repita el for con "k", se repetirá dos veces este for con "l"
        {
            digitalWrite(ledVerde, HIGH);
            delay(25);
            digitalWrite(ledAmarilla, HIGH);
            delay(50);
            digitalWrite(ledRoja, HIGH);
            delay(375);

            digitalWrite(ledVerde, LOW);
            delay(25);
            digitalWrite(ledAmarilla, LOW);
            delay(50);
            digitalWrite(ledRoja, LOW);
            delay(75);

            digitalWrite(ledRoja, HIGH);
            delay(25);
            digitalWrite(ledAmarilla, HIGH);
            delay(50);
            digitalWrite(ledVerde, HIGH);
            delay(75);

            digitalWrite(ledRoja, LOW);
            delay(25);
            digitalWrite(ledAmarilla, LOW);
            delay(50);
            digitalWrite(ledVerde, LOW);
            delay(75);
        }
    }
}
