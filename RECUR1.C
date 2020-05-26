
	#include<stdio.h>

	void p( int n )
	{
		if( n > 0 )
		{
			p( n - 2 ) ;
			printf("%3d", n ) ;
			p( n - 1 ) ;
		}
	}

	main()
	{
		p(4) ;
		return (0) ;
	}