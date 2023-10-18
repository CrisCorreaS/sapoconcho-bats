/*
Semáforo Proyecto 1:
    Tenemos tres leds sencillos en total

    Un led verde en el pin 10.
    Un led amarillo en el pin 11.
    Un led rojo en el pin 12.
    Sabemos que los proyectos con semáforos acaban siendo odiados por lo mucho que se usan (o abusan), pero están bien para aprender. La tarea final de este proyecto es escribir un programa que encienda y apague las luces según un semáforo, de momento sin parpadear. Debe hacer lo típico:

    Encender el led verde 5 segundos.
    Encender el led amarillo 2 segundos.
    Encender el led rojo 5 segundos.

Semáforo realista:
    Tengo un led amarillo, que es lo que parpadea ahora
    Al semáforo de la tarea del proyecto 1 le vamos a añadir una complicación para que sea más realista: la luz amarilla en lugar de estar encendida 2 segundos, ahora va a parpadear 4 veces. Entre las tareas de encender la luz verde y la roja, meteríamos unas nuevas así:
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
    //Luz verde
    digitalWrite(ledVerde, HIGH);
    delay(5000);
    digitalWrite(ledVerde, LOW);

    //Luz amarilla -> Semáforo realista, ahora parpadea cuatro veces durante los dos segundos -> Se enciende durante 250ms y se apaga durante 250ms = un parpadeo de 500ms = un parpadeo de medio segundo
    digitalWrite(11, HIGH);
    delay(250);
    digitalWrite(11, LOW);
    delay(250);
    digitalWrite(11, HIGH);
    delay(250);
    digitalWrite(11, LOW);
    delay(250);
    digitalWrite(11, HIGH);
    delay(250);
    digitalWrite(11, LOW);
    delay(250);
    digitalWrite(11, HIGH);
    delay(250);
    digitalWrite(11, LOW);
    delay(250);

    //Luz roja
    digitalWrite(ledRoja, HIGH);
    delay(5000);
    digitalWrite(ledRoja, LOW);
}