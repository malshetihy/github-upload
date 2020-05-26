		#include <stdio.h>

		main()
		   {
		   unsigned long int i, factorial;

		   printf ("Enter an integer number: ");
		   scanf ("%lu", &i);

		   factorial = 1;
		   while (i>0)
		      {
		      factorial *= i--;
		      }
		   printf ("The factorial is %lu\n", factorial);
		   }

