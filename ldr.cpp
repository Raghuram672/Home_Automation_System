#include "ldr.h"
#include "Arduino.h"
#include "main.h"



void init_ldr(void)
{
   pinMode(GARDEN_LIGHT, OUTPUT);
   
}

unsigned int input_value=0;
void brightness_control(void)
{
  input_value=analogRead(LDR_SENSOR);//read ldr value
  input_value=(1023-input_value)/4;//reverse map
  analogWrite(GARDEN_LIGHT,input_value);//write value to led
  delay(100);  

}
