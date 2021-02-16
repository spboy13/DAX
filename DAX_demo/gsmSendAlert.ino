void gsmSendAlert()
{
 //for user
 text = alertMessage;
 char number[12] = {digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8, digit9, digit10, digit11, '\0'};
 Serial.println(number);
 error=GSM.sendSms(number,text);
 
 
 delay(1000);
//for default
 text = alertMessage;
 Serial.println(defaultPhoneNumber);
 error=GSM.sendSms(defaultPhoneNumber,text); 
 Serial.println("back to work");
 
 
 
 
 

}
