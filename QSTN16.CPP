
	#include<stdio.h>

	main()
	{
		static int number[] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
		int i , size ;

		size = ( sizeof number ) / ( sizeof ( int ) ) ;
		printf("\n\tThe array elements each per line :\n") ;
		for( i = 0 ; i < size ; ++i )
			printf("\n\t%d", *( number + i ) ) ;
	}
