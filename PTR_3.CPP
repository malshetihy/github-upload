#include <stdio.h>

int calculate (int x, int y, int *sum_ptr, int *prod_ptr)
   {
   *sum_ptr = x + y;
   *prod_ptr = x * y;
   return (x-y);
   }

main()
   {
   int a, b, s, p, d;

   printf ("Enter two integers: ");
   scanf ("%d %d", &a, &b);

   d = calculate (a, b, &s, &p);
   printf ("Sum = %d\nProduct = %d\nDiffernce = %d\n", s, p, d);
   }
