#include <stdio.h>

void add_ten (int *ptr)
   {
   *ptr += 10;
   }

main ()
   {
   int x = 7;

   printf ("Before calling, x = %d\n", x);
   add_ten (&x);
   printf ("After calling, x = %d\n", x);
   }