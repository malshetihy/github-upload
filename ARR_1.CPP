#include <stdio.h>
#define MAX 50

main()
   {
   int mark[MAX], i=0, total = 0, number;

   do {
      printf ("Enter mark number %d: ", i);
      scanf ("%d", &mark[i]);
      } while (mark[i++] >= 0);

   number = i-1;	//actual number of students
   for (i=0; i<number; i++)
      total+=mark[i];
   printf ("Average = %f\n", (float)total/number);
   }
