#include <main.h>

void main() 
{
   char name[LCD_LINE_LENGTH] = "Digital Clock";
   int h, min, sec;
   
   init_RTC(&h, &min, &sec);
   
   lcd_init(); 
   delay_ms(500);  
   lcd_gotoxy(3, 1);  
   lcd_puts(name);
   
   while (TRUE) {    
      start_RTC(h, min, sec);
   }
}
