// Usamos un botón o pulsador para que cada vez que lo pulsemos, en el serial monitor aparezcan una serie de "1"

int botonVerde = 3;

void setup() {
    pinMode(botonVerde, INPUT); // Vamos a usar el pin 3 como entrada
    Serial.begin(9600);         // Decimos a Arduino que vamos a usar el monitor serie
}

void loop() {
    int entrada = digitalRead(botonVerde); // Lee el estado del pin botonVerde y almacena el resultado en la variable entrada. Si el botón se presiona, el valor será "1" (HIGH); de lo contrario, será "0" (LOW).
    
    Serial.println(entrada); // La instrucción println introduce un retorno de carro (line feed) después de imprimir el texto ("1" si está pulsado o "0" si no)
    delay(10); // Espera 10 milisegundos antes de continuar con la siguiente iteración del bucle -> Así se puede ver mejor cómo cambian los números, si no, sería muy rápido y apenas podríamos percibirlo
}