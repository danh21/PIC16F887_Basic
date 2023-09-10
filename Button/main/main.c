#include <main.h>

void main() 
{
   OFF_LED;
   
   while (TRUE) 
   {
      if (isPressed(btn_on))
         ON_LED;
      
      if (isPressed(btn_off))
        OFF_LED;

      if (isPressed(btn_toggle))    
         TOGGLE_LED;
   }
}
