#include <main.h>

void main() 
{
   while (TRUE) 
   {
      //TODO: User Code
      if (isPressed(rotateBtn)) {
         rotateToMin(1);
         rotateToSec(5);
      }
   }
}
