
	#include<stdio.h>
	main()		/* print ASCII value of */
			/* char asked by the user*/
	{
	char smplChr, again;
	again ='Y';
	while ((again=='Y')||(again=='y'))
		{
		printf("\nEnter a char >");
		scanf("\n%c",&smplChr);
		printf("\nThe ASCII value of %c is %d.\n",smplChr,smplChr);
		again ='X';
		while(again!='Y' && again!='y' && again!='N' && again!='n')
			{
			printf("\nAnother case (Y/N) >");
			scanf("\n%c",&again);
			}
		}
	clrscrn();
	}
	clrscrn()	/* clear the screen */
	{
	int counter;
	counter = 0;
	while (counter!=25)
		{
		printf("\n");
		counter = counter + 1;
		}
	}

