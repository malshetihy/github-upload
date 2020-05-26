
	#include<stdio.h>
	#include<conio.h>

	main()
	{
	int i,j;

	for (i=2;i<13;i+=2)
		{
		for (j=1;j<13;)
			{
			printf("\n     %d * %d = %d ",i,  j,  i* j++);
			}
		getch();
		}
	}

