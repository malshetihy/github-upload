
	#include<stdio.h>
	#include<stdlib.h>
	#include<conio.h>
	#include<alloc.h>

	#define ESCAPE 0x1b
	#define ENTER 0xd
	#define HOME 71
	#define END 79
	#define RIGHT 77
	#define LEFT 75

	void main(void)
	{
		char *pStart, *pLast, *pCurrent;
		char ch ;
		int Row = 7, Col = 4, Quit = 0, MaxNum ;

		clrscr();
		gotoxy(26,3);
		textattr(0x1B);
		cprintf("   L I N E   E D I T O R   ");
		gotoxy(4,24);
		cprintf("   Enter   Esc   ->   <-   Home   End  ");
		gotoxy(4,5);
		do{
			cprintf("   Enter Number of chars (Max.72) > ");
			cscanf("%d",&MaxNum);
			getch();//flushall() ;
		}while(MaxNum<0) ;
		pStart = pLast = pCurrent = (char *)malloc(MaxNum+1);
		if(!pStart)
		{
			cprintf("   Not enough memory to allocate..!   ");
			exit(1);
		}
		gotoxy(Col,Row);
		do
		{
			ch = getch();
			switch(ch)
			{
				case ENTER:
				{
					*pCurrent = NULL;
					Quit = 1;
					break;
				}//end of case enter
				case ESCAPE:
				{
					*pStart = NULL;
					Quit = 1;
					break;
				}//end of case escape
				case NULL:
				{
					ch = getch();
					switch(ch)
					{
						case HOME :
						{
							Col = 4;
							gotoxy(Col,Row);
							pCurrent = pStart;
							break;
						}//end of case home
						case END :
						{
							Col += pLast - pCurrent;
							gotoxy(Col,Row);
							pCurrent = pLast;
							break;
						}//end of case END
						case RIGHT :
						{
							if(Col<(pLast-pStart+3))
							{
								Col++;
								gotoxy(Col,Row);
								pCurrent++;
							}//end of if
							break;
						}//end of case right
						case LEFT :
						{
							if(Col>4)
							{
								Col--;
								gotoxy(Col,Row);
								pCurrent--;
							}//end of if
							break;
						}//end of case left
					}//end of second switch
					break;
				}//end of case null
				default:
				{
					if (Col-4<MaxNum)
					{
						gotoxy(Col,Row);
						cprintf("%c",ch);
						Col++;
						*pCurrent=ch;
						if (pCurrent==pLast)   pLast++;
						pCurrent++;
					}//end of if
				}  //end default
			}//end of switch
		}while (!Quit);
	}//end main
