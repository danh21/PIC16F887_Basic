#include <main.h>

void main() 
{
   int16 adc_value; 
   char string[LCD_LINE_LENGTH];
   
   lcd_init();
   delay_ms(1000);
  
   setup_adc(ADC_CLOCK_INTERNAL);
   setup_adc_ports(ALL_ANALOG);     // Sets up the ADC pins to be analog
   set_adc_channel(1);              // config AN1
   delay_us(10);
   
   while (TRUE) {
      adc_value = read_adc();     
      sprintf(string, "ADC = %04ld", adc_value);  // 4 digits
      
      lcd_gotoxy(4, 1);                        
      lcd_puts(string);
      
      delay_ms(100);
   }
}
