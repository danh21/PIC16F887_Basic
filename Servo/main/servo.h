#define PulseServo PIN_C1



#define on 1
#define off 0
#define Servo(x) output_bit(PulseServo, x)

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



void rotateToSec(int16 s) 
{
   Servo(on);
   while (s > 0) {
      delay_ms(900); // 1 second
      s--;
   }
   Servo(off);
}



void rotateToMin(int16 m) 
{
   Servo(on);
   while (m > 0) {
      rotateToSec(58); // 1 minute 
      m--;
   }
   Servo(off);
}



void rotateToHour(int16 h) 
{
   Servo(on);
   while (h > 0) {
      rotateToMin(60); // 1 hour 
      h--;
   }
   Servo(off);
}

