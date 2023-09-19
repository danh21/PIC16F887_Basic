#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=20000000)



/* CONFIG */
#define LED PIN_B0

float period = 1;                // s
float timer_div_by = 2;          // T1_DIV_BY_2 mode



float thresOverflow = timer_div_by * 104857.6 / 8;             // help on "setup_timer_1"

int count = 0; 
int countOverflow = (period / 2) * 1000000 / thresOverflow;    // us
