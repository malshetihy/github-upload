/********************************EXAMPLE 28*********************************/

//PROGRAM TO PLAY 	     --->TIC-TAC-TOE<---


	#include<stdio.h>

	char sqr[3][3] ; /* global array used as board */

	main()
	{
		char again ;
		int rowcntr , colcntr , movecntr ;

		while( 1 == 1 )           //repeat as long as the user wants
		{
			initliz() ;       //make the squares equal blank
			sqr[1][1] = 'X' ; //put X in the center square
			dispbord() ;
			getmove() ;      //get a valid move
			makemove() ;     //make some move
			movecntr = 3 ;   //three moves made
			while( 1 == 1 )
			{
				dispbord() ;
				getmove() ;
				movecntr = movecntr + 1 ;
				if( checkwin( 'O' ) == 1 ) //if opponent won , end the game
				{
					dispbord() ;
					printf("Congratulation !! You win .\n");
					break ;
				}
				else   //if you win , end the game
				{
					if( canwin( 'X' ) == 1 )
					{
						dispbord() ;
						printf(" HA HA .. I WIN .\n");
						break ;
					}
					else if( canwin( 'O' ) == 0 ) //if opponent can win , block him
						makemove() ;          //otherwise make some move

				}
				movecntr = movecntr + 1 ;
				if( movecntr == 9 )
				{ //if nine moves without a win , end game : draw
					dispbord() ;
					printf("It's a draw .Good game .\n") ;
					break ;
				}
				else //otherwise , do the loop again
					continue ;
			} // game over
			printf("\nDo you want to play again (Y/N) ? ") ;
			scanf("\n%c",&again) ;
			if( again == 'Y' || again == 'y' ) //if user wants to play again , loop back to begining
				continue ;
			else  //otherwise , end program
				break ;
		}
	}

	/***********************************************************/

	checkwin( ltr)
	char ltr ;
	{
		int ct ;

		if( sqr[0][0] == ltr && sqr[1][1] == ltr && sqr[2][2] == ltr )
			return 1 ; //return 1 ,if all elements of this diagonal have the same letter : there is win
		else if( sqr[0][2] == ltr && sqr [1][1] == ltr && sqr[2][0] == ltr )
			return 1 ; //return 1 ,if all elements of this diagonal have the same letter : there is win
		else
		{
			ct = 0 ;
			while( ct < 3 )
			{
				if( (sqr[ct][0] == ltr && sqr[ct][1] == ltr && sqr[ct][2] == ltr )
				 || (sqr[0][ct] == ltr && sqr[1][ct] == ltr && sqr[2][ct] == ltr ) )
					return 1 ; //return 1 , if all elements of this row or column have the same letter: there is win
				else
					ct = ct + 1 ;
			}
		}
		return 0 ; //otherwise ,return 0
	}

	/***********************************************************/

	initliz() //make all quares equal to blank
	{
		int rowcntr , colcntr ;

		rowcntr = 0 ;
		while( rowcntr < 3 )
		{
			colcntr = 0 ;
			while( colcntr < 3 )
			{
				sqr[rowcntr][colcntr] = ' ' ;
				colcntr = colcntr + 1 ;
			}
			rowcntr = rowcntr + 1 ;
		}
	}

	/************************************************************/

	dispbord()
	{
		printf("\n\n\n\n\n\n\n");
		printf("\t\t\t           COLUMN\n");
		printf("\t\t\t        1     2     3\n\n");
		printf("\t\t\t     ÚÄÄÄÄÄÂÄÄÄÄÄÂÄÄÄÄÄ¿\n");
		printf("\t\t\t   1 ³  %c  ³  %c  ³  %c  ³\n ",sqr[0][0],sqr[0][1],sqr[0][2]);
		printf("\t\t\tR    ÃÄÄÄÄÄÅÄÄÄÄÄÅÄÄÄÄÄ´\n");
		printf("\t\t\tO  2 ³  %c  ³  %c  ³  %c  ³\n",sqr[1][0],sqr[1][1],sqr[1][2]);
		printf("\t\t\tW    ÃÄÄÄÄÄÅÄÄÄÄÄÅÄÄÄÄÄ´\n");
		printf("\t\t\t   3 ³  %c  ³  %c  ³  %c  ³\n",sqr[2][0],sqr[2][1],sqr[2][2]);
		printf("\t\t\t     ÀÄÄÄÄÄÁÄÄÄÄÄÁÄÄÄÄÄÙ\n");
		printf("\n\n\n\n\n\n\n");
	}

	/***********************************************************/

	getmove() //get a valid move
	{
		int rownmbr , colnmbr ;

		while( 1 == 1 ) //get opponent move
		{
			printf("\nWhat row will you put O in ? ");
			printf("\nEnter a number from 1 to 3 > ");
			scanf("%d",&rownmbr);
			printf("\nWhat col will you put O in ? ");
			printf("\nEnter a number from 1 to 3 > ");
			scanf("%d",&colnmbr);
			rownmbr = rownmbr - 1 ;
			colnmbr = colnmbr - 1 ;
			if( rownmbr < 0 || rownmbr > 2 || colnmbr < 0 || colnmbr > 2
				|| sqr[rownmbr][colnmbr] != ' ' )
			{ //if move is invalid ,beep ,redisplay board, and get new move
				printf("%c",7);
				dispbord() ;
				continue ;
			}
			else
			{
				sqr[rownmbr][colnmbr] = 'O' ;
				break ;
			}
		}
	}

	/***********************************************************/

	makemove()
	{       //make some move
		if( sqr[0][0] == ' ' )
			sqr[0][0] = 'X' ;
		else if( sqr[0][2] == ' ' )
			sqr[0][2] = 'X' ;
		else if( sqr[2][0] == ' ' )
			sqr[2][0] = 'X' ;
		else if( sqr[2][2] == ' ' )
			sqr[2][2] = 'X' ;
		else if( sqr[0][1] == ' ' )
			sqr[0][1] = 'X' ;
		else if( sqr[1][0] == ' ' )
			sqr[1][0] = 'X' ;
		else if( sqr[1][2] == ' ' )
			sqr[1][2] = 'X' ;
		else if( sqr[2][1] == ' ' )
			sqr[2][1] = 'X' ;
	}

	/***********************************************************/

	canwin(xoro)
	char xoro ;
	{
		int rowcntr ,colcntr ;

		rowcntr = 0 ;
		while( rowcntr < 3 )
		{  //loop through all squares ,if one is blank, make it X or O temporarily
			colcntr = 0 ;
			while( colcntr < 3 )
			{
				if( sqr[rowcntr][colcntr] == ' ' )
				{
					sqr[rowcntr][colcntr] = xoro ;
					if( checkwin( xoro ) == 0 )   //if no win make it blank again
						sqr[rowcntr][colcntr] = ' ' ;
					else  //if there is a win ,either block O or just leave X
					{
						if( xoro == 'O' )
							sqr[rowcntr][colcntr] = 'X' ;
						return 1 ;  // and return 1 to let main() know a move was made
					}
				}
				colcntr = colcntr + 1 ;
			}
			rowcntr = rowcntr + 1 ;
		}
		return 0 ; //if no move was made , return 0
	}

	/************************************************************/
