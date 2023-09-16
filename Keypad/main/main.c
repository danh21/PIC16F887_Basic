#include <main.h>

void main()
{  
   char key;

   while (TRUE)
   {  
      key = scan_keypad();
      print_key(key);
      delay_ms(200);
   }
}
