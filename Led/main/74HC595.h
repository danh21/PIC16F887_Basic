/* --------------------------------- CONFIG --------------------------------- */
#define SH_CP  PIN_C0
#define DS     PIN_C1
#define ST_CP  PIN_C2
#define MR     PIN_C3



/* --------------------------------- FUNCTION --------------------------------- */
#define Shift_CLK(x)    output_bit(SH_CP, x)
#define Serial_Data(x)  output_bit(DS, x)
#define Latch_CLK(x)    output_bit(ST_CP, x)

#define Shift_CLK_transition {Shift_CLK(0); Shift_CLK(1);}
#define Latch_CLK_transition {Latch_CLK(0); Latch_CLK(1);}
#define Reset                {output_bit(MR, 0); output_bit(MR, 1);} 



void send_bit(int1 bit)             // send 1 bit
{ 
   Serial_Data(bit);
   Shift_CLK_transition;    
   Latch_CLK_transition;
}



void send_byte(int8 data)           // send 1 byte
{
   Serial_Data((data >> 7) & 1);
   Shift_CLK_transition;
   
   Serial_Data((data >> 6) & 1);
   Shift_CLK_transition;
   
   Serial_Data((data >> 5) & 1);
   Shift_CLK_transition;
   
   Serial_Data((data >> 4) & 1);
   Shift_CLK_transition;
   
   Serial_Data((data >> 3) & 1);
   Shift_CLK_transition;
   
   Serial_Data((data >> 2) & 1);
   Shift_CLK_transition;
   
   Serial_Data((data >> 1) & 1);
   Shift_CLK_transition;
   
   Serial_Data((data >> 0) & 1);
   Shift_CLK_transition;
   
   Latch_CLK_transition;
}



void send_bytes(int8 arrData[], int len)  // send many bytes     
{ 
   for (int i = 0; i < len; i++) 
      send_byte(arrData[i]);
}
