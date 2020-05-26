	
	#include<stdio.h>
	int x[] = {1,3,4};
	int main(void)
		{
		long int XT,XXT;
		int n;
		n = 0;
		XXT = 0;
		while ( n < 3)
			{
			XT = x[n]*x[n];
			XXT = XT + XXT;
			++n;
			}
		printf("\n XXT = %d",XXT);
		return 0;
		}

