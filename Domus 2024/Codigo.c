#include <SoftwareSerial.h>
int estado = 0;

void setup() {
    Serial.begin(9600); /*Iniciar la conexión entre el arduino y la placa a bluetooth*/
    pinMode(8,OUTPUT);
}
void loop() {
  /*Busca todos los dispositivos bluetooth vinculados al celular*/
    if (Serial.available() > 0 ){
        estado = Serial.read();
    }
    
    switch(estado)
    {
      /*Recibe el mensaje 1, encender*/
        case '1':
            digitalWrite(8,HIGH);
            break;
      /*Recible el mensaje 0, apagar*/
        case '0':
            digitalWrite(8,LOW);
            break;
      /*Deja un tiempo de respuesta para evitar errores entre la conexión*/
        delay(10);
    }
}
}
