
	#include<stdio.h>
	#include<conio.h>

	int incadd( int * , int * ) ;

	main()
	{
		int number1 , number2 , total ;

		clrscr() ;
		number1 = 5 ;
		number2 = 3 ;
		total = incadd( &number1 , &number2 ) ;
		printf("\n%d plus %d equals %d", number1 , number2 , total ) ;
		getch() ;
	}

	incadd( x , y )		/* call by reference */
	int *x , *y ;
	{
		*x = *x + 1 ;
		*y = *y + 1 ;
		return *x + *y ;
	}
