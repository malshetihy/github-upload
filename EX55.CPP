
	#include<stdio.h>

	#define MAXPATH 64
	#define MAXLINE 256

	int main(void)
	{
		int ch ;
		FILE *fp ;
		char pathname[MAXPATH] ;
		char line[MAXLINE] ;

		printf("File name : ") ;
		gets( pathname ) ;
		if( *pathname == '\0' )
		return(0) ;
		fp = fopen( pathname , "r" ) ;
		while( fgets( line , MAXLINE , fp ) != NULL )
			fputs( line , stdout ) ;
		fclose( fp ) ;
		return(0) ;
	}
