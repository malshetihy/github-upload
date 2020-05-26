
	#include<stdio.h>

	#define MIN3( x , y , z ) ( ( z > y && y > x ) || ( y > z && z > x ) ? x : \
				    ( x > z && z > y ) || ( z > x && x > y ) ? y : z )

	main()
	{
		int x , y , z ;

		printf("\nEnter 3 numbers : ") ;
		scanf("%d%d%d", &x , &y , &z ) ;
		printf("\nThe minimum number is %d", MIN3( x , y , z ) ) ;
	}
