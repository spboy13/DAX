void turnOnMotion()
{
 glcdClear();
 setTextColor(GLCD_MAGENTA);
 glcd(1,1, "[1] Turn on");
 glcd(2,1, "Motion Sensor");
 glcd(4,1, "[0] Turn off");
 glcd(5,1, "Motion Sensor");
 
 switchButtonValue = digitalRead(switchButton);
 while(switchButtonValue == 1)
 {
   setTextColor(GLCD_YELLOW);
   glcd(7,3, "%d", knob()/500);
   switchButtonValue = digitalRead(switchButton);
 } 
 
 if(knob()/500 == 1)
 {
   motionOnOff = 1;
 }
 
 else if(knob()/500 == 0)
 {
   motionOnOff = 0;
 }
}
