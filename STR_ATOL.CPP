#include <stdio.h>
#include <stdlib.h>

main()
   {
   long i;
   char temp_str[10];

   printf ("Enter an integer: ");
   gets(temp_str);
   i = atol(temp_str);
   printf ("The entered value is %ld\n", i);
   }
