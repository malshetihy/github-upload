
	#include<stdio.h>
	#include<conio.h>

	void main(void)
	{
		int Arr[10],Max, Min;
		register i ;

		clrscr();

		for(i=0; i<10;i++)
		{
			printf("\n\n\tEnter array element No.%d > ",i);
			scanf("%d",&Arr[i]);
		}
		Max = Min = Arr[0];
		for(i=0; i<10;i++)
		{
			if(Arr[i]>Max)
				Max = Arr[i];

			if(Arr[i]<Min)
				Min = Arr[i];
		}
		clrscr() ;
		printf("\n\n\tThe Max. number is %d \n\tAnd the Min. Number is %d ",Max,Min);
		getch() ;
	}
