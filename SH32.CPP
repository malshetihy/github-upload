

	#include<stdio.h>
	#include<conio.h>

	void draw (int,int,int);

	main()
	{
	int m1[10][10],r1,c1,m2[10][10],c2,result[10][10],i,j,k,x,x1;

	clrscr();
	puts("\n\n\tENTER THE SIZE OF THE FIRST MATRIX :\n\n\tNO. OF ROWS = ");
	gotoxy(24,5);
	scanf("%d",&r1);
	puts("\n\tNO. OF COLUMNS = ");
	gotoxy(27,7);
	scanf("%d",&c1);
	puts("\n\n\tENTER THE SIZE OF THE SECOND MATRIX :\n\n\tNO. OF COLUMNS = ");
	gotoxy(27,12);
	scanf("%d",&c2);
	clrscr();
	puts("\n\n\tENTER THE MATRICIES ELEMENTS >");
	draw(r1,c1,0);
	for ( j = 0 ; j < r1 ; j++)
		{
		for (i = 0 ; i < c1 ;i++)
			{
			x = 9+5*i;
			gotoxy(x,7+2*j);
			scanf("%d",&m1[j][i]);
			}
		}
	draw(c1,c2,x);
	for ( j = 0 ; j < c1 ; j++)
		{
		for (i = 0 ; i < c2 ;i++)
			{
			x1=x+9+5*i;
			gotoxy(x1,7+2*j);
			scanf("%d",&m2[j][i]);
			}
		}
	x1+=8;
	for ( k = 0 ; k < r1 ; k++)
		{
		for ( j = 0 ; j < c2 ; j++)
			{
			result[k][j] = 0 ;
			for ( i = 0 ;i < c1 ;i++)
				result[k][j] += m1[k][i] * m2[i][j];
			}
		}
	draw(r1,c2,x1);
	for ( j = 0 ; j < r1 ; j++)
		{
		for (i = 0 ; i < c2 ;i++)
			{
			gotoxy(x1+9+5*i,7+2*j);
			printf("%d",result[j][i]);
			}
		}
	getch();
	}

	void draw (x,y,z)
		{
		int i;

		gotoxy(z+7,6);
		puts("Ú");
		gotoxy(z+7,6+2*x);
		puts("À");
		gotoxy(z+7+5*y,6);
		puts("¿");
		gotoxy(z+7+5*y,6+2*x);
		puts("Ù");
		for ( i = 0 ; i < 2*x-1 ;i++)
			{
			gotoxy(z+7,7+i);
			puts("³");
			gotoxy(z+7+5*y,7+i);
			puts("³");
			}
		}


