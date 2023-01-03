#include "temperature_system.h"
#include "Arduino.h"
#include "main.h"


void init_temperature_system(void)
{
    pinMode(HEATER,OUTPUT);
    pinMode(COOLER,OUTPUT);//Setting heater and Cooler pin as output

    digitalWrite(HEATER,LOW);
    digitalWrite(COOLER,LOW);//Initially turning off heater and cooler  
}

float read_temperature(void)
{
   float temperature;
   temperature=(((analogRead(A0)*(float)5/1024))/(float)0.01);
   return temperature;
}

void cooler_control(bool control)
{
   digitalWrite(COOLER,control);
}

void heater_control(bool control)
{
    digitalWrite(HEATER,control);
}
