#define Led7Seg_OUT(num) output_d(num)

#define Led7Seg1(b) output_bit(PIN_B0, b)
#define Led7Seg2(b) output_bit(PIN_B1, b)

#define scan_Led7Seg1 {Led7Seg2(1); Led7Seg1(0);}
#define scan_Led7Seg2 {Led7Seg1(1); Led7Seg2(0);}



unsigned char number[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};



void display_led7seg(int value) 
{
   int dozens, units;
   
   dozens = value / 10;
   units = value % 10;
  
   scan_Led7Seg1;  
   Led7Seg_OUT(number[dozens]);
   delay_ms(1);
     
   scan_Led7Seg2;
   Led7Seg_OUT(number[units]);    
   delay_ms(1);  
}
