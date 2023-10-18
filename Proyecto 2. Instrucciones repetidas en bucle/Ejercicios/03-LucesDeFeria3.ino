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
    for (int i = 0; i < 10; i++) //Ahora se encienden y se apagan todas las luces 10 veces al mismo tiempo, pero van apareciendo y desapareciendo de una en una. (i++) = (i = i + 1)
    {
        digitalWrite(ledVerde, HIGH);
        delay(125);
        digitalWrite(ledAmarilla, HIGH);
        delay(250);
        digitalWrite(ledRoja, HIGH);
        delay(375);

        digitalWrite(ledVerde, LOW);
        delay(125);
        digitalWrite(ledAmarilla, LOW);
        delay(250);
        digitalWrite(ledRoja, LOW);
        delay(375);
    }
}