
	#include<stdio.h>
	#include<conio.h>
	#include<string.h>
	#include<ctype.h>

	#define MAXWORDS 10
			/* English - French Flashcard */
	struct Sflashcard /* struct to hold flashcard data */
	{
		char English[16] ;
		char French[16] ;
		char Spchprt ;
		int Errorflg ;
	} EnFr[ MAXWORDS ] ;

	int Retstflg ;

	void init() ;
	testword( char[] , char[] , char ) ;

	main()		/* ..........main menu.............*/
	{
		char Ch[2] ;
		char Toask[8] , Toanswer[8] , Whchwrds ;

		init() ;
		Retstflg = 0 ;
		while( 1 == 1 ) /* display the menu */
		{
			clrscr() ;
			printf("\n\t\t\t    Language Flashcards\n\n") ;
			printf("\n\t\t\t1 - English to French , nouns ") ;
			printf("\n\t\t\t2 - English to French , verbs ") ;
			printf("\n\t\t\t3 - English to French , others ") ;
			printf("\n\t\t\t4 - English to French , all ") ;
			printf("\n\t\t\t5 - French to English , nouns ") ;
			printf("\n\t\t\t6 - French to English , verbs ") ;
			printf("\n\t\t\t7 - French to English , others ") ;
			printf("\n\t\t\t8 - French to English , all ") ;
			if( Retstflg == 1 )
				printf("\n\t\t\t9 - Errors from last test ") ;
			printf("\n\t\t\t0 - Quit ") ;
			if( Retstflg != 1 )
				printf("\n\n") ;
				/* get user chice */
			printf("\n\n\t\tWhat is your chice ? > ") ;
			gets( Ch ) ;
				/* set the parameters */
			switch( Ch[0] )
			{
				case '1' :
				case '2' :
				case '3' :
				case '4' :
					strcpy( Toask , "English" ) ;
					strcpy( Toanswer , "French" ) ;
					break ;
				case '5' :
				case '6' :
				case '7' :
				case '8' :
					strcpy( Toask , "French" ) ;
					strcpy( Toanswer , "English" ) ;
					break ;
			}
			if( Ch[0] == '1' || Ch[0] == '5' )
				Whchwrds = 'N' ;
			else if( Ch[0] == '2' || Ch[0] == '6' )
				Whchwrds = 'V' ;
			else if( Ch[0] == '3' || Ch[0] == '7' )
				Whchwrds = 'O' ;
			else if( Ch[0] == '4' || Ch[0] == '8' )
				Whchwrds = 'A' ;
			else if( Ch[0] == '9' && Retstflg == 1 )
				Whchwrds = 'R' ;
			else if( Ch[0] == '0' )
				break ;
			else
			{
				putchar(7) ;
				continue ;
			}
			testword( Toask , Toanswer , Whchwrds ) ;
		}
	}

	/*************************************************************/

	void init()
	{
		int counter ;

		counter = 0 ;
		while( counter < MAXWORDS )
		{
			EnFr[ counter ].Errorflg = 0 ;
			counter =  counter + 1 ;
		}
		strcpy( EnFr[0].English , "TO SPEAK" ) ;
		strcpy( EnFr[0].French , "PARLER" ) ;
		EnFr[0].Spchprt = 'V' ;
		strcpy( EnFr[1].English , "TO SELL" ) ;
		strcpy( EnFr[1].French , "VENDRE" ) ;
		EnFr[1].Spchprt = 'V' ;
		strcpy( EnFr[2].English , "TO GO" ) ;
		strcpy( EnFr[2].French , "ALLER" ) ;
		EnFr[2].Spchprt = 'V' ;
		strcpy( EnFr[3].English , "THE BOY" ) ;
		strcpy( EnFr[3].French , "LE GARCON" ) ;
		EnFr[3].Spchprt = 'N' ;
		strcpy( EnFr[4].English , "THE PEN" ) ;
		strcpy( EnFr[4].French , "LA PLUME" ) ;
		EnFr[4].Spchprt = 'N' ;
		strcpy( EnFr[5].English , "THE GIRL" ) ;
		strcpy( EnFr[5].French , "LA FILLE" ) ;
		EnFr[5].Spchprt = 'N' ;
		strcpy( EnFr[6].English , "IN" ) ;
		strcpy( EnFr[6].French , "DANS" ) ;
		EnFr[6].Spchprt = 'O' ;
		strcpy( EnFr[7].English , "ON" ) ;
		strcpy( EnFr[7].French , "SUR" ) ;
		EnFr[7].Spchprt = 'O' ;
		strcpy( EnFr[8].English , "DURING" ) ;
		strcpy( EnFr[8].French , "PENDANT" ) ;
		EnFr[8].Spchprt = 'O' ;
		strcpy( EnFr[9].English , "BEFORE" ) ;
		strcpy( EnFr[9].French , "AVANT" ) ;
		EnFr[9].Spchprt = 'V' ;
	}

	/************************************************************/

	testword( Lang1 , Lang2 , Pos )	/* test user */
	char Pos ;		/* using parameters set in main */
	char Lang1[] , Lang2[] ;
	{
		int Wrdcntr , Ltrcntr ;
		char Answer[16] ;
		char Yorn[2] ;

		Wrdcntr = 0 ;
		if( Pos != 'R' )	/* if not a restart make error flag 0 */
			while( Wrdcntr < MAXWORDS )
			{
				EnFr[ Wrdcntr ].Errorflg = 0 ;
				Wrdcntr = Wrdcntr + 1 ;
			}
		Wrdcntr = 0 ;	/* skip those that are wrong part of speach */
		while( Wrdcntr < MAXWORDS )
		{
			if( Pos != 'A' && Pos != 'R'
				&& Pos !=EnFr[ Wrdcntr ].Spchprt )
			{
				Wrdcntr = Wrdcntr + 1 ;
				continue ;
			}
			if( Pos == 'R' && EnFr[ Wrdcntr ].Errorflg != 1 )
			{
				Wrdcntr = Wrdcntr + 1 ;
				continue ;
			}
			printf("\n\n\n\n\n\n\n") ;
			printf("\t\t    Translation from %s to %s", Lang1 , Lang2 ) ;
			printf("\n\n\t\t\t    test of ") ; /* display screen */
			switch( Pos )
			{
				case 'N' :
					printf("nouns") ;
					break ;
				case 'V' :
					printf("verbs") ;
					break ;
				case 'O' :
					p                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                trcntr ] ) ;
					Ltrcntr = Ltrcntr + 1 ;
				}
				if( strcmp( Answer , EnFr[ Wrdcntr ].English ) == 0 )
				{
					printf("\n\nCongratulation , That is right . ") ;
					Retstflg = 0 ;
				}
				else
				{
					EnFr[ Wrdcntr ].Errorflg = 1 ;
					Retstflg = 1 ;
					printf("\n\nThe correct answer is %s .",EnFr[ Wrdcntr ].English ) ;
				}
			}
			else	/* English - French */
			{
				printf("\n\n\n\n\n\n\n\n\n") ;
				printf("\t\t\t\t%s", EnFr[ Wrdcntr ].English ) ;
				printf("\n\n\n\n\n\n\n\n") ;
				printf("What is the French translation > ") ;
				gets( Answer ) ;	/* get user's answer */
				Ltrcntr = 0 ;		/* and capitalize it */
				while( Answer[ Ltrcntr ] != '\0' )
				{
					Answer[ Ltrcntr ] = toupper( Answer[ Ltrcntr ] ) ;
					Ltrcntr = Ltrcntr + 1 ;
				}
				if( strcmp( Answer , EnFr[ Wrdcntr ].French ) == 0 )
				{
					printf("\n\nCongratulation , That is right .") ;
					Retstflg = 0 ;
				}
				else
				{
					EnFr[ Wrdcntr ].Errorflg = 1 ;
					Retstflg = 1 ;
					printf("\n\nThe correct answer is %s",EnFr[ Wrdcntr ].French ) ;
				}
			}
			printf("\nDo you want to try another (Y/N) > ") ;
			gets( Yorn ) ;
			if( toupper( Yorn[0] ) == 'N' )
				return  0 ;
			Wrdcntr = Wrdcntr + 1 ;
		}
	}

	/*************************************************************/


