
	#include<stdio.h>
	#include<conio.h>

	main()
	{
		int i , number = 6 , factorial ;

		clrscr() ;
		for( i = number , factorial = 1 ; i > 1 ; --i )
			factorial *= i ;
		printf("\n\n\tFactorial = %d" , factorial ) ;
		getch() ;
	}