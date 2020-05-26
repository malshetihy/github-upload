	
	#include<stdio.h>
	main()  	/* modify a number and invert all the bits */
	{
	unsigned short int nmbr,mnmbr;
	char dummy ;
	while (1==1)
		{
		printf("\n\nEnter a number in the range 0 to 65535 > ");
		if ( scanf("%u",&nmbr) == 0 )		break;
		printf ("\n the number = %u", nmbr);
		mnmbr = 65535 ^nmbr ;    	/* use xor to invert the bits */
		printf("\n\nThe modified number is %u",mnmbr);
		dummy = ' ' ;
		while (dummy !='y' && dummy != 'Y'  && dummy !='n' && dummy != 'N' )
			{
			printf("\n\nDo you want to invert another (Y/N) > ");
			scanf("\n%c",&dummy);
			if (dummy == 'y'|| dummy == 'Y')	break ;
			if (dummy == 'n'|| dummy == 'N')	exit();
			printf("\n%c",7);
			}
		}
	}