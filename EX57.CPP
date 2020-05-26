
	#include<stdio.h>
	#include<stdlib.h>

	#define MAXPATH 64

	int main(void)
	{
		int ch ;
		long charcnt ;
		FILE *fp ;
		char pathname[MAXPATH] ;

		printf("File name : ") ;
		scanf("%s", pathname ) ;
		putchar('\n') ;
		fp = fopen( pathname , "r" ) ;
		if( fp == NULL )
		{
			fprintf( stderr , "Cannot open %s \n" , pathname ) ;
			exit(1) ;
		}
		charcnt = 0 ;
		while( ( ch = fgetc( fp ) ) != EOF )
			++charcnt ;
		if( ferror( fp ) != 0 )
		{
			fprintf( stderr , "Error reading %s \n" , pathname ) ;
			exit(2) ;
		}
		printf("File %s contains %d characters.\n" , pathname , charcnt ) ;
		if( fclose(fp) != 0 )
		{
			fprintf( stderr ,"Error closing %s \n", pathname ) ;
			exit(3) ;
		}
		return(0) ;
	}



