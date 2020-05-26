
	#include<stdio.h>
	#include<conio.h>

	main()
	{
	int i;
	float  y=1,y1;

	for ( i=1;i<=25;i++)
		{
		 y1 = 5*(float)i/10 + 2;
		 y += y1/10;
		 printf("\n at x = %.1f		y(t) = %.2f",(float)i/10,(float)y);
		 }
	getch();
	}



