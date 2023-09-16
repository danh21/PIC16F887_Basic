#include <main.h>

void main() 
{
   while(TRUE) 
   {
      for (uint16 angle = 0; angle <= 180; angle += 30) {
         rotateServo(angle);
         delay_ms(500);
      }
   }
}
