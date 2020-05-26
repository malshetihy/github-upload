
	#include<stdio.h>
	#include<conio.h>
	#include<alloc.h>
	#include<stdlib.h>

	#define		UP		0x48
	#define		DOWN	0x50
	#define		HOME	0x47
	#define		END		0x4F
	#define		ENTER	0xD
	#define		ESC		0x1B

	struct Employee
	{
		int Code, Age ;
		char Name[35], Address[67];
		int Salary, OverTime, Deduct ;
		struct Employee *pPrev, *pNext ;
	};

	struct Employee *pHead, *pTail ;//Global Variables

	void PrintMenu(int) ;
	void NewRec(void);
	void DisplayRec(void) ;
	void DeleteRec(void) ;
	void AddToList(struct Employee *);
	struct Employee *SearchList(int);
	void DeleteList(struct Employee *);
	void SaveList(void);
	void LoadList(void) ;
	void FreeList(void);

	int main(void)
	{
		char ch;
		int quit = 0,Sel = 1;

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
								Sel = 6 ;
							PrintMenu(Sel);
							break ;

						case DOWN :
							++Sel ;
							if(Sel > 6)
								Sel = 1 ;
							PrintMenu(Sel);
							break ;

						case HOME :
							Sel = 1 ;
							PrintMenu(Sel);
							break ;

						case END :
							Sel = 6 ;
							PrintMenu(Sel);
							break ;
					}
					break ;

				case ENTER :
					switch(Sel)
					{
						case 1 :
							NewRec() ;
							break ;

						case 2 :
							DisplayRec() ;
							break ;

						case 3 :
							DeleteRec();
							break ;

						case 4 :
							SaveList() ;
							break ;

						case 5 :
							LoadList() ;
							break ;

						case 6 :
							FreeList() ;
							quit = 1 ;
							break ;
					}
					break ;

				case ESC :
					FreeList() ;
					quit = 1 ;
					break ;

			}
		}while(!quit);

		return 0;
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
		gotoxy(30,10); cprintf("     3.DELETE...     ");
		textattr(0x1B);
		if(Sel == 4)
			textattr(0x3E);
		gotoxy(30,12); cprintf("     4.SAVE.....     ");
		textattr(0x1B);
		if(Sel == 5)
			textattr(0x3E);
		gotoxy(30,14); cprintf("     5.LOAD.....     ");
		textattr(0x1B);
		if(Sel == 6)
			textattr(0x3E);
		gotoxy(30,16); cprintf("     6.EXIT.....     ");
		textattr(0x07);
	}

	void NewRec(void)
	{
		struct Employee *pItem ;

		clrscr() ;
		gotoxy(7,8);
		pItem = (struct Employee *)malloc(sizeof(struct Employee));

		if(!pItem)
		{
			printf("Out Of Memory..");
			exit(1);
		}
		gotoxy(4,10);printf("   Code :  ");
		gotoxy(4,12);printf("   Name :  ");
		gotoxy(60,12);printf("   Age :  ");
		gotoxy(4,14);printf("   Address :  ");
		gotoxy(4,16);printf("   Salary :  ");
		gotoxy(32,16);printf("   OverTime :  ");
		gotoxy(60,16);printf("   Deduct :  ");

		gotoxy(14,10);scanf("%d",&pItem->Code);flushall();
		gotoxy(14,12);gets(pItem->Name);
		gotoxy(69,12);scanf("%d",&pItem->Age);flushall();
		gotoxy(17,14);gets(pItem->Address);
		gotoxy(16,16);scanf("%d",&pItem->Salary);
		gotoxy(46,16);scanf("%d",&pItem->OverTime);
		gotoxy(72,16);scanf("%d",&pItem->Deduct);

		AddToList(pItem) ;
	}

	void AddToList(struct Employee* pItem)
	{
		if(!pHead)//First Item
		{
			pItem->pPrev = pItem->pNext = NULL ;
			pHead = pTail = pItem ;
		}
		else
		{
			pTail->pNext = pItem ;
			pItem->pPrev = pTail ;
			pItem->pNext = NULL ;
			pTail = pItem ;
		}
	}

	void DisplayRec(void)
	{
		int Cd ;
		struct Employee *pItem ;

		clrscr() ;
		gotoxy(7,8);
		printf("Enter Code : ");
		scanf("%d",&Cd);
		if(Cd)
		{
			pItem = SearchList(Cd);
			if(!pItem)
			{
				gotoxy(7,10);
				printf("Record Not Found..");
				getch();
			}
			else
			{
				gotoxy(4,10);printf("   Code : %d",pItem->Code);
				gotoxy(4,12);printf("   Name :  %s",pItem->Name);
				gotoxy(60,12);printf("   Age :  %d",pItem->Age);
				gotoxy(4,14);printf("   Address :  %s",pItem->Address);
				gotoxy(4,16);printf("   Salary :  %d",pItem->Salary);
				gotoxy(32,16);printf("   OverTime :  %d",pItem->OverTime);
				gotoxy(60,16);printf("   Deduct :  %d",pItem->Deduct);
				getch() ;
			}
		}
	}

	struct Employee *SearchList(int Cd)
	{
		struct Employee *pCurrent ;

		pCurrent = pHead ;
		while(pCurrent && pCurrent->Code != Cd)
			pCurrent = pCurrent->pNext ;

		return pCurrent;
	}

	void FreeList(void)
	{
		struct Employee *pHold;

		while(pHead)
		{
			pHold = pHead ;
			pHead = pHead->pNext ;
			free(pHold);
		}
		pTail = NULL ;
	}

	void DeleteRec(void)
	{
		int Cd ;
		struct Employee *pRec ;

		clrscr() ;
		gotoxy(7,8);
		printf("Enter Code : ");
		scanf("%d",&Cd);
		if(Cd)
		{
			pRec = SearchList(Cd);
			if(!pRec)
			{
				gotoxy(7,10);
				printf("Record not found..!");
				getch();
			}
			else
			{
				DeleteList(pRec);
				gotoxy(7,10);
				printf("Record deleted..");
				getch() ;
			}
		}
	}

	void DeleteList(struct Employee *pRec)
	{
		if(pHead == pTail)//if only one element exists
			pHead = pTail = NULL ;
		else if(pRec == pHead)//if the first element is to be deleted
		{
			pHead = pHead->pNext ;
			pHead->pPrev = NULL ;
		}
		else if(pRec == pTail)// if the last one is to be deleted
		{
			pTail = pTail->pPrev;
			pTail->pNext = NULL ;
		}
		else
		{
			pRec->pPrev->pNext = pRec->pNext;
			pRec->pNext->pPrev = pRec->pPrev;
		}
	}

	void SaveList(void)
	{
		FILE *FPtr ;
		struct Employee *pCurrent;

		FPtr = fopen("c:\\cprog\\lnklst.dat","a");
		if(!FPtr)
		{
			gotoxy(7,10);
			printf("File  open error..");
			exit(1);
		}
		pCurrent = pHead ;
		while(pCurrent)
		{
			fwrite(pCurrent,(sizeof(struct Employee)-2*sizeof(struct Employee *)),1,FPtr);
			pCurrent = pCurrent->pNext;
		}
		gotoxy(7,23);
		printf("File Saved..");
		getch() ;
		fclose(FPtr);
	}

	void LoadList(void)
	{
		FILE *FPtr ;
		struct Employee *pItem;

		FPtr = fopen("c:\\cprog\\lnklst.dat","r");
		if(!FPtr)
		{
			gotoxy(7,10);
			printf("File Open Error..");
			exit(1);
		}
		FreeList() ;
		while(!feof(FPtr))
		{
			pItem = (struct Employee *)malloc(sizeof(struct Employee));
			if(!pItem)
			{
				printf("Out Of Memory..");
				exit(1);
			}
			if(fread(pItem,(sizeof(struct Employee)-2*sizeof(struct Employee *)),1,FPtr)==1)
				AddToList(pItem) ;
			else
				free(pItem);
		}
		gotoxy(7,23);
		printf("File Loaded..");
		getch() ;
		fclose(FPtr);
	}
