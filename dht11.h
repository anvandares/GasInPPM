#include <DHT.h>
#define DHTPIN 2 //The pin that the sensor is connected to
#define DHTTYPE DHT11 //Defines DHT type
DHT dht(DHTPIN, DHTTYPE);

int dht_temp(){
    float t = dht.readTemperature(); //Reads the temperature in celsius
    int tempInt=int(t);
    return tempInt;

}
int dht_hum(){
float h = dht.readHumidity();
int humInt=int(h);
return humInt;
}
