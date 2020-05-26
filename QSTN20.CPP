
	#include<stdio.h>
	#include<conio.h>
	#include<dos.h>

	main()
	{
		long x , a , b , c ;
		struct time t ;

		b = 3109 ;
		c = 65521 ;
		a = 0.99 * c ;
		gettime(&t) ;
		x = t.ti_sec ;
		x = ( a * x + b ) % c ;
		printf("\nx = %ld", x ) ; /********???????***********/
	}