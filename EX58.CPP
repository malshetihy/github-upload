
	#include<stdio.h>
	#include<stdlib.h>

	#define MAXPATH 64

	typedef enum { FALSE , TRUE } BOOLEAN ;

	int main( void )
	{
		int ch ;
		long wordcnt ;
		char pathname[MAXPATH] ;
		FILE *fp ;
		BOOLEAN wordflag ;

		printf("\nWORD COUNT :\tType a file name : ") ;
		scanf("%s", pathname ) ;
		putchar('\n') ;
		fp = fopen( pathname , "r" ) ;
		if( fp == NULL )
		{
			fprintf( stderr ,"Cannot open %s\n", pathname ) ;
			exit(1) ;
		}
		wordcnt = 0 ;
		wordflag = FALSE ;
		while( ( ch = fgetc( fp ) ) != EOF )
		{
			if( ch == ' ' || ch == '\t' || ch == '\n' || ch == '.'
			 || ch == ',' || ch == '!' || ch == '?' )
				wordflag = FALSE ;
			else if( wordflag == FALSE )
			{
				++wordcnt ;
				wordflag = TRUE ;
			}
		}
		if( ferror(fp) != 0 )
		{
			fprintf( stderr ,"Error reading %s\n", pathname ) ;
			exit(2) ;
		}
		printf("File %s contains %d words.\n", pathname , wordcnt ) ;
		if( fclose(fp) != 0 )
		{
			fprintf( stderr ,"Error closing %s\n", pathname ) ;
			exit(3) ;
		}
		return(0) ;
	}
