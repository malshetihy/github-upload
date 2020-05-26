#include <stdio.h>
main()
   {
   char name[20], lastname[20];			/* string */

   printf ("What is your name: ");
   scanf ("%s %s", name, lastname);		// name = address of 1st byte
   printf ("Nice to meet you %s %s\n", name, lastname);

   }

