
	#include<stdio.h>

	#define MAXPATH 64

	int main(void)
	{
		int ch ;
		FILE *fp ;
		char pathname[MAXPATH] ;

		printf("File name : ") ;
		gets( pathname ) ;
		if( *pathname == '\0' )
			return(0) ;
		fp = fopen( pathname , "w" ) ;
		while( ( ch = getchar() ) != '\n' )
			fputc( ch , fp ) ;
		fputc( '\n' , fp ) ;
		fclose(fp) ;
		return(0) ;
	}
