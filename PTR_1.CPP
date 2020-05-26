#include <stdio.h>
#include <conio.h>

main()
   {
   int x, y, *ptrx, *ptry;

   ptrx = &x;		// pointer to x
   *ptrx = 5;		// put 5 in x indirectly
   y = *ptrx;	     	// now, y == 5
   ptry = &y;		// pointer to y
   (*ptry)++;		// increment y indirectly

   printf ("x=%d, y=%d\n", x, y);
   printf ("ptrx=%p, ptry=%p\n", ptrx, ptry);
   }

