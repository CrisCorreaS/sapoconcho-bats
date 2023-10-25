int ledVerde = 10;
int ledAmarilla = 11;
int ledRoja = 12;
int cont = 0; // Creamos un contador

void setup()
{
    pinMode(ledVerde, OUTPUT);
    pinMode(ledAmarilla, OUTPUT);
    pinMode(ledRoja, OUTPUT);
}

void loop()
{
    // Luz verde
    for (int luminosidad = 0; luminosidad <= 60; luminosidad = luminosidad + 10) // Vamos de 10 en 10 desde 0 hasta 60
    {
        cont++; // Cada vez que se repita el bucle, el contador aumenta, por lo que va a contar todas las veces que se cambia la intensidad de la luz
        analogWrite(ledVerde, luminosidad);
        delay(1000);

        if (cont % 2 == 0)
        { // Cada vez que el contador sea par (cada dos veces que se cambie la intensidad)
            // Luz amarilla
            for (int i = 0; i <= 55; i++) // Vamos de 1 en 1 desde 0 hasta 60
            {
                analogWrite(ledAmarilla, i);
                delay(50);
            }

            // Luz roja
            digitalWrite(ledRoja, HIGH);
            delay(2000);

            digitalWrite(ledAmarilla, LOW); // Apagamos también la luz amarilla con la roja
            digitalWrite(ledRoja, LOW);
        }
    }
}