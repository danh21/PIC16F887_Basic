#define LS47_A(x) output_bit(PIN_C0, x)
#define LS47_B(x) output_bit(PIN_C1, x)
#define LS47_C(x) output_bit(PIN_C2, x)
#define LS47_D(x) output_bit(PIN_C3, x)



void Led7Seg_OUT(unsigned char num) 
{
   LS47_A(num & 1);
   LS47_B((num >> 1) & 1);
   LS47_C((num >> 2) & 1);
   LS47_D((num >> 3) & 1);
}
