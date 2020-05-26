
	#include<stdio.h>
	#include<conio.h>

	main()
	{
		int i , number = 6 , factorial ;

		clrscr() ;
		factorial = 1 ;
		i = number ;
		while( i > 1 )
		{
			factorial *= i ;
			--i ;
		}
		printf("\n\n\tFacorial = %d", factorial ) ;
		getch() ;
	}



