void triggerCheck() //update on 3.1
{
  
 
 fireCheck();
 
 //1 1 1 1 c1
 if((vibrationValue == 1) && (motionValue == 1) && (fireValue == 1) && (waterValue <= waterTrigger))
 {
   buzzerAlert();  
   alertMessage = "NOTICE: signs of GROUND MOTION, INTRUDER, FIRE, FLOOD detected!";  
   gsmSendAlert();
 }
 
 //1 1 1 0 c2
 else if((vibrationValue == 1) && (motionValue == 1) && (fireValue == 1) && (waterValue > waterTrigger))
 {
   buzzerAlert();  
   alertMessage = "NOTICE: signs of GROUND MOTION, INTRUDER, FIRE detected!";
   gsmSendAlert();
 }
 
 //1 1 0 1 c3
 else if((vibrationValue == 1) && (motionValue == 1) && (fireValue == 0) && (waterValue <= waterTrigger))
 {
   buzzerAlert();  
   alertMessage = "NOTICE: signs of GROUND MOTION, INTRUDER, FLOOD detected!";  
   gsmSendAlert();
 }
 
 //1 1 0 0 c4
 else if((vibrationValue == 1) && (motionValue == 1) && (fireValue == 0) && (waterValue > waterTrigger))
 {
   buzzerAlert();  
   alertMessage = "NOTICE: signs of GROUND MOTION, INTRUDER detected!";     
   gsmSendAlert();
 }
 
 //1 0 1 1 c5
 else if((vibrationValue == 1) && (motionValue == 0) && (fireValue == 1) && (waterValue <= waterTrigger))
 {
   buzzerAlert();  
   alertMessage = "NOTICE: signs of GROUND MOTION, FIRE, FLOOD detected!"; 
   gsmSendAlert();
 }
 
 //1 0 1 0 c6
 else if((vibrationValue == 1) && (motionValue == 0) && (fireValue == 1) && (waterValue > waterTrigger))
 {
   buzzerAlert();  
   alertMessage = "NOTICE: signs of GROUND MOTION, FIRE detected!"; 
   gsmSendAlert();
 }
 
  //1 0 0 1 c7
 else if((vibrationValue == 1) && (motionValue == 0) && (fireValue == 0) && (waterValue <= waterTrigger))
 {
   buzzerAlert();  
   alertMessage = "NOTICE: signs of GROUND MOTION, FLOOD detected!"; 
   gsmSendAlert();
 }
 
  //1 0 0 0 c8
 else if((vibrationValue == 1) && (motionValue == 0) && (fireValue == 0) && (waterValue > waterTrigger))
 {
   buzzerAlert();  
   alertMessage = "NOTICE: signs of GROUND MOTION detected!"; 
   gsmSendAlert();
 }
 
  //0 1 1 1 c9
 else if((vibrationValue == 0) && (motionValue == 1) && (fireValue == 1) && (waterValue <= waterTrigger))
 {
   buzzerAlert();  
   alertMessage = "NOTICE: signs of INTRUDER, FIRE, FLOOD detected!"; 
   gsmSendAlert();
 }
 
  //0 1 1 0 c10
 else if((vibrationValue == 0) && (motionValue == 1) && (fireValue == 1) && (waterValue > waterTrigger))
 {
   buzzerAlert();  
   alertMessage = "NOTICE: signs of INTRUDER, FIRE detected!"; 
   gsmSendAlert();
 }
 
  //0 1 0 1 c11
 else if((vibrationValue == 0) && (motionValue == 1) && (fireValue == 0) && (waterValue <= waterTrigger))
 {
   buzzerAlert();  
   alertMessage = "NOTICE: signs of INTRUDER, FLOOD detected!";    
   gsmSendAlert();
 }
 
  //0 1 0 0 c12
 else if((vibrationValue == 0) && (motionValue == 1) && (fireValue == 0) && (waterValue > waterTrigger))
 {
   buzzerAlert();  
   alertMessage = "NOTICE: signs of INTRUDER detected!"; 
   gsmSendAlert();
 }
 
  //0 0 1 1 c13
 else if((vibrationValue == 0) && (motionValue == 0) && (fireValue == 1) && (waterValue <= waterTrigger))
 {
   buzzerAlert();  
   alertMessage = "NOTICE: signs of FIRE, FLOOD detected!"; 
   gsmSendAlert();
 }
 
  //0 0 1 0 c14
 else if((vibrationValue == 0) && (motionValue == 0) && (fireValue == 1) && (waterValue > waterTrigger))
 {
   buzzerAlert();  
   alertMessage = "NOTICE: signs of FIRE detected!"; 
   gsmSendAlert();
 }
 
  //0 0 0 1 c15
 else if((vibrationValue == 0) && (motionValue == 0) && (fireValue == 0) && (waterValue <= waterTrigger))
 {
   buzzerAlert();  
   alertMessage = "NOTICE: signs of FLOOD detected!"; 
   gsmSendAlert();
 }
 
  //0 0 0 0 c16
 else if((vibrationValue == 0) && (motionValue == 0) && (fireValue == 0) && (waterValue > waterTrigger))
 {
  //do nothing 
 }
 
}
