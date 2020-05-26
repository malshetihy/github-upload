
	#include<stdio.h>
	int nmbr[10];
	main()		/*an arithmetic quiz program */
	{
	int cntrA,cntrB,diff,answer;
	initlze();
	cntrA = 0;
	diff = 1;
	cntrB = cntrA + diff;
	while (1==1)
		{
		printf("\n");
		printf("%d + %d = ",nmbr[cntrA],nmbr[cntrB]);
		scanf("%d",&answer);
		if ( answer == nmbr[cntrA] + nmbr[cntrB] )
		printf("\nRight!!!");
		else
			{
			printf("\nWrong!?");
			continue;
			}
		cntrA = cntrA + 2;
		if ( cntrA > 9)
			{
			cntrA = cntrA - 10;
			diff = diff + 1;
			}
		if ( diff > 9 )  diff = 2;
		cntrB = cntrB + diff ;
		if ( cntrB > 9)  cntrB = cntrB - 10 ;
		}
	}
	initlze()
	{
	nmbr[0] = 8 ;nmbr[1] = 2;nmbr[2] = 4; nmbr[3] = 9;nmbr[4] = 0;
	nmbr[5] = 1; nmbr[6] = 3; nmbr[7] = 6;nmbr[8] = 5;nmbr[9] = 7;
	}

