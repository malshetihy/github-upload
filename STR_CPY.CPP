#include <stdio.h>
#include <string.h>

main()
   {
   int x, y;
   char str1[10], str2[10];

   printf ("Enter first string: ");
   gets (str1);
   strcpy (str2, str1);
   printf ("The first string: %s\n", str1);
   printf ("The copied string is %s\n", str2);
   }
