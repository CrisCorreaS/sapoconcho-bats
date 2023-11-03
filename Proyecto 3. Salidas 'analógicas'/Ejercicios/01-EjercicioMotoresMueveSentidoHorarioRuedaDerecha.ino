// Se mueve en sentido horario-> solo funciona la rueda derecha girando hacia atrás

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
    analogWrite(motorDerechoPWM, 0);
}