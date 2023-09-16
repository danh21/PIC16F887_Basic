#define row0 input(PIN_B7)
#define row1 input(PIN_B6)
#define row2 input(PIN_B5)
#define row3 input(PIN_B4)

#define col0(x) output_bit(PIN_B3, x)
#define col1(x) output_bit(PIN_B2, x)
#define col2(x) output_bit(PIN_B1, x)
#define col3(x) output_bit(PIN_B0, x)



#define keypad_numOfRows 4                     
#define keypad_numOfCols 4    

const char keys[keypad_numOfRows][keypad_numOfCols] = {   
   '7', '8', '9', '/',
   '4', '5', '6', 'x',
   '1', '2', '3', '-',
   ' ', '0', '=', '+'
};



signed char scan_keypad() 
{
   char row = -1, col = -1;
   
   col0(0);
   if(row0 == 0)        {col = 0; row = 0;}
   else if(row1 == 0)   {col = 0; row = 1;}
   else if(row2 == 0)   {col = 0; row = 2;}
   else if(row3 == 0)   {col = 0; row = 3;}
   col0(1);
   
   col1(0);
   if(row0 == 0)        {col = 1; row = 0;}    
   else if(row1 == 0)   {col = 1; row = 1;}
   else if(row2 == 0)   {col = 1; row = 2;}
   else if(row3 == 0)   {col = 1; row = 3;}
   col1(1);
   
   col2(0);
   if(row0 == 0)        {col = 2; row = 0;}    
   else if(row1 == 0)   {col = 2; row = 1;}
   else if(row2 == 0)   {col = 2; row = 2;}
   else if(row3 == 0)   {col = 2; row = 3;}
   col2(1);
   
   col3(0);
   if(row0 == 0)        {col = 3; row = 0;}    
   else if(row1 == 0)   {col = 3; row = 1;}
   else if(row2 == 0)   {col = 3; row = 2;}
   else if(row3 == 0)   {col = 3; row = 3;}
   col3(1);
   
   if (col != -1)
      return keys[row][col];
   return -1;
}
