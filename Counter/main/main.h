#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=20000000)



#include "74HC595.h"
#include "Led7seg_2dig.h"



void display_num(int value)
{
   int dozens, units;
   
   dozens = value / 10;
   units = value % 10;
  
   scan_Led7Seg1;  
   send_byte((int8)number[dozens]);
   delay_ms(5);
   
   scan_Led7Seg2;
   send_byte((int8)number[units]);    
   delay_ms(5);
}



void countUp(void)
{
   int count, t;
   
   for (count = 0; count < 100; count++) {
      t = 0;
      while (t++ < 100) 
         display_num(count);    
   } 
}



void countDown(void)
{
   int count, t;
   
   for (count = 99; count >= 0; count--) {
      t = 0;
      while (t++ < 100) 
         display_num(count);    
   } 
}
