#include <stdio.h>

char *names[5] = { "Alaa",
		   "Aya",
		   "Kofta",
		   "Ibrahim",
		   "Sayyed" };

main()
   {
   int i;

   for (i=0; i<5; i++)
      puts (names[i]);
   }


