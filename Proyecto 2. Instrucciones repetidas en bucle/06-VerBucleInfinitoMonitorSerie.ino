// Cristina Correa
// Esta es una demostración de un bucle infinito, así que es mejor que lo pruebes durante unos segundos para ver cómo funciona y que lo pares cuanto antes

void setup()
{
    Serial.begin(9600); // decimos a Arduino que vamos a usar el monitor serie
}

void loop()
{
    for (int i = 0; i < 10; i = i - 1) // Nos va a dar un bucle infinito porque empezamos en el 0 mientras que el número sea menor que 10, pero en vez de contar de manera ascendente, contamos de manera descendente, por lo que nos dará un número infinito de números negativos que serán siempre menores que 10
    {
        Serial.println(i); // "imprimimos" el valor de i por el monitor serie y saltamos de línea
    }
    delay(1000000); // Como el void loop() se repite infinitamente, poniendo un delay que dura bastante tiempo, nos permite ver lo que se escribe por pantalla -> el delay que hemos puesto es de 1000000ms = 1000s = 16.67 min
}