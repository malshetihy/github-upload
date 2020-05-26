
	#include<stdio.h>
	#include<conio.h>
	#include<string.h>

	main()
	{
		char name[20] ;

		clrscr() ;
		strcpy( name , "Ahmed Ali") ;
		printf("\n\n\tThe second letter of %s is %c .", name , name[1] ) ;
		getch() ;
	}