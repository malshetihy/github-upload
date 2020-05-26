
	#include<stdio.h>

	union my_union
	{
		float float_num;
		int int_num ;
	} ;

	int main(void)
	{
		union my_union union_mem ;

		union_mem.int_num = 29 ;
		printf("Current value of my union : %d\n", union_mem.int_num ) ;
		union_mem.float_num = 19.58 ;
		printf("Current value of my union : %.2f\n", union_mem.float_num ) ;
		return (0) ;
	}
