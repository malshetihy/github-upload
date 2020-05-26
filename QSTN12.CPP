
	#include<stdio.h>
	#include<string.h>

	int super_sum( char *s1 , char *s2 )
	{
	    int sum = 0 ;

	    for( int i = 0 ; i < strlen(s1) || i < strlen(s2)  ; ++i )
	    {
		if( i < strlen(s1) )
			sum += s1[i] ;
		if( i < strlen(s2) )
			sum += s2[i] ;
	    }
	    return sum ;
	}

	main()
	{
		char *str1 , *str2 ;
		int sum = 0 ;

		str1 = "Aha" ; str2 = "Ada" ;
		sum = super_sum( str1 , str2 ) ;
		printf("\n\tThe sum of %s and %s = %d", str1 , str2 , sum ) ;

		str1 = "Oh!" ; str2 = "C!" ;
		sum = super_sum( str1 , str2 ) ;
		printf("\n\tThe sum of %s and %s = %d", str1 , str2 , sum ) ;

		str1 = "tumty-tum" ; str2 = "Tumty-tum-toes" ;
		sum = super_sum( str1 , str2 ) ;
		printf("\n\tThe sum of %s and %s = %d", str1 , str2 , sum ) ;
	}
