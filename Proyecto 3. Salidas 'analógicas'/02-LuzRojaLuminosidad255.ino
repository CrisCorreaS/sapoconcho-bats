int ledVerde = 10;
int ledAmarilla = 11;
int ledRoja = 12;

int luminosidad = 255; // probaremos valores entre 0 y 255 -> Con 255 se enciende

void setup()
{
    pinMode(ledRoja, OUTPUT); // vamos a usar el led rojo de la BATS
}

void loop()
{
    analogWrite(ledRoja, luminosidad); // poner el pin con el valor intermedio buscado
}
