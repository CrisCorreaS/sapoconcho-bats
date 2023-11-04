// Usamos un botón o pulsador para que mientras lo pulsemos, se encienda una luz roja

int botonRojo = 4;
int ledRoja = 12;

void setup() {
    pinMode(botonRojo, INPUT); // Se establece como entrada de información -> está pulsado o no
    pinMode(ledRoja, OUTPUT); // Se establece como salida -> se enciende o se apaga según nuestro criterio
}

void loop() {
    int entrada = digitalRead(botonRojo); //La variable entrada tiene dos valores "0" (LOW) si no se pulsa el botón, y "1" (HIGH) si se pulsa

    digitalWrite(ledRoja, entrada); // Controla el estado del LED rojo en función del valor de entrada. Si entrada es "1" (HIGH), el LED se enciende; si la entrada es "0" (LOW), el LED se apaga
    delay(10);
}