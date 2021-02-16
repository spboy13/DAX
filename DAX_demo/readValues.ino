void readValues()
{
  vibrationValue = digitalRead(vibrationSensor);
  gasValue = analogRead(gasSensor);
  waterValue = analogRead(waterSensor);
  
  if(motionOnOff == 1)
  {
  motionValue = digitalRead(motionSensor);
  }
  
  else
  {
   motionValue = 0; 
  }

  int chk = DHT.read11(DHT11_PIN);
  
  temperatureValue = DHT.temperature;
  
  if(temperatureValue = -999)
  {
    while(temperatureValue == -999)
    {
      int chk = DHT.read11(DHT11_PIN);
      temperatureValue = DHT.temperature;
      //Serial.println(temperatureValue);
      delay(100);
    }
  }
  
  humidityValue = DHT.humidity;
  
  if(humidityValue == -999)
  {
    while(humidityValue = -999)
    {
      int chk = DHT.read11(DHT11_PIN);
      humidityValue = DHT.humidity;
      delay(100);
    }
  }
   
}

