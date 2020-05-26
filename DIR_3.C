#include <stdio.h>

#define ASK(prompt,var) puts(prompt);  \
			scanf ("%d", &var);

#define DIFF(x,y)  ((x)-(y))
main()
   {
   int i, j;
   ASK    ("Enter first number", i);
   ASK("Enter second number", j);
   printf("Difference = %d\n", DIFF(i,j));
   }


