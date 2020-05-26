
	#include<stdio.h>
	#include<stdlib.h>

	main()  	/* Fibonacci sequence */
	{
		int rows , size = 0, i , j , dum = 0 ;
		int *Fib ;

		printf("\n\tEnter the number of rows in Fibonacci triangle ") ;
		scanf("%d", &rows ) ;
		for( i = 1 ; i <= rows ; ++i )
			size += i ;
		Fib = ( int * ) malloc ( sizeof (int) * size ) ;
		Fib[0] = 0 ; Fib[1] = 1 ;
		for( i = 2 ; i < size ; ++i )
			Fib[i] = Fib[i-1] + Fib[i-2] ;
		printf("\nThe Fibonacci sequence : ") ;
		for( j = 0 ; j < rows ; ++j )
		{
			printf("\n") ;
			for( i = dum ; i < j+dum+1 ; ++i )
				printf("   %d", Fib[i] ) ;
			dum = i ;
		}
	}
