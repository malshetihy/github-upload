
	#include<stdio.h>
	#include<conio.h>
	#include<ctype.h>

	main()
	{
		char name[21] ;
		int counter ;

		clrscr() ;
		printf("\n\n\tWhat is your name ? ") ;
		gets( name ) ;
		name[0] = toupper( name[0] ) ;
		counter = 1 ;
		while( name[ counter ] != '\0' )
		{
			if( name[ counter ] != ' ' )
			{
				if( name[ counter - 1 ] == ' ' )
					name[ counter ] = toupper( name[ counter ] ) ;
				else
					name[ counter ] = tolower( name[ counter ] ) ;
			}
			counter = counter + 1 ;
		}
		printf("\n\tHello , %s" , name ) ;
		getch() ;
	}
