#include <16F877A.h>
#device ADC = 16

#FUSES HS                       // thach anh ngoai toc do cao
#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal = 20000000)



#include "keypad.h"

#use rs232(uart1, baud = 9600)

void print_key(char key)
{
   if (key != -1) 
      printf("Key: %c\r\n", key);
}
