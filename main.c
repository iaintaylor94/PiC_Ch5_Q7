/* The decimal point before the 2 in the printf statement specifies the minimum characters to display to the terminal (cents (0-9) will have a leading 0) */

/* 
  Decimal:
    Leading blanks:
      %[width]i
      %0[width]i

    Leading zeros:
      %[.precision]i

  Float:
    %[width].[precision]f
    width = minimum #chars (including '.')
    precision = #chars after '.'
*/

#include <stdio.h>

int main(void) {
  int dollars, cents, count;

  for (count = 1; count <=10; count++) {
    printf ("Enter dollars: ");
    scanf ("%i", &dollars);
    
    printf ("Enter cents: ");
    scanf ("%i", &cents);

    printf ("$%i.%.2i\n\n", dollars, cents);
  }
  
  
  return 0;
}