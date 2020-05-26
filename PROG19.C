	
	#include<stdio.h>
	main()		/* enter wages for each week */
			/* the easy-to-understand way */
	{
	float wageWk[52];
	int cntr , numOfWks , weekNmbr;
	printf("\nHow many weeks of wages ?");
	scanf("%d",&numOfWks);
	cntr = 0;
	weekNmbr = 1;
	while ( cntr < numOfWks && cntr <52 )
		{
		printf("\nEnter the wage for week %d >",weekNmbr);
		scanf("%f",&wageWk[cntr]);
		cntr = cntr + 1;
		weekNmbr = weekNmbr + 1;
		}
	}
