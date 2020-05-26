
	/*	R E V E R S E
	 * Reverse a string in memory */

	 #include<stdio.h>
	 #include<stdlib.h>

	 #define NBYTES 80

	 char *GetString( char * ) ;
	 char *ReverseString( char * ) ;

	 int main(void)
	 {
		char buf[NBYTES+1] ;

		if( GetString(buf) == NULL )
		{
			fprintf( stderr , "Error : Cannot get input string\n") ;
			exit(1) ;
		}
		if( ReverseString(buf) == NULL )
		{
			fprintf( stderr , "Error : Empty string\n") ;
			exit(2) ;
		}
		printf("Reversed string: %s\n", buf ) ;
		return(0) ;
	 }

	 char *GetString(str)
	 char *str ;
	 {
		fputs("Input string : ", stdout ) ;
		if( gets(str) == NULL )
			return(NULL) ;
		return(str) ;
	 }

	 char *ReverseString( char *str )
	 {
		char *p , *q ;
		char temp ;

		p = str ;
		if( *p == '\0')
			return NULL ;
		q = str ;
		while( *q != '\0')
			++q ;
		--q ;
		while( p < q )
		{
			temp = *p ;
			*p = *q ;
			*q = temp ;
			++p ;
			--q ;
		}
		return( str ) ;
	 }
