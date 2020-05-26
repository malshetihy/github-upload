
	#include<stdio.h>

	#define PI 	3.141593
	#define R	r * r * r

	float sphere( float r )
	{
		return ( 4 * PI * R ) ;
	}

	main()
	{
		float radius , volume ;

		printf("\n\n\tThe radius\tThe volume\n") ;
		for( radius = 0 ; radius < 4.2 ; radius += 0.2 )
		{
			volume = sphere( radius ) ;
			printf("\n\t%.1f\t\t%.2f", radius , volume ) ;
		}
	}
