
	#include<stdio.h>
	#include<conio.h>

	main()
	{
	float dtrmnt[10][10],z,factor,val_of_dtrmnt;
	int size,i,j,k,flag=0;

	clrscr();
	puts("\n\n\tENTER THE DETERMINANT SIZE X (WHERE X = 2,3,...,10 ) >");
	gotoxy(64,3);
	scanf("%d",&size);
	puts("\n\tENTER THE DETERMINANT ELEMENTS >");
	for ( i = 0 ; i < 2*size+1 ;i++)
		{
		gotoxy(7,7+i);
		puts("³");
		gotoxy(11+8*(size-1),7+i);
		puts("³");
		}
	for ( j = 0 ; j < size ; j++)
		{
		for (i = 0 ; i < size ;i++)
			{
			gotoxy(9+8*i,8+2*j);
			scanf("%f",&dtrmnt[j][i]);
			}
		}

	for ( k = 0 ; k < size - 1 ; k++ )
		{
		if (dtrmnt[k][k] == 0 && k != size - 1)
			{
			for ( i = 0 ; i < size ; i++)
				{
				if (dtrmnt[k][i] == 0 )
				++flag;
				}
			if (flag == size)
				{
				val_of_dtrmnt = 0 ;
				break ;
				}
			for ( i = 0 ; i < size ; i++)
				{
				z = dtrmnt[k+1][i];
				dtrmnt[k+1][i] = dtrmnt[k][i];
				dtrmnt[k][i] = z;
				}
			}
		for ( j = k+1 ; j < size ; j++ )
			{
			factor = dtrmnt[j][k] / dtrmnt[k][k] ;
			for ( i = 0 ; i < size ; i++ )
				dtrmnt[j][i] -=  dtrmnt[k][i] * factor ;
			}
		}
	if ( flag == size ) 	val_of_dtrmnt = 0 ;
	else
		{
		val_of_dtrmnt = 1 ;
		for ( i = 0 ; i < size ; i++)
		val_of_dtrmnt *= dtrmnt[i][i];
		}
	clrscr();
	gotoxy(24,12);
	printf("THE VALUE OF THE DETERMINANT = %.1f",val_of_dtrmnt);
	getch();
	}