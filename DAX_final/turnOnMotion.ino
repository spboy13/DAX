void turnOnMotion()
{
 glcdClear();
 glcd(1,1, "[1] Turn on Motion Sensor");
 glcd(2,1, "[2] Turn off Motion Sensor");
 
 switchButtonValue = digitalRead(switchButton);
 while(switchButtonValue == 1)
 {
   glcd(4,3, "%d", knob()/500);
   switchButtonValue = digitalRead(switchButton);
 } 
 
 if(knob()/500 == 1)
 {
   motionOnOff = 0;
 }
 
 else if(knob()/500 == 0)
 {
   motionOnOff = 1;
 }
}
