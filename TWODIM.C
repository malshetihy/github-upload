
	#include<stdio.h>
	#include<stdlib.h>
	#include<conio.h>

	void *getmemory( int n )
	{
		void *p = malloc( n ) ;
		if( p == NULL )
			puts("Memory problem") , exit(1) ;
		return p ;
	}

	void fillmatrix( double **table , int nrows , int ncolumns )
	{
		int i , j ;
		for( i = 0 ; i < nrows ; i++ )
			for( j = 0 ; j < ncolumns ; j++ )
				table[i][j] = i + 0.01 * j ;
	}

	main()
	{
		int i , j , m , n ; /* m rows , n columns */
		double **matrix ;

		clrscr() ;
		printf("How many rows ? ") ;
		scanf("%d", &m ) ;
		printf("How many columns ? ") ;
		scanf("%d", &n ) ;
		matrix = ( double **) getmemory( m * sizeof( double * ) ) ;
		for( i = 0 ; i < m ; i++ )
			matrix[i] = ( double * ) getmemory( n * sizeof( double ) ) ;
		fillmatrix( matrix , m , n ) ;
		puts("Matrix contents : ") ;
		for( i = 0 ; i < m ; i++ )
		{
			for( j = 0 ; j < n ; j++ )
				printf("%5.2f",matrix[i][j]) ;
			puts(" ") ;
		}
		getch() ;
		return 0 ;
	}
