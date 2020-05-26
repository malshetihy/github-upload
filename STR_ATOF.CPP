#include <stdio.h>
#include <stdlib.h>

main()
   {
   float i;
   char temp_str[10];

   printf ("Enter an integer: ");
   gets(temp_str);
   i = atof(temp_str);
   printf ("The entered value is %f\n", i);
   }
