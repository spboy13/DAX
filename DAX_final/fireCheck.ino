void fireCheck()
{

 if ((gasValue >= gasTrigger) || ((temperatureValue >= temperatureTrigger) || (humidityValue <= humidityTrigger)))
 {
   fireValue == 1;
 } 
 
 else
 {
   fireValue == 0; 
 }
 
 
 
}
