
	#include<stdio.h>
	#include<conio.h>

	main()
	{
	int x;
	char again = 'y';

	while ( again == 'y' || again == 'Y' )
		{
		printf("\n ENTER AN INTEGER NUMBER >");
		scanf("%d",&x);
		if ( x>0 )
			{printf("\nthe square of %d = %d ",x,x*x);}
		do
			{
			printf("\n DO YOU WANT TO TRY ANOTHER NUMBER >");
			again = getch();
			}while ( again != 'y' && again !='Y' && again != 'n' && again != 'N' );
		if (again == 'n' || again =='N' )
		   {
		   printf("\n\n	GOOD BYE ");
		   getch();
		   }
		}
       }
