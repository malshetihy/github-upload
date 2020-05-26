		#include <stdio.h>
		#include <string.h>

		check( char str[])
		   {
		   int i, flag;

		   for (i=0, flag=1; i<strlen(str) && flag==1; i++)
		      {
		      if (str[i] < '0' || str[i] > '9')
			 flag = 0;
		      }
		   return flag;
		   }

		main()
		   {
		   char num[100];

		   printf ("Enter an integer number : "); gets(num);
		   if (check(num) == 1)
		      puts ("The string contains digits only");
		   else
		      puts ("The string contains non-digits");
		   }
