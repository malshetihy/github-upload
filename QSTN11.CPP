
	#include<stdio.h>
	#include<conio.h>

	main()
	{
		int counter = 0 ;

		for( int i = 33 ; i < 127 ; ++i )
		{
			printf("\n\t%d\t\t%c\t\t%d\t\t%c",
				i , i , 126 + 33 - i , 126 + 33 - i ) ;
			++counter ;
			if( counter % 25 == 0 )
				getch() ;
		}
		getch() ;
	}