// Se mueven hacia atrás ambas ruedas

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
    digitalWrite(motorDerecho, HIGH);
    analogWrite(motorIzquierdoPWM, 0);
    analogWrite(motorDerechoPWM, 0);
}