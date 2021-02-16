void getUserPhoneNumber()
{
  
 glcd(1,1, "insert mobile #"); //(2.2)

 while(counter <= 11)
 {
   glcd(3, counter, "%d", knob() / 100); 
 
   switchButtonValue = digitalRead(switchButton);
   if(switchButtonValue == 0) //recheck value in switch pls basta dapat napindot switch
   {
     int knobValue = knob()/100;
     switch (counter)
     {
       case 1:
         switch(knobValue)
         {
          case 0:
            digit1 = 48;
            break;
          case 1:
            digit1 = 49;
            break;
          case 2:
            digit1 = 50;
            break;
          case 3:
            digit1 = 51;
            break;
          case 4:
            digit1 = 52;
            break;
          case 5:
            digit1 = 53;
            break;
          case 6:
            digit1 = 54;
            break;
          case 7:
            digit1 = 55;
            break;
          case 8:
            digit1 = 56;
            break;
          case 9:
            digit1 = 57;
            break;
         }
         delay(500);
         counter++;
         break;
       case 2: //counter 2
         switch(knobValue)
         {
          case 0:
            digit2 = 48;
            break;
          case 1:
            digit2 = 49;
            break;
          case 2:
            digit2 = 50;
            break;
          case 3:
            digit2 = 51;
            break;
          case 4:
            digit2 = 52;
            break;
          case 5:
            digit2 = 53;
            break;
          case 6:
            digit2 = 54;
            break;
          case 7:
            digit2 = 55;
            break;
          case 8:
            digit2 = 56;
            break;
          case 9:
            digit2 = 57;
            break;
         }
         counter++;
         delay(500);
         break;
       case 3:
         switch(knobValue)
         {
          case 0:
            digit3 = 48;
            break;
          case 1:
            digit3 = 49;
            break;
          case 2:
            digit3 = 50;
            break;
          case 3:
            digit3 = 51;
            break;
          case 4:
            digit3 = 52;
            break;
          case 5:
            digit3 = 53;
            break;
          case 6:
            digit3 = 54;
            break;
          case 7:
            digit3 = 55;
            break;
          case 8:
            digit3 = 56;
            break;
          case 9:
            digit3 = 57;
            break;
         }
         counter++;
         delay(500);
         break;
       case 4:
         switch(knobValue)
         {
          case 0:
            digit4 = 48;
            break;
          case 1:
            digit4 = 49;
            break;
          case 2:
            digit4 = 50;
            break;
          case 3:
            digit4 = 51;
            break;
          case 4:
            digit4 = 52;
            break;
          case 5:
            digit4 = 53;
            break;
          case 6:
            digit4 = 54;
            break;
          case 7:
            digit4 = 55;
            break;
          case 8:
            digit4 = 56;
            break;
          case 9:
            digit4 = 57;
            break;
         }
         counter++;
         delay(500);
         break;
       case 5:
         switch(knobValue)
         {
          case 0:
            digit5 = 48;
            break;
          case 1:
            digit5 = 49;
            break;
          case 2:
            digit5 = 50;
            break;
          case 3:
            digit5 = 51;
            break;
          case 4:
            digit5 = 52;
            break;
          case 5:
            digit5 = 53;
            break;
          case 6:
            digit5 = 54;
            break;
          case 7:
            digit5 = 55;
            break;
          case 8:
            digit5 = 56;
            break;
          case 9:
            digit5 = 57;
            break;
         }
         counter++;
         delay(500);
         break;
       case 6:
         switch(knobValue)
         {
          case 0:
            digit6 = 48;
            break;
          case 1:
            digit6 = 49;
            break;
          case 2:
            digit6 = 50;
            break;
          case 3:
            digit6 = 51;
            break;
          case 4:
            digit6 = 52;
            break;
          case 5:
            digit6 = 53;
            break;
          case 6:
            digit6 = 54;
            break;
          case 7:
            digit6 = 55;
            break;
          case 8:
            digit6 = 56;
            break;
          case 9:
            digit6 = 57;
            break;
         }
         counter++;
         delay(500);
         break;
       case 7:
         switch(knobValue)
         {
          case 0:
            digit7 = 48;
            break;
          case 1:
            digit7 = 49;
            break;
          case 2:
            digit7 = 50;
            break;
          case 3:
            digit7 = 51;
            break;
          case 4:
            digit7 = 52;
            break;
          case 5:
            digit7 = 53;
            break;
          case 6:
            digit7 = 54;
            break;
          case 7:
            digit7 = 55;
            break;
          case 8:
            digit7 = 56;
            break;
          case 9:
            digit7 = 57;
            break;
         }
         counter++;
         delay(500);
         break;
       case 8:
         switch(knobValue)
         {
          case 0:
            digit8 = 48;
            break;
          case 1:
            digit8 = 49;
            break;
          case 2:
            digit8 = 50;
            break;
          case 3:
            digit8 = 51;
            break;
          case 4:
            digit8 = 52;
            break;
          case 5:
            digit8 = 53;
            break;
          case 6:
            digit8 = 54;
            break;
          case 7:
            digit8 = 55;
            break;
          case 8:
            digit8 = 56;
            break;
          case 9:
            digit8 = 57;
            break;
         }
         counter++;
         delay(500);
         break;
       case 9:
         switch(knobValue)
         {
          case 0:
            digit9 = 48;
            break;
          case 1:
            digit9 = 49;
            break;
          case 2:
            digit9 = 50;
            break;
          case 3:
            digit9 = 51;
            break;
          case 4:
            digit9 = 52;
            break;
          case 5:
            digit9 = 53;
            break;
          case 6:
            digit9 = 54;
            break;
          case 7:
            digit9 = 55;
            break;
          case 8:
            digit9 = 56;
            break;
          case 9:
            digit9 = 57;
            break;
         }
         counter++;
         delay(500);
         break;
       case 10:
         switch(knobValue)
         {
          case 0:
            digit10 = 48;
            break;
          case 1:
            digit10 = 49;
            break;
          case 2:
            digit10 = 50;
            break;
          case 3:
            digit10 = 51;
            break;
          case 4:
            digit10 = 52;
            break;
          case 5:
            digit10 = 53;
            break;
          case 6:
            digit10 = 54;
            break;
          case 7:
            digit10 = 55;
            break;
          case 8:
            digit10 = 56;
            break;
          case 9:
            digit10 = 57;
            break;
         }
         counter++;
         delay(500);
         break;
       case 11:
         switch(knobValue)
         {
          case 0:
            digit11 = 48;
            break;
          case 1:
            digit11 = 49;
            break;
          case 2:
            digit11 = 50;
            break;
          case 3:
            digit11 = 51;
            break;
          case 4:
            digit11 = 52;
            break;
          case 5:
            digit11 = 53;
            break;
          case 6:
            digit11 = 54;
            break;
          case 7:
            digit11 = 55;
            break;
          case 8:
            digit11 = 56;
            break;
          case 9:
            digit11 = 57;
            break;
         }
         counter++;
         delay(500);
         break;
         
     }
   }
 }
 
 glcd(6,1, "please wait..."); //(2.2)
}
