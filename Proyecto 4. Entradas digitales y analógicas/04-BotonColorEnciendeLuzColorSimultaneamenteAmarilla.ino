// Usamos dos botones: Uno verde que enciende una luz verde y uno rojo que enciende una luz roja
// Los botones se pueden pulsar de uno en uno o a la vez indistintamente
// Si los dos botones se pulsan a la vez, se enciende la luz amarilla y se apagan las otras dos

// Botones
int botonVerde = 3;
int botonRojo = 4;

// Luces
int ledVerde = 10;
int ledAmarilla = 11;
int ledRoja = 12;

void setup() {
    pinMode(botonVerde, INPUT);
    pinMode(botonRojo, INPUT);
    pinMode(ledVerde, OUTPUT);
    pinMode(ledAmarilla, OUTPUT);
    pinMode(ledRoja, OUTPUT);
}

void loop() {
    int entradaVerde = digitalRead(botonVerde);
    int entradaRoja = digitalRead(botonRojo);

    digitalWrite(ledVerde, entradaVerde);
    digitalWrite(ledRoja, entradaRoja);

    if (entradaVerde == HIGH && entradaRoja == HIGH) {
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledRoja, LOW);
        digitalWrite(ledAmarilla, HIGH);
    }
    else {
        digitalWrite(ledAmarilla, LOW);
    }

    delay(10);
}