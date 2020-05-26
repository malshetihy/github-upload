	
	#include<stdio.h>
	main()		/* sample of float division */
	{
	int dividend,divisor,answer,remndr;
	dividend = 10;
	divisor = 3;
	answer = dividend/divisor;
	remndr = dividend%divisor;
	printf("\n%d / %d = %d R %d",dividend,divisor,answer,remndr);
	}