/*
Nuestras luces ya no son un semáforo, ahora son una feria. Escribir un programa para que parpadeen todos los leds (los verdes, amarillo y rojos) por turnos. El orden de parpadeo y la frecuencia son libres.
Como bola extra, tratar de que parpadeen por grupos. El objetivo de la tarea y la bola extra es tratar de entender bien el orden en que se realizan las instrucciones.
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
        delay(125);
        digitalWrite(11, HIGH);
        delay(250);
        digitalWrite(ledRoja, HIGH);
        delay(375);

        digitalWrite(ledVerde, LOW);
        delay(125);
        digitalWrite(11, LOW);
        delay(250);
        digitalWrite(ledRoja, LOW);
        delay(375);


        digitalWrite(ledRoja, HIGH);
        delay(125);
        digitalWrite(11, HIGH);
        delay(250);
        digitalWrite(ledVerde, HIGH);
        delay(375);

        digitalWrite(ledRoja, LOW);
        delay(125);
        digitalWrite(11, LOW);
        delay(250);
        digitalWrite(ledVerde, LOW);
        delay(375);

        for (int j = 2; j > 0; j--) //Por cada vez que se repita el for con "i", se repetirá dos veces este for con "j"
        {
            digitalWrite(ledVerde, HIGH);
            digitalWrite(ledRoja, HIGH);
            delay(125);
            digitalWrite(ledAmarilla, HIGH);
            delay(250);

            digitalWrite(ledVerde, LOW);
            digitalWrite(ledRoja, LOW);
            delay(125);
            digitalWrite(ledAmarilla, LOW);
            delay(250);


            digitalWrite(ledAmarilla, HIGH);
            delay(125);
            digitalWrite(ledVerde, HIGH);
            digitalWrite(ledRoja, HIGH);
            delay(250);

            digitalWrite(ledAmarilla, LOW);
            delay(125);
            digitalWrite(ledVerde, LOW);
            digitalWrite(ledRoja, LOW);
            delay(250);
        }
    }

    for (int k = 5; k > 0; k--)
    {
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledRoja, HIGH);
        delay(125);
        digitalWrite(ledAmarilla, HIGH);
        delay(250);

        digitalWrite(ledVerde, LOW);
        digitalWrite(ledRoja, LOW);
        delay(125);
        digitalWrite(ledAmarilla, LOW);
        delay(250);


        digitalWrite(ledAmarilla, HIGH);
        delay(125);
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledRoja, HIGH);
        delay(250);

        digitalWrite(ledAmarilla, LOW);
        delay(125);
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledRoja, LOW);
        delay(250);

        for (int l = 0; l < 2; l++) // Por cada vez que se repita el for con "k", se repetirá dos veces este for con "l"
        {
            digitalWrite(ledVerde, HIGH);
            delay(125);
            digitalWrite(11, HIGH);
            delay(250);
            digitalWrite(ledRoja, HIGH);
            delay(375);

            digitalWrite(ledVerde, LOW);
            delay(125);
            digitalWrite(11, LOW);
            delay(250);
            digitalWrite(ledRoja, LOW);
            delay(375);

            digitalWrite(ledRoja, HIGH);
            delay(125);
            digitalWrite(11, HIGH);
            delay(250);
            digitalWrite(ledVerde, HIGH);
            delay(375);

            digitalWrite(ledRoja, LOW);
            delay(125);
            digitalWrite(11, LOW);
            delay(250);
            digitalWrite(ledVerde, LOW);
            delay(375);
        }
    }
}