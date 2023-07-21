#include <16F877A.h>
#device ADC = 16

#FUSES HS                       // thach anh ngoai toc do cao
#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal = 20M)

#define LED PIN_B0

void blink(int16 pin, unsigned int16 ms) {
   output_high(pin);  
   delay_ms(ms);  
   output_low(pin);    
   delay_ms(ms);
}