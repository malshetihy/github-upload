#include <stdio.h>

string_length(char str[])
   {
   int i;
   i = 0;		//first character

   while (  str[i++]  )	/* str[i] != 0 */
      ;

   return i;
   }

main()
   {
   char name[100];

   printf ("Enter your name: ");
   gets(name);
   printf ("Your nice name consists of %d letters!\n", string_length(name));
   }
