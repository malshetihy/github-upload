		       /*****************************
			*	Example 28-1        *
			*     TIC - TAC - TOE	    *
			*****************************/

	#include<stdio.h>
	#include<conio.h>

	int checkwin( char ltr ) ;
	void initliz( void ) ;
	void disp( void ) ;
	void dispboard( char ltr , int row , int col ) ;
	void getmove( void ) ;
	void makemove( void ) ;
	int canwin( char x ) ;
	void putx( int nc ) ;

	/* Global variables */
	char sqr[9][9] ; /* Board array in maximum size */
	/* M : size of the board ,
	   N : M - 1 ,
	   S : ( M - 1 ) / 2 ,
	   mc : move counter */
	int M , N , S , mc ;
	int xxr , xxc ;
	/* xrc : number of X's in each row , col ,diagonal, and off diagonal.
	   orc : number of O's in each row , col ,diagonal, and off diagonal*/
	int xrc[20] , orc[20] ;

	main()
	{
		char again ;
		int rc , cc , x , y ;

		clrscr() ;
		gotoxy( 32 , 3 ) ;
		printf("TIC - TAC - TOE") ;
		gotoxy( 26 , 12 ) ;
		printf("Enter the size of the game > ");
		gotoxy( 26 , 13 ) ;
		printf("(odd number between 3 & 9 ) ") ;
		gotoxy( 55 , 12 ) ;
		x = wherex() ; y = wherey() ;
		while( 1 )
		{
			gotoxy( x , y ) ;
			scanf("%d",&M ) ;
			if( ( M == 3 ) || ( M == 5 ) || ( M == 7 ) || ( M == 9 ) )
				break ;
		}
		gotoxy( 1 , y ) ;
		clreol() ;
		gotoxy( 1 , y + 1 ) ;
		clreol() ;
		N = M - 1 ; S = ( M - 1 ) / 2 ;
		while( 1 )
		{
			initliz() ;
			disp() ;
			sqr[S][S] = 'X' ;
			dispboard( 'X' , S , S ) ;
			getmove() ;
			makemove() ;
			mc = 3 ;
			while ( 1 )
			{
				getmove() ;
				++mc ;
				if( checkwin( 'O' ) == 1 )
				{
					gotoxy( 5 , 23 ) ;
					printf("Congratulation !!! you win . \n") ;
					printf("%c",7 );
					break ;
				}
				else if( canwin( 'X' ) == 1 )
				{
					gotoxy( 5 , 23 ) ;
					printf("I win . \n") ;
					printf("%c",7) ;
					break ;
				}
				else if( canwin( 'O' ) == 0 )	makemove() ;
				++mc ;
				if( mc == M * M )
				{
					gotoxy( 5 , 23 ) ;
					printf("It is a draw . Good game . \n") ;
					printf("%c",7 ) ;
					break ;
				}
				else	continue ;
			}
			gotoxy( 5 , 24 ) ;
			printf("Do you want to play again (Y/N) ? ") ;
			again = getch() ;
			if( again == 'Y' || again == 'y' )
			{
				gotoxy( 1 , 24 ) ;
				clreol() ;
				continue ;
			}
			else break ;
		}
	}

	/***********************************************************/

	checkwin( char ltr )
	{
		int ct , cc , ok ;

		ct = 0 ; ok = 1 ;
		while( ct < M )
		{
			if( sqr[ct][ct] != ltr )
			{
				ok = 0 ;
				break ;
			}
			else ++ct ;
		}
		if( ok )	return 1 ;
		else
		{
			ct = 0 ;
			ok = 1 ;
			while( ct < M )
			{
				if( sqr[ct][N-ct] != ltr )
				{
					ok = 0 ;
					break ;
				}
				else ++ct ;
			}
			if( ok ) 	return 1 ;
			else
			{
				ct = 0 ;
				while( ct < M )
				{
					ok = 1 ;
					cc = 0 ;
					while( cc < M )
					{
						if( sqr[ct][cc] != ltr )
						{
							ok = 0 ;
							break ;
						}
						else ++cc ;
					}
					if( ok )	return 1 ;
					else ++ct ;
				}
			}
		}
		cc = 0 ;
		while( cc < M )
		{
			ct = 0 ;
			ok = 1 ;
			while( ct < M )
			{
				if( sqr[ct][cc] != ltr )
				{
					ok = 0 ;
					break ;
				}
				else ++ct ;
			}
			if( ok )	return 1 ;
			else ++cc ;
		}
		return 0 ;
	}

	/************************************************************/

	void initliz()
	{
		int rc , cc , i ;

		rc = 0 ;
		while( rc < M )
		{
			cc = 0 ;
			while( cc < M )
			{
				sqr[rc][cc] = ' ' ;
				++cc ;
			}
			++rc ;
		}
	       for( i = 0 ; i < 20 ; i++ )
	       {
			orc[i] = 0 ;
			xrc[i] = 0 ;
	       }
	}

	/************************************************************/

	void disp()
	{
		int rc , cc , sp , ln ;

		ln = ( 25 - M * 2 ) / 2 ;
		sp = ( 80 - M * 6 ) / 2 ;
		rc = 0 ;
		gotoxy( sp , ln ) ;
		while( rc < M )
		{
			printf("   %d  ", rc+1 ) ;
			++rc ;
		}
		++ln ;
		gotoxy( sp , ln ) ;
		printf("Ú") ;
		rc = 0 ;
		while( rc < M )
		{
			printf("ÄÄÄÄÄ") ;
			if( rc < N )	printf("Â") ;
			else		printf("¿") ;
			++rc ;
		}
		cc = 0 ;
		while( cc < M )
		{
			++ln ;
			gotoxy( sp - 4 , ln ) ;
			rc = 0 ;
			printf("%d", cc + 1 ) ;
			while( rc < M )
			{
				printf("   ³  ") ;
				++rc ;
			}
			printf("   ³") ;
			if( cc < N )
			{
				++ln ;
				gotoxy( sp , ln ) ;
				printf("Ã") ;
				rc = 0 ;
				while( rc < M )
				{
					printf("ÄÄÄÄÄ") ;
					if( rc < N )	printf("Å") ;
					else		printf("´") ;
					++rc ;
				}
			}
			else
			{
				++ln ;
				gotoxy( sp , ln ) ;
				printf("À") ;
				rc = 0 ;
				while( rc < M )
				{
					printf("ÄÄÄÄÄ") ;
					if( rc < N )	printf("Á") ;
					else		printf("Ù\n") ;
					++rc ;
				}
			}
			++cc ;
		}
	}

	/************************************************************/

	void dispboard( char ltr , int row , int col )
	{
		int ln , sp ;

		ln = ( 25 - M * 2 ) / 2 ;
		sp = ( 80 - M * 6 ) / 2 ;
		gotoxy( sp + 3 + col * 6 , ln + 2 + row * 2 ) ;
		printf("%c", ltr ) ;
		if( ltr == 'O' )
		{
			orc[row] += 1 ; // row elements
			orc[ M + col ] += 1 ; // column elements
			if( row == col )	orc[ M + N + 1 ] += 1 ; // diagonal elements
			if( N - row == col )	orc[ M + N + 2 ] += 2 ; // off diagonal
		}
		else
		{
			xrc[row] += 1 ;
			xrc[ M + col ] += 1 ;
			if( row == col )	xrc[ M + N + 1 ] += 1 ;
			if( N - row == col ) 	xrc[ M + N + 2 ] += 1 ;
		}
	}

	/************************************************************/

	void getmove()   // get move from the player
	{
		int rn , cn , x ;

		gotoxy( 1 , 23 ) ;
		printf("What row will you put O in ? \n") ;
		printf("What col will you put O in ? \nEnter a number from 1 to %d > ", M ) ;
		x = wherex() ;
		while( 1 )
		{
			gotoxy( x , 23 ) ;
			scanf("%d", &rn ) ;
			gotoxy( x , 24 ) ;
			scanf("%d", &cn ) ;
			--rn ;
			--cn ;
			if( rn < 0 || rn > N || cn < 0 || cn > N
				   || sqr[rn][cn] != ' ' )
			{
				printf("%c", 7 ) ;
				continue ;
			}
			else
			{
				sqr[rn][cn] = 'O' ;
				break ;
			}
		}
		gotoxy( 1 , 23 ) ;
		clreol() ;
		gotoxy( 1 , 24 ) ;
		clreol() ;
		gotoxy( 1 , 25 ) ;
		clreol() ;
		dispboard( 'O' , rn , cn ) ;
	}

	/************************************************************/

	void putx( int nc )
	{
		int rc ;

		if( nc < M )
		{
			rc = 0 ;
			while( rc < M )
			{
				if( sqr[nc][rc] == ' ' )
				{
					sqr[nc][rc] = 'X' ;
					xxr = nc ;
					xxc = rc ;
					break ;
				}
				else ++ rc ;
			}
		}
		else if( nc - M < M )
		{
			rc = 0 ;
			while( rc < M )
			{
				if( sqr[rc][ nc - M ] == ' ' )
				{
					sqr[rc][ nc - M ] = 'X' ;
					xxr = rc ;
					xxc = nc - M ;
					break ;
				}
				else ++rc ;
			}
		}
		else if( nc == M + N + 1 )
		{
			rc = 0 ;
			while( rc < M )
			{
				if( sqr[rc][rc] == ' ' )
				{
					sqr[rc][rc] = 'X' ;
					xxr = rc ;
					xxc = rc ;
					break ;
				}
				else ++rc ;
			}
		}
		else
		{
			rc = 0 ;
			while ( rc < M )
			{
				if( sqr[ N - rc ][rc] == ' ' )
				{
					sqr[ N - rc ][rc] = 'X' ;
					xxr = N - rc ;
					xxc = rc ;
					break ;
				}
				else ++rc ;
			}
		}
	}

	/************************************************************/

	void makemove()
	{
		int rc , cc , ok , nn , nc ;

		nn = 0 ;
		nc = 0 ;
		rc = 0 ;
		while( rc < 2 * M + 2 )
		{
			if( orc[rc] > nn && xrc[rc] == 0 )
			{
				nn = orc[rc] ;
				nc = rc ;
			}
			else ++rc ;
		}
		if( nn >= M - 2 )
		{
			putx(nc) ;
			dispboard( 'X' , xxr , xxc ) ;
		}
		else
		{
			nn = -1 ;
			nc = 0 ;
			rc = 0 ;
			ok = 0 ;
			while( rc < 2 * M + 2 )
			{
				if( xrc[rc] > nn && orc[rc] == 0 )
				{
					nn = xrc[rc] ;
					nc = rc ;
					ok = 1 ;
				}
				else ++rc ;
			}
			if( ok )
			{
				putx(nc) ;
				dispboard( 'X' , xxr , xxc ) ;
			}
			else
			{
				nn = -1 ;
				nc = 0 ;
				rc = 0 ;
				while( rc < 2 * M + 2 )
				{
					if( orc[rc] > nn && xrc[rc] == 0 )
					{
						nn = orc[rc] ;
						nc = rc ;
					}
					else ++rc ;
					if( nn > 0 )
					{
						putx(nc) ;
						dispboard( 'X' , xxr , xxc ) ;
					}
					else 	mc = M * M - 1 ;
				}
			}
		}
	}

	/************************************************************/

	int canwin( char x )
	{
		int rc , cc ;

		rc = 0 ;
		while( rc < M )
		{
			cc = 0 ;
			while( cc < M )
			{
				if( sqr[rc][cc] == ' ' )
				{
					sqr[rc][cc] = x ;
					if( checkwin(x) == 0 )	sqr[rc][cc] = ' ' ;
					else
					{
						if( x == 'O')	sqr[rc][cc] = 'X' ;
						dispboard( 'X' , rc , cc ) ;
						return 1 ;
					}
				}
				++cc ;
			}
			++rc ;
		}
		return 0 ;
	}

	/************************************************************/



