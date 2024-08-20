#include <DHT.h>
#define DHTPIN 2 //The pin that the sensor is connected to
#define DHTTYPE DHT11 //Defines DHT type
DHT dht(DHTPIN, DHTTYPE);

uint8_t dht_temp(){
    float t = dht.readTemperature(); //Reads the temperature in celsius
    uint8_t tempInt=uint8_t(t);
    return tempInt;

}
uint8_t dht_hum(){
    float h = dht.readHumidity();
    uint8_t humInt=uint8_t(h);
    return humInt;
}


