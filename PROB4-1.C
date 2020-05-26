	
	#include<stdio.h>
	
	int main(void)
		{
		int x[] = {1,3,4};
		int i,result;
		i = 0;
		result = 0;
		while ( i < 3)
			{
			result += x[i]*x[i];
			++i;
			}
		printf("\nThe result is : %d",result);
		return 0;
		}

