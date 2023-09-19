#include <main.h>



#INT_TIMER1
void int_blink(void) 
{
   count++;
   if (count == countOverflow) {
      count = 0;
      output_toggle(LED);
   }
}



void main() 
{
   output_low(LED);  
   
   setup_timer_1(T1_INTERNAL | T1_DIV_BY_2);    // init timer
   set_timer1(0);                               // Set the count value 
   
   enable_interrupts(INT_TIMER1);
   enable_interrupts(GLOBAL);                   // allow any of the specified interrupts previously enabled to become active
         
   while (TRUE);
}
