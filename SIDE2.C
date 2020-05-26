
	#include<stdio.h>

	int i = 5 ;  /* side effect of global variables */

	int f( void )	{ return ++i ; }
	int g( void )	{ return i *= 10 ; }

	main()
	{
		printf("%d", g() + f() ) ;  /* order of summation will give */
		return 0 ;		    /* different results */
	}
