
	#include<stdio.h>
	
	main()		/* an arithemetic quiz program */
	{
	int nmbr[10], cntr, answer;
	nmbr[0] = 10; nmbr[1] = 9; nmbr[2] = 8; nmbr[3] = 7; nmbr[4] = 6;
	nmbr[5] = 5; nmbr[6] = 4 ; nmbr[7] = 3; nmbr[8] = 2; nmbr[9] = 1;
	cntr = 0;
	while ( cntr < 8 )
		{
		printf("\n");
		printf("%d + %d = ",nmbr[cntr],nmbr[cntr + 1]);
		scanf("%d",&answer);
		if ( answer == nmbr[cntr] + nmbr[cntr + 1] )
			{
			printf("\nRight!!!");
			cntr = cntr + 2;
			}
		else printf("\nWrong!?");
		}

	}
	
	
	
	