#include <main.h>

void main() {
   char arr[3] = {0x80, 0x55, 0x01};
   
   send_bytes(arr, 3);
   delay_ms(1000);
   Reset;
   
   while(TRUE) {
      // on gradually, off gradually
      lightUp_fadeDown();
   }
      
}
