
	#include<stdio.h>
	#include<conio.h>

	void main(void)
	{
		int Arr[3][3],Sum[3],Avr[3];
		register i,j;

		clrscr();

		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\n\tEnter array element No.(%d,%d) > ",i,j);
				scanf("%d",&Arr[i][j]);
			}
		}
		for(i=0;i<3;i++)
		{
			Sum[i] = 0 ;
			for(j=0;j<3;j++)
			{
				Sum[i] += Arr[i][j];
			}
		}
		for(j=0;j<3;j++)
		{
			Avr[j] = 0 ;
			for(i=0;i<3;i++)
			{
				Avr[j] += Arr[i][j];
			}
			Avr[j] /= 3 ;
		}
		clrscr() ;
		for(i=0;i<3;i++)
		{
			printf("\n\tThe sum of row(%d) = %d",i,Sum[i]);
		}

		printf("\n");

		for(i=0;i<3;i++)
		{
			printf("\n\tThe average of column(%d) = %d",i,Avr[i]);
		}

		getch() ;
	}
