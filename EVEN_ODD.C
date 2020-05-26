		#include <stdio.h>

		main()
		   {
		   int i;

		   printf ("Enter an integer number: ");
		   scanf ("%d", &i);

		   if (i%2 == 0)
		      printf ("Square of i = %d\n", i*i);
		   else
		      printf ("Cube of i = %d\n", i*i*i);
		   }