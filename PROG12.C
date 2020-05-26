
	#include<stdio.h>
	main()		/* print ASCII value of */
			/* char asked by the user */
	{
	char smplChr,again;
	again='A';
	while (again=='A')
		{
		printf("\nEnter a char>");
		scanf("\n%c",&smplChr);
		printf("\nThe ASCII value of %c is %d.\n",smplChr,smplChr);
		printf("\nEnter A to look up another,");
		printf("\n or any letter to quit >");
		scanf("\n%c",&again);
		}
	}






























































































