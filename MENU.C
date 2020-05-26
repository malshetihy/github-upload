
	#include<stdio.h>
	#include<conio.h>

	#define		UP		0x48
	#define		DOWN	0x50
	#define		HOME	71
	#define		END     79
	#define		ENTER	0xD
	#define		ESC		0x1B

	struct Employee
	{
		int Code, Age ;
		char Name[35], Address[67];
		int Salary, OverTime, Deduct ;
	};

	void PrintMenu(int) ;
	NewRec(struct Employee *);
	DisplayRec(struct Employee *) ;

	void main(void)
	{
		char ch;
		int quit = 0,Sel = 1, RecNum;
		struct Employee Emp[10];

		do{
			PrintMenu(Sel) ;
			ch = getch() ;
			switch(ch)
			{
				case NULL :
					ch = getch();
					switch(ch)
					{
						case UP :
							--Sel ;
							if(Sel<1)
								Sel = 3 ;
							PrintMenu(Sel);
							break ;

						case DOWN :
							++Sel ;
							if(Sel > 3)
								Sel = 1 ;
							PrintMenu(Sel);
							break ;

						case HOME :
							Sel = 1 ;
							PrintMenu(Sel);
							break ;

						case END :
							Sel = 3 ;
							PrintMenu(Sel);
							break ;
					}
					break ;

				case ENTER :
					switch(Sel)
					{
						case 1 :
							clrscr() ;
							gotoxy(7,8);
							printf("Enter Record No. : ");
							scanf("%d",&RecNum);
							if(RecNum)
								NewRec(&Emp[RecNum]) ;
							break ;

						case 2 :
							clrscr() ;
							gotoxy(7,8);
							printf("Enter Record No. : ");
							scanf("%d",&RecNum);
							if(RecNum)
								DisplayRec(&Emp[RecNum]) ;
							break ;

						case 3 :
							quit = 1 ;
							break ;
					}
					break ;

				case ESC :
					quit = 1 ;
					break ;

			}
		}while(!quit);
	}

	void PrintMenu(int Sel)
	{
		clrscr() ;
		textattr(0x1B);
		if(Sel == 1)
			textattr(0x3E);
		gotoxy(30,6); cprintf("     1.NEW......     ");
		textattr(0x1B);
		if(Sel == 2)
			textattr(0x3E);
		gotoxy(30,8); cprintf("     2.DISPLAY..     ");
		textattr(0x1B);
		if(Sel == 3)
			textattr(0x3E);
		gotoxy(30,10); cprintf("     3.EXIT.....     ");
		textattr(0x07);
	}

	NewRec(struct Employee *pEmp)
	{
		gotoxy(4,10);printf("   Code :  ");
		gotoxy(4,12);printf("   Name :  ");
		gotoxy(60,12);printf("   Age :  ");
		gotoxy(4,14);printf("   Address :  ");
		gotoxy(4,16);printf("   Salary :  ");
		gotoxy(32,16);printf("   OverTime :  ");
		gotoxy(60,16);printf("   Deduct :  ");

		gotoxy(14,10);scanf("%d",&pEmp->Code);flushall();
		gotoxy(14,12);gets(pEmp->Name);
		gotoxy(69,12);scanf("%d",&pEmp->Age);flushall();
		gotoxy(17,14);gets(pEmp->Address);
		gotoxy(16,16);scanf("%d",&pEmp->Salary);
		gotoxy(46,16);scanf("%d",&pEmp->OverTime);
		gotoxy(72,16);scanf("%d",&pEmp->Deduct);
	}

	DisplayRec(struct Employee *pEmp)
	{
		gotoxy(4,10);printf("   Code : %d",pEmp->Code);
		gotoxy(4,12);printf("   Name :  %s",pEmp->Name);
		gotoxy(60,12);printf("   Age :  %d",pEmp->Age);
		gotoxy(4,14);printf("   Address :  %s",pEmp->Address);
		gotoxy(4,16);printf("   Salary :  %d",pEmp->Salary);
		gotoxy(32,16);printf("   OverTime :  %d",pEmp->OverTime);
		gotoxy(60,16);printf("   Deduct :  %d",pEmp->Deduct);
		getch() ;
	}
