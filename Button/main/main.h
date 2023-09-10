#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=20M)



#define led1         PIN_B0

#define btn_on       PIN_C0
#define btn_off      PIN_C1
#define btn_toggle   PIN_C2



#define on  1
#define off 0

#define ON_LED output_high(led1)
#define OFF_LED output_low(led1)
#define TOGGLE_LED output_toggle(led1)

int isPressed(int16 btn)
{
   if (!input(btn)) {
      while (!input(btn));     // debounce
      return 1;
   }   
   else
      return 0;
}
