#include <main.h>

void main()
{
   while (TRUE)
   {
         blink_leds(0xAA, 500, 2);
         
         run_leds_l2r(500, 1);
         
         run_leds_r2l(500, 1);
   }
}
