
	#include<stdio.h>
	#include<conio.h>

	#define size 10

	getpoly(int x,int arr[])
	{
	int i;

	clrscr();
	printf("\n\n\n\t");
	for( i = x ; i > 1 ; i--)
		printf("  %d    ",i);
	printf("\n\t");
	for( i = 0 ; i < x+1 ; i++)
		{
		printf("%c",97+i);
		if ( i < x )		printf("S");
		if ( i < x )		printf("  +  ");
		}
	puts("\n\n\tENTER THE COEFFICIENTS OF THE POLYNOMIAL :");
	for( i = x ; i >= 0 ; i--)
		{
		gotoxy(9+9*(x-i),10);
		printf("%c = ",97+x-i);
		scanf("%d",&arr[i]);
		}
	}

	main()
	{
	int d1,d2,d_prod,i,j,k;
	int p1[size],p2[size],p_prod[size];

	clrscr();
	puts("\n\n\n\tENTER THE DEGREE OF THE FIRST POLYNOMIAL : ");
	gotoxy(52,4);
	scanf("%d",&d1);
	puts("\n\n\tENTER THE DEGREE OF THE SECOND POLYNOMIAL : ");
	gotoxy(53,7);
	scanf("%d",&d2);
	d_prod = d1 + d2 ;
	getpoly(d1,p1);
	getpoly(d2,p2);
	for ( k = 0 ; k < d_prod+1 ; k++)
		{
		p_prod[k] = 0 ;
		for ( j = 0 ; j < d2+1 ; j++)
			{
			for ( i = 0 ; i < d1+1 ; i++)
				{
				if ( i+j == k )
				p_prod[k] += p1[i] * p2[j] ;
				}
			}
		}

	clrscr();
	printf("\n\n\n\tTHE PRODUCT OF THE POLYNOMIALS = \n\n\t");
	for( i = d_prod ; i > 1 ; i--)
		printf("   %d    ",i);
	printf("\n\t");
	for( i = 0 ; i < d_prod+1 ; i++)
		{
		printf("%d",p_prod[d_prod-i]);
		if ( i < d_prod )
			 printf(" S  +  ");
			}
	for( i = 0 ; i < d_prod+1 ; i++)
		{
		gotoxy(9+9*i,10);
		printf("%c = %d",97+i,p_prod[d_prod-i]);
		}
	getch();
	}



