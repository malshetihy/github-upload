
	#include<stdio.h>

	int gcd( int x , int y )
	{
		int r ;

		if( x < 0 )
			x = -x ;
		if( y < 0 )
			y = -y ;
		while(y)
		{
			r = x%y ;
			x = y ;
			y = r ;
		}
		return x ;
	}

	main()
	{
		int divisor ;

		divisor = gcd( 1900 , 700 ) ;
		printf("\n\tgcd( 1900 , 700 ) = %d\n", divisor ) ;
	}
