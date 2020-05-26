
	#include<stdio.h>
	main() 		/* check odd and even numbers */
	{
	int dgt,nmbr;
	char dummy ;
	while ( 1==1)
		{
		dummy = ' ';
		printf("\nEnter a digit > ");
		if( scanf("%d",&dgt) == 0 )  	break ;
		nmbr = dgt%2;
		     if (nmbr == 0)	     	printf("\nThis digit (%d) is even.",dgt);
		else if (nmbr >  0)		printf("\nThis digit (%d) is odd .",dgt);
		while (dummy !='y' && dummy !='Y' && dummy !='n' && dummy !='N')
			{
			printf("\nDo you want to check another (Y/N) > ");
			scanf ("\n%c",&dummy);
			     if (dummy == 'n' || dummy == 'N' )	 	exit();
			else if (dummy == 'y' || dummy == 'Y' ) 	break ;
			printf("\n%c",7);
			}
		}
	}