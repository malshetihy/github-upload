		#include <stdio.h>
		#include <string.h>

		check( char str[])
		   {
		   int i, flag, num_of_dots=0;

		   for (i=0, flag=1;
			i<strlen(str) && flag==1 && num_of_dots < 2;
			i++)
		      {
		      if (str[i] == '.')
			 num_of_dots ++;
		      else if (str[i] < '0' || str[i] > '9')
			 flag = 0;
		      }
		   if (num_of_dots > 1)
                      flag = 0;

		   return flag;
		   }

		main()
		   {
		   char num[100];

		   printf ("Enter a float number : "); gets(num);
		   if (check(num) == 1)
		      puts ("TRUE");
		   else
		      puts ("FALSE");
		   }
