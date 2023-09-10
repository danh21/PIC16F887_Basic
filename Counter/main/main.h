#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=20M)



#include "Led7seg_2dig.h"



void countUp(void)
{
   int count, t;
   
   for (count = 0; count < 100; count++) {
      t = 0;
      while (t++ < 200) 
         display_led7seg(count);    
   } 
}
