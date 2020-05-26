
	#include<stdio.h>
	main()		/* menu for ASCII chart program */
	{
	char menuOpt;
	clrscrn();
	printf("MENU - ASCII CHART PROGRAM");
	printf("\n__________________________");
	printf("\n\n\n1 - Look up the character for an ASCII number");
	printf("\n\n2 - Look up the ASCII number of a character");
	printf("\n\n3 - Quit");	
	menuOpt='';
	while(menuOpt !='1' && menuOpt !='2' && menuOpt !='3')
		{
		printf("\n\n\nWhat is your choice >");
		scanf("\n%c",&menuOpt );
		}
	if (menuOpt=='1')   {inttoasc();}
	if (menuOpt=='2')   {asctoint();}
	clrscrn();
	}
	clrscrn()	/* clear the scrren */
	{
	int counter;
	counter = 0;
	while (counter!=25)
		{
		printf("\n");
		counter = counter + 1;
		}
	}
	/*-----------------------------------------------------------*/
	asctoint()	/* print ASCII number for */
			/* agiven character      */
	{
	char smplChr, again;
	again ='Y';
	while ((again=='Y')||(again=='y'))
		{
		clrscrn();
		printf("\nEnter a char >");
		scanf("\n%c",&smplChr);
		printf("\nThe ASCII value of %c is %d.\n",smplChr,smplChr);
		again = 'X';
		while (again !='Y' && again !='y' && again !='N' && again !='n')
			{
			printf("\nAnother case (Y/N) >");
			scanf("\n%c",&again);
			}
		}
	}
	/*-----------------------------------------------------------*/
	inttoasc()	/* print character for a */
			/* given ASCII number    */
	{
	int smplInt;
	char again;
	again = 'Y';
	while (( again=='Y')||(again=='y'))
		{
		clrscrn();
		printf("\nEnter a number to get a char >");
		scanf("%d",&smplInt);
		printf("\nThe ASCII char for %d is %c.\n",smplInt,smplInt);
		again='X';
		while ( again != 'Y' && again != 'y' && again != 'N' && again != 'n')
			{
			printf("\nAnother case (Y/N) >");
			scanf("\n%c",&again);
			}
		}
	}
