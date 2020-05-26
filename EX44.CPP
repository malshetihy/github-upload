
	/*	S U B S T R
	 * Extract a substring from a source string */

	 #include<stdio.h>
	 #include<string.h>

	 #define MAXSTR 100

	 void Copysubstring( char[] , int , int , char[] ) ;

	 int main(void)
	 {
		char str1[MAXSTR] ;
		char str2[MAXSTR] ;
		int i , pos , len ;

		printf("\nEnter the source string : ") ;
		gets(str1) ;
		printf("\nEnter starting index : ") ;
		scanf("%d", &pos ) ;
		pos -= 1 ;
		printf("\nEnter substring length : ") ;
		scanf("%d", &len ) ;
		Copysubstring(str1 , pos , len , str2 ) ;
		if( strlen(str2) > 0 )
			printf("\nSubstring : %s\n", str2 ) ;
		else
			puts("Empty Substring---check your input values") ;
		return 0 ;
	 }

	 /************************************************************/

	 /*	Copysubstring()
	  *
	  *	Extract a substring of a source string. Copy from the specific
	  *	starting point until the requesting number of characters is copied or
	  *	the end of the string is reached . */

	 void Copysubstring( char source[] , int start , int count , char result[] )
	 {
		int i ;

		i = 0 ;
		if( start >= 0 && strlen(source) > start )
			for( i =  0 ; i < count && source[ start + i ] != '\0' ; i++ )
				result[i] = source[ start + i ] ;
			result[i] = '\0' ;
	 }

	 /************************************************************/
