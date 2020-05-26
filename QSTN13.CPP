
	#include<stdio.h>

	int stringlength( char *s )
	{
		for( int i = 0 ; s[i] != '\0' ; ++i )
			{ }
		return i ;
	}

	main()
	{
		char str[64]   ;
		int length ;

		printf("\n\tEnter a string to get its length : ") ;
		scanf("%s", str ) ;
		length = stringlength( str ) ;
		printf("\n\tThe length of the string you entered is %d characters\n", length ) ;
	}

