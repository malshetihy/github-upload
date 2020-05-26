	
	#include<stdio.h>
	int maxnum(int n1,int n2)
		{
		return (n1 > n2 ? n1 : n2);
		}
	int main(void)
		{
		int num1,num2;
		printf("\nEnter The First Number : ");
		scanf("%d",&num1);
		printf("\nEnter The Second Number : ");
		scanf("%d",&num2);
		printf("\nThe Maximum of The Two Numbers = %d",maxnum(num1,num2));
		return 0;
		}