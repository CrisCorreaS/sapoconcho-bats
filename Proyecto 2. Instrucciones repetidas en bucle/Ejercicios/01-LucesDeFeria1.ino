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
    // Luz verde y roja se repiten 10 veces al mismo tiempo
    for (int i = 0; i < 10; i++)
    {
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledRoja, HIGH);
        delay(125);

        digitalWrite(ledVerde, LOW);
        digitalWrite(ledRoja, LOW);
        delay(125);
    }

    // Cuando se paran las luces verdes y rojas, la luz amarilla se repite 5 veces la mitad de rápido
    for (int j = 1; j <= 5; j = j + 1)
    {
        digitalWrite(ledAmarilla, HIGH);
        delay(250);

        digitalWrite(ledAmarilla, LOW);
        delay(250);
    }
}