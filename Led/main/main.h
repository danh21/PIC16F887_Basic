#include <16F877A.h>
#device ADC = 16

#FUSES HS                       // thach anh ngoai toc do cao
#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal = 20M)

#define LED PIN_B2

#define LEDs(x) output_b(x)



/* ---------------------------------------- FUNCTION ---------------------------------------- */
void blink_led(int16 pin, unsigned int16 ms, int times) 
{
   for (int i = 0; i < times; i++) {
      output_high(pin);
      delay_ms(ms);  
      output_low(pin);    
      delay_ms(ms);
   }
}

void blink_leds(int8 value, unsigned int16 ms, int times) 
{
   for (int i = 0; i < times; i++) {
      LEDs(value);
      delay_ms(ms);  
      LEDs(~value);    
      delay_ms(ms);
   }
}



void run_leds_r2l(unsigned int16 ms, int times) 
{
   for (int i = 0; i < times; i++) {
      for (int8 value = 0x01; value <= 0x80 && value != 0; value <<= 1) {
         LEDs(value);  
         delay_ms(ms);  
      }    
   } 
}

void run_leds_l2r(unsigned int16 ms, int times) 
{
   for (int i = 0; i < times; i++) {
      for (int8 value = 0x80; value >= 0x01; value >>= 1) {
         LEDs(value);  
         delay_ms(ms);  
      }  
   }
}
