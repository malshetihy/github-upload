#include <stdio.h>

main()
   {
   int x, *p, **q;
   // p is a pointer to int
   // q is a pointer to pointer to int

   p = &x;
   q = &p;
   **q = 10;		// x = 10 double indirection
   printf (" x = %d\n", x);
   }