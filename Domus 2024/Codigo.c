#include <SoftwareSerial.h>
int estado = 10;
void setup() {
    Serial.begin(9600);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
}
void loop() {
    if (Serial.available() > 0 ){
        estado = Serial.read();
    }
    switch(estado)
    {
        case 'a':
            digitalWrite(8,HIGH);
            break;
        case 'b':
            digitalWrite(8,LOW);
            break;
        case 'c':
            digitalWrite(9,HIGH);
            break;
        case 'd':
            digitalWrite(9,LOW);
            break;
        /*case 'n':
            <datos>*/
    }
}