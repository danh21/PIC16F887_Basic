#define PulseServo PIN_B0

typedef unsigned int16 uint16;

uint16 T = 20000;
uint16 minAngle = 0;
uint16 maxAngle = 180;
uint16 minPulseServo = 500;
uint16 maxPulseServo = 2500;



void rotateServo(uint16 angle) 
{
   uint16 temp = (maxPulseServo - minPulseServo) / (maxAngle - minAngle);
   temp *= (angle - minAngle);   
   uint16 Ton = temp + minPulseServo;
   
   output_high(PulseServo);
   delay_us(Ton);
   output_low(PulseServo);
   delay_us(T - Ton);
}

