// Se mueven hacia delante ambas ruedas

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
    digitalWrite(motorDerecho, LOW);
    analogWrite(motorIzquierdoPWM, 255);
    analogWrite(motorDerechoPWM, 255);
}