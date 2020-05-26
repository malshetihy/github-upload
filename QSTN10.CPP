
	#include<stdio.h>

	main()
	{
		int arr[] = { 12, 34, 56, 78 } ;
		int sum = 0 ;
		float aver ;

		for( int i = 0 ; i < 4 ; ++i )
			sum += arr[i] ;
		printf("\n\tThe sum of the array = %d\n", sum ) ;
		aver = sum / 4 ;
		printf("\n\tThe average = %.3f" , aver ) ;
	}