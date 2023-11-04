// Si pulsamos el botón verde, la luminosidad de la luz amarilla aumenta, y si pulsamos el botón rojo, la luminosidad disminuye

int botonVerde = 3;
int botonRojo = 4;
int ledAmarilla = 11;
int luminosidad = 0;

void setup() {
    pinMode(botonVerde, INPUT);
    pinMode(botonRojo, INPUT);
    pinMode(ledAmarilla, OUTPUT);
}

void loop() {
    int entradaVerde = digitalRead(botonVerde);
    int entradaRoja = digitalRead(botonRojo);

    if (entradaVerde == HIGH) {
        luminosidad += 2;

        if (luminosidad >= 255) {
            luminosidad = 255;
        }
    }

    if (entradaRoja == HIGH) {
        luminosidad -= 2;

        if (luminosidad <= 0) {
            luminosidad = 0;
        }
    }

    analogWrite(ledAmarilla, luminosidad);
    
    delay(100);
}