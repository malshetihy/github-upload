
	#include<stdio.h>
	main()		/* sample program */
			/*passing parameters*/
	{
	int numbr1,numbr2,total;
	numbr1 = 5;
	numbr2 = 3;
	total = addint(numbr1,numbr2);
	printf(	"%d plus %d equals %d.\n",numbr1,numbr2,total);
	}
	addint(x,y)	/* add two integers */
	int x,y;
	{
	return x+y;
	}
