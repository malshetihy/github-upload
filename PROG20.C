
	#include<stdio.h>
	main()		/*enter wages for each week and calculate yearly wage*/
	{
	float wageWK[52];
	int cntr,numOfWKs;
	float yrlyWage;
	printf("\nHow many weeks of wages ?");
	scanf("%d",&numOfWKs);
	cntr = 0;
	while (cntr < numOfWKs && cntr < 52 )
		{
		printf("\nEnter the the wage for week %d >",cntr + 1);
		scanf("%f",&wageWK[cntr]);
		cntr = cntr + 1;
		}
	yrlyWage = 0;
	cntr =0;
	while ( cntr < numOfWKs && cntr < 52 )
		{
		yrlyWage = yrlyWage + wageWK[cntr];
		cntr = cntr + 1;
		}
	printf("\n\nThe total yearly wage is %f",yrlyWage);
	}























