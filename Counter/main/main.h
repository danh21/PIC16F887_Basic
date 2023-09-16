#include <16F877A.h>
#device ADC = 16

#FUSES HS
#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=20000000)



#include "74HC595.h"
#include "Led7seg_2dig.h"

#define upBtn input(PIN_B2)
#define downBtn input(PIN_B3)

signed int count = 0;



void display_num(signed int value)
{
   int dozens, units;
   
   dozens = value / 10;
   units = value % 10;
  
   scan_Led7Seg1;  
   send_byte(number[dozens]);
   delay_ms(5);
     
   scan_Led7Seg2;
   send_byte(number[units]);    
   delay_ms(5);
}



void counter(void)
{
   if (upBtn) {
      while (upBtn);
      count++;
      if (count == 100)
         count = 0;
   }
   
   if (downBtn) {
      while (downBtn);
      count--;
      if (count == -1)
         count = 99;
   }
   
   display_num(count);
}

