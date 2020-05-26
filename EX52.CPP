
	/* F A R M E R : The farmer crossing a river problem */

	#include<stdio.h>
	#include<stdlib.h>
	#include<conio.h>
	#include<ctype.h>

	#define BEL 7
	#define K_ESC 27
	#define NBYTES 80

	struct player_st
	{
		unsigned farmer : 1 ;
		unsigned fox : 1 ;
		unsigned hen : 1 ;
		unsigned corn : 1 ;
	} ;

	struct player_st Player ;

	void Instruct( void ) ;
	int GetMove( int ) ;
	void DoMove( int ) ;
	int CheckMap( int ) ;
	int MadeIt( void ) ;
	void YouLose( void ) ;
	void PrintMap( void ) ;

	int main()
	{
		int bank , move , trips ;
		char reply[NBYTES] ;

		Player.farmer = Player.fox = Player.hen = Player.corn = 0 ;
		bank = Player.farmer ;
		trips = 0 ;
		clrscr() ;
		printf("\n\n\t\t\t========= F A R M E R =========") ;
		printf("\n\n\t\t\tPress Esc at any time to quit.\n\n") ;
		printf("\n\n\tDo you need instructions (Y/N) : ") ;
		gets(reply) ;
		if( reply[0] == 'y' || reply[0] == 'Y' || reply[0] == '\0' )
			Instruct() ;
		PrintMap() ;
		while(1)
		{
			move = GetMove(bank) ;
			DoMove(move) ;
			++trips ;
			bank = Player.farmer ;
			PrintMap() ;
			if( CheckMap(bank) )
				YouLose() ;
			if( MadeIt() )
				break ;
		}
		printf("\n\n\tCongratulation. You made it safely !\n") ;
		printf("\n\tThe number of trips was %d\n", trips ) ;
		getch() ;
		return (0) ;
	}

	/*************************************************************/

	void Instruct()
	{
		puts("\n\tA farmer  must  cross  a  river  in  a  boat. ") ;
		puts("\tHe has a fox , a hen , and a bushel of  corn. ") ;
		puts("\tThe farmer can only take one thing at a  time ") ;
		puts("\tin the boat. The fox can't be left alone with ") ;
		puts("\tthe hen because he'll eat it.Likewise the hen ") ;
		puts("\tcan't be left with the corn. ") ;
		puts("\tWhen the farmer is present , the animals well ") ;
		puts("\tbehaved. You are the farmer. Attempt  to  get ") ;
		puts("\tfrom the west bank of the river to  the  east ") ;
		puts("\tbank with your baggage in  tow  while  making ") ;
		puts("\tthe least number of trips. ") ;
		getch() ;
	}

	/*************************************************************/

	void DoMove(move)
	int move ;
	{
		switch(move)
		{
			case 'A' :
				break ;
			case 'F' :
				Player.fox = !Player.fox ;
				break ;
			case 'H' :
				Player.hen = !Player.hen ;
				break ;
			case 'C' :
				Player.corn = !Player.corn ;
				break ;
		}
		Player.farmer = !Player.farmer ;
	}

	/*************************************************************/

	int GetMove(bank)
	int bank ;
	{
		int key ;

		printf("\n\tCommand : A(lone) ") ;
		if( Player.fox == bank )	printf("F(ox) ") ;
		if( Player.hen == bank )	printf("H(en) ") ;
		if( Player.corn == bank )	printf("C(orn) ") ;
		printf(": ") ;
		while(1)
		{
			key = toupper( getch() ) ;
			if( key == 'A')					break ;
			else if( key == 'F' && Player.fox == bank )	break ;
			else if( key == 'H' && Player.hen == bank )	break ;
			else if( key == 'C' && Player.corn == bank )	break ;
			else if( key == K_ESC )
			{
				putchar('\n') ;
				exit(0) ;
			}
			else
				putchar(BEL) ;
		}
		putchar('\n') ;
		return(key) ;
	}

	/*************************************************************/

	int CheckMap(bank)
	int bank ;
	{
		int status = 0 ;

		if( Player.fox != bank && Player.hen != bank )	status = 1 ;
		if( Player.hen != bank && Player.corn != bank )	status = 1 ;
		return( status ) ;
	}

	/*************************************************************/

	MadeIt()
	{
		int status ;

		status = 0 ;
		if( Player.farmer && Player.fox && Player.hen && Player.corn )
			status = 1 ;
		return( status ) ;
	}

	/*************************************************************/

	void YouLose()
	{
		printf("\n\tSorry , you lose. ") ;
		if( Player.fox == Player.hen )
		{
			printf("\n\tThe fox ate the hen.\n") ;
			getch() ;
		}
		else if( Player.hen == Player.corn )
		{
			printf("\n\tThe hen ate the corn.\n") ;
			getch() ;
		}
		exit(1) ;
	}

	/*************************************************************/

	void PrintMap()
	{
		char wc , ec ;

		clrscr() ;
		wc = ec = ' ' ;
		if( Player.farmer )	ec = 'F' ;
		else    		wc = 'F' ;
		printf("\n\t\t\t%c ^^^^^^^^^^^^^^^^^^^^ %c\n", wc , ec ) ;
		wc = ec = ' ' ;
		if( Player.fox)		ec = 'f' ;
		else			wc = 'f' ;
		printf("\n\t\t\t%c ^^^^^^^^^^^^^^^^^^^^ %c\n", wc , ec ) ;
		wc = ec = ' ' ;
		if( Player.hen )	ec = 'h' ;
		else			wc = 'h' ;
		printf("\n\t\t\t%c ^^^^^^^^^^^^^^^^^^^^ %c\n", wc , ec ) ;
		wc = ec = ' ' ;
		if( Player.corn )	ec = 'c' ;
		else			wc = 'c' ;
		printf("\n\t\t\t%c ^^^^^^^^^^^^^^^^^^^^ %c\n", wc , ec ) ;
	}

	/*************************************************************/

