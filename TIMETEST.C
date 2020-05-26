
	#include<stdio.h>
	#include<time.h>

	double recfac( int n )
	{
		return n > 1 ? n * recfac( n - 1 ) : 1.0 ;
	}

	double itfac( int n )
	{
		double product = 1.0 ;

		while( n > 1 )
			product *= n-- ;
		return product ;
	}

	main()
	{
		clock_t t0 , t1 ;
		int n , k , i ;
		double f ;

		printf("Enter the value of n , to compute n! : ") ;
		scanf("%d", &n ) ;
		printf("How many time do you want %d! to be computed ? : ", n ) ;
		scanf("%d", &k ) ;
		t0 = clock() ;
		for( i = 0 ; i < k ; i++ )
			f = recfac(n) ;
		t1 = clock() ;
		printf("Recursionn : %d! = %1.0f\ttime = %7.2f s\n", n , f , ( t1 - t0 ) / CLK_TCK ) ;
		t0 = clock() ;
		for( i = 0 ; i < k ; i++ )
			f = itfac(n) ;
		t1 = clock() ;
		printf("Iteration : %d! = %1.0f\ttime = %7.2f s\n", n , f , ( t1 - t0 ) / CLK_TCK ) ;
		return (0) ;
	}

