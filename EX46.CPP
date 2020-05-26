
	/*	P R I N T  S T R
	 * Comparing the printing of strings using several methods , including
	 * indirect access via a pointer. */

	#include<stdio.h>
	#include<string.h>

	int main(void)
	{
		int i , len ;
		char *cp ;
		static char string[] = {"What goes up must come down. , Ask a market analysis !\n"} ;

		printf("Using printf() : ") ;
		printf("%s" , string ) ;
		printf("Using an array index : ") ;
		len = strlen(string) ;
		for( i = 0 ; i < len ; ++i )
			putchar( string[i] ) ;
		printf("Using a character pointer : ") ;
		cp = string ;
		while( *cp )
		{
			putchar(*cp) ;
			++cp ;
		}
		return (0) ;
	}
