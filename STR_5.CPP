#include <stdio.h>

void copy_string(char str2[], char str1[])
   {
   int i=0;

   while (str1[i] != 0)
      {
      str2[i] = str1[i];
      i++;
      }
   str2[i] = 0;
   }

main()
   {
   int x, y;
   char str1[10], str2[10];

   printf ("Enter first string: ");
   gets (str1);
   copy_string (str2, str1);
   printf ("The first string: %s\n", str1);
   printf ("The copied string is %s\n", str2);
   }

