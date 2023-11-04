// Usamos dos botones: Uno verde que enciende una luz verde y uno rojo que enciende una luz roja
// Los botones se pueden pulsar de uno en uno o a la vez indistintamente

// Botones
int botonVerde = 3;
int botonRojo = 4;

// Luces
int ledVerde = 10;
int ledRoja = 12;

void setup() {
    pinMode(botonVerde, INPUT);
    pinMode(botonRojo, INPUT);
    pinMode(ledVerde, OUTPUT);
    pinMode(ledRoja, OUTPUT);
}

void loop() {
    int entradaVerde = digitalRead(botonVerde);
    int entradaRoja = digitalRead(botonRojo);

    digitalWrite(ledVerde, entradaVerde);
    digitalWrite(ledRoja, entradaRoja);

    delay(10);
}