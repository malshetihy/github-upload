
	#include<stdio.h>
	#include<stdlib.h>

	main()
	{
		int n , i , *a ;

		printf("Enter n , the size of the array : ") ;
		scanf("%d", &n ) ;
		a = ( int * ) malloc( n * sizeof( int ) ) ;
		if( a == NULL )	puts("Memory problem") , exit(1) ;
		printf("Enter %d numbers :\n", n ) ;
		for( i = 0 ; i < n ; i++ )	scanf("%d", a + i ) ;
		puts("Here are the same numbers in reverse order : ") ;
		for( i = n - 1 ; i >= 0 ; i-- )
			printf("%d\n", a[i] ) ;
		return 0 ;
	}