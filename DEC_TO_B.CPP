
	#include<stdio.h>
	#include<string.h>
	#include<conio.h>

	main()
	{
	int num,b,i;
	char numb[10];

	clrscr();
	printf("\n\n\tENTER THE DECIMAL NUMBER TO CONVERT > ");
	scanf("%d",&num);
	printf("\n\n\tENTER THE BASE TO CONVERT TO > ");
	scanf("%d",&b);
	for (i = 0  ; num > 0  ; ++i )
		{
		numb[i] = num % b + '0';
		num = num / b ;
		}
	numb[i] = 0;
	printf("\n\n\tTHE NUMBER IN BASE %d = ",b);
	for ( i = strlen(numb) ; i >=0 ; --i )
		printf(" %c",numb[i]);
	getch();
	}
