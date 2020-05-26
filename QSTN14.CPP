
	#include<stdio.h>

	main()
	{
		int cell[2] = { 1 , 5 } ;
		char ch[2][3] = { "tod" , "mm." } ;
		static int a[2][3] = { { 0 , 1 , 0 } } ;
		static char x[5] = {"mmmmm"} ;
		static double y[2][3] = { { 3.0 , 3.1 , 3.14 } , { 2.0 , 2.7 , 2.71 } } ;

		for( int i = 0 ; i < 2 ; ++ i )
			printf("\n%d", cell[i] ) ;
		for( i = 0 ; i < 2 ; ++i )
		{
			for( int j = 0 ; j < 3 ; ++j )
				printf("\n%c", ch[i][j] ) ;
		}
		for( i = 0 ; i < 2 ; ++i )
		{
			for( int j = 0 ; j < 3 ; ++j )
				printf("\n%d", a[i][j] ) ;
		}
		for( i = 0 ; i < 5 ; ++ i )
			printf("\n%c", x[i] ) ;
		for( i = 0 ; i < 2 ; ++i )
		{
			for( int j = 0 ; j < 3 ; ++j )
				printf("\n%lf", y[i][j] ) ;
		}
}
