#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=20000000)

#define on 1
#define off 0

#define sensor1 input(PIN_B1)
#define sensor2 input(PIN_B2)
#define rst input(PIN_B3)

#define led1(stt) output_bit(PIN_D0, stt)
#define led2(stt) output_bit(PIN_D2, stt)

#define buzzer1(stt) output_bit(PIN_D1, stt)
#define buzzer2(stt) output_bit(PIN_D3, stt)
