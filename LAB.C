#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <alloc.h>
#include <graphics.h>

#define LEFT   	0x4B
#define	RIGHT	0x4D
#define UP    	0x48
#define	DOWN	0x50
#define	HOME	0x47
#define	END		0x4F
#define	ENTER	0xD
#define	ESCAPE	0x1B

#define	NORMAL_ATTR	0x07
#define	HILIGHT_ATTR	0x70

#define	U_ROW	9
#define	L_ROW	17
#define	L_COL	35
#define	R_COL	45
#define	SPACING	 1
#define	MAX_OPT	 7
#define	OPT_LEN	10

#define	NEW	0
#define	DISPLAY	1
#define DELETE  2
#define GRAPH	3
#define SAVE	4
#define LOAD	5
#define	EXIT	6

#define ATTR	0x1E

struct Employee
{
	int Code;
	char Name[20];
	char Address[40];
	int Age;
	float Salary;
	float OTime;
	float Deduct;
	struct Employee *pNext;
	struct Employee *pPrevious;
};

struct LineInfo
{
	int Len;
	int StartCol;
	int Row;
	int Attr;
};

void DrawMenu(char Menu[MAX_OPT][OPT_LEN]);
void NewOpt(void);
void DispOpt(void);
void DelOpt(void);
void GraphOpt(void);
void SaveOpt(void);
void LoadOpt(void);
char *LnEdit(struct LineInfo LnData);
void AddList(struct Employee *pItem);
struct Employee * SearchList(int ItemNum);
int DeleteList(int ItemNum);
void FreeList(void);

struct Employee *pStart;
struct Employee *pLast;


int main(void)
{
	int Current = 0, Previous = 0;
	int Quit = 0;
	char Menu[MAX_OPT][OPT_LEN] = { " New     ", " Display ",
					" Delete  ", " Graph   ",
					" Save    ", " Load    ",
					" Exit    "};
	char ch;

	do
	{
		DrawMenu(Menu);

		gotoxy(L_COL + 1, U_ROW+1+Previous*SPACING);
		textattr(NORMAL_ATTR);
		cprintf("%s", Menu[Previous]);

		gotoxy(L_COL + 1, U_ROW+1+Current*SPACING);
		textattr(HILIGHT_ATTR);
		cprintf("%s", Menu[Current]);

		ch = getch();
		switch(ch)
		{
			case NULL:
			{
				ch = getch();
				switch(ch)
				{
					case UP:
					{
						Previous = Current;
						Current--;
						if (Current == -1)
							Current = MAX_OPT-1;
						break;
					}
					case DOWN:
					{
						Previous = Current;
						Current++;
						if (Current == MAX_OPT)
							Current = 0;
						break;
					}
					case HOME:
					{
						Previous = Current;
						Current = 0;
						break;
					}
					case END:
					{
						Previous = Current;
						Current = MAX_OPT - 1;
						break;
					}
				}
				break;
			}
			case ESCAPE:
			{
				Quit = 1;
				break;
			}
			case ENTER:
			{
				switch(Current)
				{
					case NEW:
					{
					  NewOpt();
					  break;
					}
					case DISPLAY:
					{
					  DispOpt();
					  break;
					}
					case DELETE:
					{
					  DelOpt();
					  break;
					}
					case GRAPH:
					{
					  GraphOpt();
					  break;
					}
					case SAVE:
					{
					  SaveOpt();
					  break;
					}
					case LOAD:
					{
					  LoadOpt();
					  break;
					}
					case EXIT:
					{
					  FreeList();
					  Quit = 1;
					  break;
					}
				}
			}
		}

	}while(!Quit);

	textattr(NORMAL_ATTR);
	clrscr();

	return 0;
}


void DrawMenu(char Menu[MAX_OPT][OPT_LEN])
{
    int i;

    textattr(0x07);
    clrscr();

    gotoxy(L_COL, U_ROW);
    cprintf("%c", 201);
    for (i=L_COL+1; i < R_COL; i++)
		    cprintf("%c", 205);
    cprintf("%c", 187);
    for(i=U_ROW+1; i<L_ROW; i++)
    {
	    gotoxy(L_COL, i);
	    cprintf("%c", 186);
	    gotoxy(R_COL, i);
	    cprintf("%c", 186);
    }
    gotoxy(L_COL, L_ROW);
    cprintf("%c", 200);
    for (i=L_COL+1; i < R_COL; i++)
		    cprintf("%c", 205);
    cprintf("%c", 188);

    for (i=0; i < MAX_OPT; i++)
    {
	    gotoxy(L_COL+1, U_ROW+1+i*SPACING);
	    cprintf("%s", Menu[i]);
    }

}

