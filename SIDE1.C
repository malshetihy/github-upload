
	#include<stdio.h>

	int n ;

	int square( int x )
	{
		n = x * x ;
		return n ;
	}

	main()
	{
		int i , x , no ;

		printf("Enter n : ") ;
		scanf("%d", &no ) ;
		printf("Enter %d integers to be squared : \n", no ) ;
		for( i = 0 ; i < no ; i++ )
		{
			scanf("%d", &x ) ;
			printf("Its square is : %d\n", square(x) ) ;
		}
		return 0 ;
	}
