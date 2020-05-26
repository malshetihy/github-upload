
	#include<stdio.h>

	#define DATA(x) ( 2 * x + 3 )

	main()
	{
		int y , x  ;

		printf("\nX\tY") ;
		for( x = 0 ; x <= 9 ; x++ )
		{
			y = DATA(x) ;
			printf("\n%d\t%d", x , y ) ;
		}
	}