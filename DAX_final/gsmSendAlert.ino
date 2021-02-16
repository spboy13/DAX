void gsmSendAlert()
{
 //for user
 text = alertMessage;
 char number[12] = {digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8, digit9, digit10, digit11, '\0'};
 error=GSM.sendSms(number,text);
 
 
 delay(1000);
//for default
 text = alertMessage;
 error=GSM.sendSms(defaultPhoneNumber,text); 
 
 
 
 
 

}
