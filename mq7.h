
int gas_ain=A5;
int ad_value;

int detect_gas(){
  
  ad_value=analogRead(gas_ain); //avg is 47. Assume 50 = 0.2 ppm. ad_value/250 = ppm
  
  return ad_value;
}
float ppm_value(int rawAdValue) //Typ nåt sånt.
{
  float ppm=float(rawAdValue)/250;
  return ppm;
} 
void warn(float ppmValue){
  if(ppmValue>4) //Sätta dit en pir?
  {
    Serial.println("Warning, PPM is high - Over 4 ppm carbon monoxide");
  }
}