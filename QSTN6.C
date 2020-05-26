	
	#include<stdio.h>
	main() 		/* to get odd random numbers */
	{
	int i,x,max;
	printf("\nEnter the number of trials > ");
	scanf("%d",&max);
	for ( i = 0 ; i <= max ; ++i )
		{
		x = rand() ;
		if (x % 2 == 0)		continue;
		else 			printf("\n%5d",x);
		}
		printf("\n\nPRESS ANY KEY TO QUIT > ");
                getch ();
	}
