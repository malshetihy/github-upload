
	#include<stdio.h>
	#include<ctype.h>
	#include<string.h>

	main()
	{
		char str[64] ;
		int i , digits = 0 , letters = 0 ;

		printf("\n\tEnter a string to classify : ") ;
		gets( str ) ;
		for( i = 0 ; i < strlen(str) ; ++i )
		{
			if( isalpha(str[i]) )
				++letters ;
			if( isdigit(str[i]) )
				++digits ;
		}
		printf("\n\tThere are %d characters and %d digits in this string .", letters , digits ) ;
	}
