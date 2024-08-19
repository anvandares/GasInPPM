#include <Arduino.h>
#include "dht11.h"
#include "mq7.h"
#include "time.h"

#include <Wire.h>


unsigned long lastConnectionTime=0UL;
void setup() {
/* -------------------------------------------------------------------------- */  


  pinMode(gas_ain,INPUT);


  //Initialize serial and wait for port to open:
  Serial.begin(9600);

 
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
 

 
  dht.begin();

}
/* -------------------------------------------------------------------------- */
void loop() {

  
  if(_delay(lastConnectionTime,5000UL))// if five seconds have passed since last reading
  {  
    Serial.println("______________________________________________________");
    Serial.print("Temperature in C: ");
    Serial.println(dht_temp());
    Serial.print("Humidity: ");
    Serial.println(dht_hum());
    int rawGasValue=detect_gas();
    Serial.print("Raw gas data: ");
    Serial.println(rawGasValue);
    Serial.print("in PPM: ");
    Serial.println(ppm_value(rawGasValue));
    lastConnectionTime=millis();
    Serial.println("______________________________________________________");

  }
}






