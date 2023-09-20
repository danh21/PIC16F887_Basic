#include <main.h>

void main() {
   setup(); 
     
   while(TRUE) {
      motorRotateForward;
      delay_ms(3000);
      motorRotateBackward;
      delay_ms(3000);
   }
}
