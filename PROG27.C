
	#include<stdio.h>

	float wageTot[52][5];
	int numOfWks;

	main()		/* enter wages for each week */
	{      		/* and calculate yearly wage */
		int cntr;

		printf("\n How many weeks of wages ?");
		scanf("%d",&numOfWks);
		cntr = 0;
		while (cntr < numOfWks && cntr < 52)
		{
			printf("\nEnter the gross wages for week %d > ",cntr + 1);
			scanf("%f",&wageTot[cntr][0]);
			printf("\nEnter the taxes deduced for week %d > ",cntr + 1);
			scanf("%f",&wageTot[cntr][1]);
			printf("\nEnter the FICA deduced for week %d >",cntr + 1);
			scanf("%f",&wageTot[cntr][2]);
			wageTot[cntr][3] = wageTot[cntr][0] - wageTot[cntr][1] - wageTot[cntr][2];
			printf("\nEnter the benefits paid for week %d > ",cntr + 1);
			scanf("%f",&wageTot[4][cntr]);
			cntr = cntr + 1;
		}
		totfica();
		lookupwk();
	}

	/****************************************************************/

	totfica()
	{
		int cntr;
		float sum;

		cntr = 0;
		sum = 0;
		while (cntr < 52 && cntr < numOfWks)
		{
			sum = sum + wageTot[cntr][2];
			cntr = cntr + 1;
		}
		printf("\n\nTotal FICA is %f\n\n",sum);
	}

	/*****************************************************************/

	lookupwk()
	{
		int wkToFind;
		char again ;

		while (1==1)
		{
			printf("\nWhat week number do you want to find > ");
			scanf("%d",&wkToFind);
			if (wkToFind < 1 || wkToFind > 52 || wkToFind > numOfWks)		printf("%c",7);
			else
			{
				wkToFind = wkToFind - 1;
				printf("\nGros Wages : %f",wageTot[wkToFind][0]);
				printf("\nTaxes      : %f",wageTot[wkToFind][1]);
				printf("\nFICA       : %f",wageTot[wkToFind][2]);
				printf("\nNet Wages  : %f",wageTot[wkToFind][3]);
				printf("\nBenefits   : %f",wageTot[wkToFind][4]);
			}
			printf("\n\n\nAnother week (Y/N) ? ");
			scanf("\n%c",&again);
			if (again != 'Y' && again != 'y')		break;
		}
	}

	/************************************************************/


