#include <stdio.h>
#include <string.h>

main()
   {
   char name[100];

   printf ("Enter your name: ");
   gets(name);
   printf ("Your nice name consists of %d letters!\n", strlen(name));
   }