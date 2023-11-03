// Se mueve en sentido horario-> funcionan ambas ruedas
// La rueda derecha gira hacia atrás
// La rueda izquierda gira hacia delante

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
    digitalWrite(motorIzquierdo, HIGH);
    digitalWrite(motorDerecho, LOW);
    analogWrite(motorIzquierdoPWM, 120);
    analogWrite(motorDerechoPWM, 120);
}