#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=20000000)



#include "74ls47.h"



void countUp(void)
{
   unsigned char count = 0;   
   while (count < 9) {
      Led7Seg_OUT(count++);         
      delay_ms(500);
   }
}



void countDown(void)
{
   unsigned char count = 9;  
   while (count > 0) {
      Led7Seg_OUT(count--);
      delay_ms(500);
   }
}
