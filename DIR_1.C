#include<stdio.h>

#define FULL_MARK 70

main()
   {
   int mark = 0;

   while (mark >= 0)
      {
      puts ("Enter mark");
      scanf ("%d", &mark);
      if (mark >=0)
	 printf ("Percantage: %.2f\n", (float)mark/FULL_MARK*100 );
      }
   }
