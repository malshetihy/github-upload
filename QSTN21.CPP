
	#include<stdio.h>	/* Caesar cipher method */
	#include<stdlib.h>
	#include<string.h>
	#include<conio.h>

	char encrypt( char c )
	{
		c += 3 ;
		if( c > 126 )
			c -= 93 ;
		return c ;
	}

	main()
	{
		int no ;
		char *sp ,*dum ;

		printf("\nEnter the number of characters of the message : ") ;
		scanf("%d", &no ) ;
		getchar() ; /* USED TO CLEAR THE BUFFER */
		sp = ( char * ) malloc( no * sizeof(char) ) ;
		printf("\nEnter the plain message : ") ;
		gets(sp) ;
		for( int i = 0 ; i < strlen(sp) ; ++i )
			sp[i] = encrypt( sp[i] ) ;
		printf("\nThe encrypted message : %s", sp ) ;
	}

