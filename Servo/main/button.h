#define rotateBtn PIN_D7



int isPressed(int16 btn)
{
   if (!input(btn)) {
      while (!input(btn));     // debounce
      return 1;
   }   
   else
      return 0;
}
