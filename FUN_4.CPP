#include <stdio.h>

int add_ten(int i)
   {
   i = i+10;
   return i;
   }

main()
   {
   int x;
   x = 9;
   printf ("Before calling, x = %d\n", x);
   X = add_ten(x);
   printf ("After  calling, x = %d\n", x);
   }