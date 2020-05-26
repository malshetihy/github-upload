
	#include<stdio.h>

	#define PI 	3.141593
	#define volume	4 * PI * r * r * r

	main()
	{
		float r ;

		printf("\n\n\tThe radius\tThe volume\n") ;
		for( r = 0 ; r < 4.2 ; r += 0.2 )
			printf("\n\t%.1f\t\t%.2f", r , volume ) ;
	}
