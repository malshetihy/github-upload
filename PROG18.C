	
	#include<stdio.h>
	main()		/* enter wages for each week written the easy way */
	{
	float wageWk[52];
	int cntr,numOfWks;
	printf("\nHow many weeks of wages ?");
	scanf("%d",&numOfWks);
	cntr = 0;
	while ( cntr < numOfWks && cntr <52 )
		{
		printf("\nEnter the wage for week %d >",cntr + 1 );
		scanf("%f",&wageWk[cntr]);
		cntr = cntr + 1;
		}
	}