#include <stdio.h>
#include <string.h>

main()
   {
   char str1[100], str2[100];
   int result;

   printf ("Enter first  string: "); gets(str1);
   printf ("Enter second string: "); gets(str2);
   result = stricmp(str1, str2);
   if (result == 0)
      puts ("The two strings are the same");
   else if (result >0)
      puts ("The first string is greater");
   else
      puts ("The first string is less");
   }