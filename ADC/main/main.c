#include <main.h>

void main() {
   float adc, volt;  
   char string[LCD_LINE_LENGTH];
   
   lcd_init();
   delay_ms(500);
  
   setup_adc(ADC_CLOCK_INTERNAL);
   setup_adc_ports(ALL_ANALOG);     // Sets up the ADC pins to be analog
   set_adc_channel(channel);        // config AN5
   delay_us(10);
   
   while (TRUE) {
      adc = read_adc();
      volt = 5 * adc / 1023;        // 5V - 1023adc
      sprintf(string, "VOLT = %.3f V", volt);
      
      lcd_gotoxy(2, 1);                        
      lcd_puts(string);
      
      delay_ms(100);
   } 
}
