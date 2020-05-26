
	#include<stdio.h>
	main()		/*print ASCII value of char asked by the user*/
	{
	char smplChr,again,dummy;
	again='A';
	while ((again=='A')||(again=='a'))
		{
		printf("\nEnter a char >");
		scanf("\n%c",&smplChr);
		printf("\nThe ASCII value of %c is %d.\n",smplChr,smplChr);
		printf("\nEnter A to look up another ,");
		printf("\nor any letter to quit >");
		scanf("\n%c",&again);
		}
	printf("\nEnter any letter to continue... >");
	scanf("\n%c",&dummy);
	}





































































