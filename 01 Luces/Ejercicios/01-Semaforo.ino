/*
Tarea 1: Mi primer semáforo, chispas
Tenemos tres leds sencillos en total

Un led verde en el pin 10.
Un led amarillo en el pin 11.
Un led rojo en el pin 12.
Sabemos que los proyectos con semáforos acaban siendo odiados por lo mucho que se usan (o abusan), pero están bien para aprender. La tarea final de este proyecto es escribir un programa que encienda y apague las luces según un semáforo, de momento sin parpadear. Debe hacer lo típico:

Encender el led verde 5 segundos.
Encender el led amarillo 2 segundos.
Encender el led rojo 5 segundos.
El objetivo de la tarea es escribir código desde cero (en lugar de copiarlo y pegarlo) para fijar conceptos.
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
    digitalWrite(ledVerde, HIGH);
    delay(5000);
    digitalWrite(ledVerde, LOW);

    digitalWrite(ledAmarilla, HIGH);
    delay(2000);
    digitalWrite(ledAmarilla, LOW);

    digitalWrite(ledRoja, HIGH);
    delay(5000);
    digitalWrite(ledRoja, LOW);
}