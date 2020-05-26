#include <stdio.h>
#include <conio.h>

int sum (int, int);

main()
   {
   int i, j;

   printf ("Enter two numbers: ");
   scanf ("%d %d", &i, &j);

   printf ("The sum of %d and %d is %d\n", i, j, sum(i,j));

   }

int sum (int i, int j)
   {
   return i+j;
   }
