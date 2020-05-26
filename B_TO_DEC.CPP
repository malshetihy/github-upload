
	#include <stdio.h>
	#include <conio.h>
	#include <string.h>
	#include <math.h>

	main()
	{
	int b,i,num = 0 , length ;
	char numb[10] ;

	clrscr();
	printf("\n\n\tENTER THE NUMBER TO CONVERT INTO DECIMAL > ");
	gets(numb);
	length = strlen(numb) ;
	printf("\n\n\tENTER THE BASE OF THE NUMBER > ");
	scanf("%d",&b);
	for (i = length - 1  ; i >= 0  ; i--)
		{
		numb[i] -= '0';
		num += (int)numb[i] * pow( (double)b , (double)( length - i - 1 ) ) ;
		}
	printf("\n\n\tTHE NUMBER IN DECIMAL = %d ",num);
	getch();
	}
