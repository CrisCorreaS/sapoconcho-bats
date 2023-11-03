// Se mueve en sentido antihorario-> funcionan ambas ruedas
// La rueda derecha gira hacia delante
// La rueda izquierda gira hacia atrás

int motorIzquierdoPWM = 6;
int motorIzquierdo = 7;
int motorDerecho = 8;
int motorDerechoPWM = 9;

void setup()
{
    pinMode(motorIzquierdoPWM, OUTPUT);
    pinMode(motorIzquierdo, OUTPUT);
    pinMode(motorDerecho, OUTPUT);
    pinMode(motorDerechoPWM, OUTPUT);
}

void loop()
{
    digitalWrite(motorIzquierdo, LOW);
    digitalWrite(motorDerecho, HIGH);
    analogWrite(motorIzquierdoPWM, 120);
    analogWrite(motorDerechoPWM, 120);
}