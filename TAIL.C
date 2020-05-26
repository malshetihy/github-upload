
	#include<stdio.h>

	int s = 0 ;

	void addnumbers(void)
	{
		int x ;

		if( scanf("%d", &x ) == 1 )
		{
			s += x ;
			addnumbers() ;
		}
	}

	main()
	{
		puts("\nEnter some integers followed by a nonnumeric characters : ") ;
		addnumbers() ;
		printf("\nThe sum is : %d\n", s ) ;
		return (0) ;
	}