void NewOpt(void)
{
	struct Employee *pEmp;
	struct LineInfo LnData;
	char *str;

	pEmp = (struct Employee *) malloc(sizeof(struct Employee));

	if (!pEmp)
	{
		printf("\nOut of memory");
		exit(1);
	}

	textattr(NORMAL_ATTR);
	clrscr();
	gotoxy(10, 5);
	printf("Code    :");
	gotoxy(10, 7);
	printf("Name    :");
	gotoxy(10, 9);
	printf("Address :");
	gotoxy(10, 11);
	printf("Age     :");
	gotoxy(40, 11);
	printf("Salary  :");
	gotoxy(10, 13);
	printf("O. Time :");
	gotoxy(40, 13);
	printf("Deduct. :");

	LnData.Len = 4;
	LnData.StartCol = 20;
	LnData.Row = 5;
	LnData.Attr = ATTR;
	str = LnEdit(LnData);
	pEmp->Code=atoi(str);
	free(str);

	LnData.Len = 20;
	LnData.Row = 7;
	str = LnEdit(LnData);
	strcpy(pEmp->Name, str);
	free(str);

	LnData.Len = 40;
	LnData.Row = 9;
	str = LnEdit(LnData);
	strcpy(pEmp->Address, str);
	free(str);

	LnData.Len = 2;
	LnData.Row = 11;
	str = LnEdit(LnData);
	pEmp->Age=atoi(str);
	free(str);

	LnData.Len = 7;
	LnData.StartCol = 50;
	str = LnEdit(LnData);
	pEmp->Salary=(float)atof(str);
	free(str);

	LnData.Len = 7;
	LnData.StartCol = 20;
	LnData.Row = 13;
	str = LnEdit(LnData);
	pEmp->OTime=(float)atof(str);
	free(str);

	LnData.Len = 7;
	LnData.StartCol = 50;
	str = LnEdit(LnData);
	pEmp->Deduct=(float)atof(str);
	free(str);

	AddList(pEmp);
}


void DispOpt(void)
{
	struct Employee *pEmp;
	int RecNum;

	textattr(NORMAL_ATTR);
	clrscr();
	printf(" Input Record Number : ");
	scanf("%d", &RecNum);

	pEmp = SearchList(RecNum);

	if (!pEmp)
	{
		printf("\n\nRecord not found.");
		getch();
	}
	else
	{
		clrscr();
		gotoxy(10, 5);
		printf("Code    : %d",
			  pEmp->Code);
		gotoxy(10, 7);
		printf("Name    : %s",
			  pEmp->Name);
		gotoxy(10, 9);
		printf("Address : %s",
			  pEmp->Address);
		gotoxy(10, 11);
		printf("Age     : %d",
			  pEmp->Age);
		gotoxy(40, 11);
		printf("Salary  : %f",
			  pEmp->Salary);
		gotoxy(10, 13);
		printf("O. Time : %f",
			  pEmp->OTime);
		gotoxy(40, 13);
		printf("Deduct. : %f",
			  pEmp->Deduct);

		getch();
	}
}



void DelOpt(void)
{
	int RecNum;
	int Success;

	textattr(NORMAL_ATTR);
	clrscr();
	printf(" Input Record Number : ");
	scanf("%d", &RecNum);

	Success = DeleteList(RecNum);

	if (Success)
	{
		printf("\n\nRecord deleted.");
		getch();
	}
	else
	{
		printf("\n\nRecord not found.");
		getch();
	}
}

void GraphOpt(void)
{
   int gdriver = DETECT, gmode, errorcode;
   int MaxX, MaxY;
   int OrigX, OrigY;
   int EndXAxisX, EndYAxisY;
   struct Employee *pItem;
   char CodeStr[15];
   int YText, TextCor;
   char YTextStr[5];
   int BarX, BarY;

   initgraph(&gdriver, &gmode, "c:\\borlandc\\bgi");

   errorcode = graphresult();

   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
   }
   else
   {
	MaxX = getmaxx();
	MaxY = getmaxy();

	OrigX = 50;
	OrigY = MaxY - 50;

	EndXAxisX = MaxX - 30;
	EndYAxisY = 30;

	line(OrigX, OrigY,  EndXAxisX, OrigY);
	line(OrigX, OrigY,  OrigX, EndYAxisY);

	settextstyle(SMALL_FONT, VERT_DIR, 4);

	for(TextCor = OrigY, YText = 0;
			TextCor > EndYAxisY; TextCor -= 50, YText += 500)
	{
		line(OrigX-5, TextCor, OrigX+5 , TextCor);
		itoa(YText, YTextStr, 10);
		outtextxy(OrigX-30, TextCor, YTextStr);
	}
	outtextxy(OrigX-30, 20, "Salary");


	setfillstyle(INTERLEAVE_FILL, BLUE);
	settextstyle(SMALL_FONT, HORIZ_DIR, 4);
	outtextxy(MaxX-30, OrigY+10, "Code");
	BarX = OrigX;
	pItem = pStart;
	while(pItem)
	{
		BarX += 50,
		BarY = OrigY - (int)pItem->Salary / 10;
		bar3d(BarX, BarY, BarX+10, OrigY, 10, 1);
		itoa(pItem->Code, CodeStr, 10);
		outtextxy(BarX, OrigY + 10, CodeStr);
		pItem = pItem->pNext;
	}

	getch();
	closegraph();
   }
}

