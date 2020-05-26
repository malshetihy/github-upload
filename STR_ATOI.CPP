#include <stdio.h>
#include <stdlib.h>

main()
   {
   int i;
   char temp_str[10];

   printf ("Enter an integer: ");
   gets(temp_str);
   i = atoi(temp_str);
   printf ("The entered value is %d\n", i);
   }
