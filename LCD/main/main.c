#include <main.h>

void main() {
   char string1[10] = "CHELSEA";
   char string2[10] = "TOTTENHAM";
   
   lcd_init();
   
   lcd_gotoxy(6,1);  // col 6, row 1
   lcd_puts(string1);
   
   lcd_gotoxy(5,2);  // col 5, row 2
   lcd_puts(string2);
   
   while(TRUE) {
      
   }
}
