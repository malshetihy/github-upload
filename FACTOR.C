		//factorial.c

		#include <stdio.h>

		main()
		   {
		   unsigned long int i, factorial;

		   printf ("Enter an integer number: ");
		   scanf ("%lu", &i);

		   factorial = 1;
		   for (    ; i>0; i--)
		      factorial *= i;

		   printf ("The factorial is %lu\n", factorial);
		   }