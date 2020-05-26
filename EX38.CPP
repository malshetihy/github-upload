
	/*		sample password program		*/

	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<ctype.h>

	void password() ;

	main()
	{
		password() ;
		printf("\n\n\tCorrect password .\n\tYou may begin the program . ") ;
			/* more code for main program */
		getch() ;
	}

	void password()
	{
		char userWord[11] ;
		int ltrCntr , tryCntr ;

		tryCntr = 0 ;
		while( 1 == 1 )
		{
			clrscr() ;
			printf("\n\n\tWhat is the password ? ") ;
			scanf("%s", userWord ) ;
			/* capitalize user's entry */
			ltrCntr = 0 ;
			while( userWord[ ltrCntr ] != '\0' )
			{
				userWord[ ltrCntr ] = toupper( userWord[ ltrCntr ] ) ;
				ltrCntr = ltrCntr + 1 ;
			}
			if( strcmp( userWord , "MAHSHEIRAH" ) == 0 )
				break ; /* if entry is right continue with */
			else            /* main program */
			{
				tryCntr = tryCntr + 1 ;
				if( tryCntr == 3 )	exit(0) ;
				/* if three ties are wrong */
			}       /* do not let user in program */
		}
	}
