
	#include<stdio.h>

	main()
	{
		int i , s ;

		puts("Enter some integers followed by any nonnumerical character : ") ;
		while( scanf("%d", &i ) == 1 )	s += i ;
		printf("\nThe sum is : %d\n", s ) ;
		return 0 ;
	}