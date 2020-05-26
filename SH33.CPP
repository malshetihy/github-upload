
	#include<stdio.h>
	#include<conio.h>

	main()
	{
	float x[10],f[10],xo,F=0,numerator,denominator;
	int i,j,no,k;

	clrscr();
	puts("\n\n\tENTER THE NO. OF POINTS : ");
	gotoxy(37,3);
	scanf("%d",&no);
	puts("\n\tENTER THE FOLLOWING :\n\n\tX    = \n\tF(x) = ");
	for ( i = 0 ; i < no;i++)
		{
		gotoxy(18+5*i,7);
		scanf("%f",&x[i]);
		gotoxy(18+5*i,8);
		scanf("%f",&f[i]);
		}
	puts("\n\tENTER THE POINT XO TO INTERPOLATE : ");
	gotoxy(48,10);
	scanf("%f",&xo);


	for ( j = 0 ; j < no ; j++)
		{
		numerator=1;denominator=1;
		for ( i = 0 ; i < no ; i++ )
			{
			if ( i == j )		  ++i ;
			if ( i >= no )		break ;
			numerator *= (xo - x[i]) ;
			denominator *= (x[j] - x[i]) ;
			}
		F += numerator/denominator * f[j] ;
		}


	printf("\n\n\tF(%.1f) = %.1f",xo,F);
	getch();
	}
