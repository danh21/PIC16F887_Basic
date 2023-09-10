#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=20M)



#include "74HC595.h"

#define numOfLeds 24



void lightUp_fadeDown()
{
   int i;
   
   for (i = 0; i < numOfLeds; i++) {
      send_bit(1);
      delay_ms(200);
   }
   
   for (i = 0; i < numOfLeds; i++) {
      send_bit(0);
      delay_ms(200);
   }
}
