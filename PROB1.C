	
	#include<stdio.h>

	int n[] = {8,2,4,9,0,1,3,6,5,7};
	int main(void)
		{
		int a = 0,b,d=1,i,max = 10;
		b = a + d;
		i = 0;
		while (i<max)
			{
			printf("\n%d + %d = %2d",n[a],n[b],n[a]+n[b]);
			a+=2;
			if(a>9)
				{
				a-=10;
				d+=1;
				}
			if(d>9)	d = 2;
			b+=d;
			if(b>9)	b-=10;
			++i;
			}
			return 0;
		}
