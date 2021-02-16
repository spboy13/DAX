void printValues()
{
  Serial.println("=========================================================");
  Serial.print("vibration: ");
  Serial.println(vibrationValue);

  Serial.print("motion: ");
  Serial.println(motionValue);

  Serial.print("gas: ");
  Serial.print(gasValue);
  Serial.println("ppm");

  Serial.print("water: ");
  Serial.println(waterValue); 

  Serial.print("temperature: ");
  Serial.print(DHT.temperature);
  Serial.println(" *C");

  Serial.print("relative humidity: ");
  Serial.print(DHT.humidity);
  Serial.println("%"); 

  Serial.println("=========================================================");
}

