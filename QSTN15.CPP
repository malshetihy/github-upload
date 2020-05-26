
	#include<stdio.h>

	main()
	{
		int number[] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
		int temp , i , size ;

		size = ( sizeof number) / ( sizeof (int ) ) ;
		for( i = 0 ; i < size/2 ; ++i )
		{
			temp = number[i] ;
			number[i] = number[ size - i - 1 ] ;
			number[ size - i - 1 ] = temp ;
		}
		printf("\n\tThe elements of the array : ") ;
		for( i = 0 ; i < size ; ++i )
		{
			printf("  %d", number[i] ) ;
		}
	}
