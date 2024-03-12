#include <SoftwareSerial.h>
int estado = 10;
void setup() {
    BT.begin(9600);
    Serial.begin(9600);
    pinMode(7,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(4,OUTPUT);
}
void loop() {
    if (Serial.available() > 0 ){
        Estado = Serial.read();
    }
    switch(estado)
    {
        case 'a':
            digitalWrite(7,HIGH;)
            break;
        /*case 'n':
            <datos>*/
    }
}
