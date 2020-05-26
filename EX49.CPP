
	/* XSORT : sort an array of numbers by using a simple exchange sort */

	#include<stdio.h>
	#include<conio.h>

	#define SHOWME

	void ExchangeSort( int * , unsigned int ) ;
	int main(void)
	{
		int n , size ;
		int *ptr ;
		static int numbers[] = { 82 , 30 , 12 , -6 , 1 , 7 , 23 , -5 , -1 } ;

		size = sizeof numbers / sizeof( int ) ;
		puts("Array before sorting : ") ;
		for( n = size , ptr = numbers ; n-- > 0 ; ++ptr )
			printf("%5d", *ptr ) ;
		putchar('\n') ;
		putchar('\n') ;
		getch() ;
		ExchangeSort( numbers , size ) ;
		puts("Array after sorting : ") ;
		for( n = size , ptr = numbers ; n-- > 0 ; ++ptr )
			printf("%5d" , *ptr ) ;
		putchar('\n') ;
		getch() ;
		return (0) ;
	}

	void ExchangeSort( int *array , unsigned int nelem )
	{
		int *p , *q ;
		int temp ;

		#if defined(SHOWME)
			int loopcount = 0 ;
			int *ptr ;
		#endif

		for( p = array ; p < array + nelem - 1 ; ++p )
		{
			#if defined(SHOWME)
				printf("Loop %d : \n", ++loopcount) ;
			#endif

			for( q = p + 1 ; q < array + nelem ; ++q )
			{
				if( *p > *q )
				{
					temp = *p ;
					*p = *q ;
					*q = temp ;
				}
				#if defined(SHOWME)
					for( ptr = array ; ptr < array + nelem ; ++ptr )
						printf("%5d", *ptr ) ;
					putchar('\n') ;
				#endif
			}
			getch() ;
		}
	}
