
	#include<stdio.h>
	#include<conio.h>
	#include<string.h>

	main()
	{
		char name[21] ;
		int cntr ;

		clrscr() ;
		cntr = 0 ;
		strcpy( name , "Ahmed Ali") ;
		while( name[cntr] != '\0' )
		{
			printf("\nLetter %d of %s is %c .", cntr + 1 , name ,
				name[cntr] ) ;
			cntr = cntr + 1 ;
		}
		getch() ;
	}