void SaveOpt(void)
{
	char FileName[13];
	struct Employee *pItem;
	FILE *fptr;

	textattr(NORMAL_ATTR);
	clrscr();
	printf(" Input File Name : ");
	scanf("%s", FileName);

	fptr = fopen(FileName, "wb");
	if (!fptr)
	{
		printf("\n\nFile open error.");
		getch();
	}
	else
	{
		pItem = pStart;

		while (pItem)
		{
			fwrite(pItem, sizeof(struct Employee) -
				2 * sizeof(struct Employee *), 1, fptr);
			pItem = pItem->pNext;
		}
		fclose(fptr);
	}

}


void LoadOpt(void)
{
	char FileName[13];
	struct Employee *pItem;
	FILE *fptr;

	textattr(NORMAL_ATTR);
	clrscr();
	printf(" Input File Name : ");
	scanf("%s", FileName);

	fptr = fopen(FileName, "rb");
	if (!fptr)
	{
		printf("\n\nFile open error.");
		getch();
	}
	else
	{
		while (!feof(fptr))
		{
			pItem = (struct Employee *)malloc(
					sizeof(struct Employee));

			if (fread(pItem, sizeof(struct Employee) -
				 2 * sizeof(struct Employee *),
							1, fptr) == 1)
			{
			    AddList(pItem);
			}
			else
			{
			    free(pItem);
			}
		}
		fclose(fptr);
	}

}


char *LnEdit(struct LineInfo LnData)
{
  char *pStart, *pCurrent, *pLast;
  unsigned char ch;
  int  Col, LastCol;
  int  i;
  int  Quit = 0;

  pStart = (char *)malloc(sizeof(char) * (LnData.Len + 1));

  textattr(LnData.Attr);

  Col = LnData.StartCol;
  LastCol = Col + LnData.Len;

  gotoxy(LnData.StartCol, LnData.Row);
  for(i=0; i < LnData.Len; i++) cprintf(" ");

  pLast = pCurrent = pStart;

  do
  {
	gotoxy(Col, LnData.Row);
	ch = getch();

	switch(ch)
	{
		case NULL:
		{
			ch = getch();
			switch(ch)
			{
				case LEFT:
				{
					if (pCurrent > pStart)
					{
						pCurrent--;
						Col--;
					}
					break;
				}
				case RIGHT:
				{
					if (pCurrent < pLast)
					{
						pCurrent++;
						Col++;
					}
					break;
				}
				case HOME:
				{
					pCurrent = pStart;
					Col = LnData.StartCol;
					break;
				}
				case END:
				{
					Col += (int)(pLast - pCurrent);
					pCurrent = pLast;
					break;
				}
			}
			break;
		}
		case ENTER:
		{
			*pLast = '\0';
			Quit = 1;
			break;
		}
		case ESCAPE:
		{
			*pStart = '\0';
			Quit = 1;
			break;
		}
		default:
		{
			if (ch >= 32 && ch <= 127)
			{
				if (Col < LastCol)
				{
					if (pCurrent == pLast) pLast++;
					*pCurrent++=ch;
					Col++;
					cprintf("%c", ch);
				}
			}
		}
	}
  }while(!Quit);

  return pStart;
}


void AddList(struct Employee *pItem)
{

	if (!pStart)
	{
		pItem->pNext = NULL;
		pItem->pPrevious = NULL;
		pStart = pLast = pItem;
	}
	else
	{
		pLast->pNext = pItem;
		pItem->pPrevious = pLast;
		pItem->pNext = NULL;
		pLast = pItem;
	}
}

struct Employee * SearchList(int ItemNum)
{
	struct Employee * pItem;
	int i;

	pItem = pStart;

	for (i=1; i < ItemNum && pItem; i++)
	{
		pItem = pItem->pNext;
	}

	return pItem;
}

int DeleteList(int ItemNum)
{
	struct Employee *pEmp;
	int RetFlag = 1;

	pEmp = SearchList(ItemNum);

	if (!pEmp)
	{
		RetFlag = 0;
	}
	else
	{
		if (pStart == pLast)
		{
			pStart = pLast = NULL;
		}
		else if(pEmp == pStart)
		{
			pStart = pStart->pNext;
			pStart->pPrevious = NULL;
		}
		else if(pEmp == pLast)
		{
			pLast = pLast->pPrevious;
			pLast->pNext = NULL;
		}
		else
		{
			pEmp->pPrevious->pNext = pEmp->pNext;
			pEmp->pNext->pPrevious = pEmp->pPrevious;
		}

		free(pEmp);
	}

	return RetFlag;
}
void FreeList(void)
{
	struct Employee * pItem;

	while(pStart)
	{
		pItem = pStart;
		pStart = pStart->pNext;
		free(pItem);
	}

	pLast = NULL;
}