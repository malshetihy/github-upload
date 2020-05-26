
	# include <stdio.h>
	# include <conio.h>

	main()
	{
		int samplvar ;
		int *Psamplvar ;

		clrscr() ;
		samplvar = 10 ;
		printf("\nThe sample variable is %d .",samplvar ) ;
		Psamplvar = &samplvar ;
		*Psamplvar = 2 ;
		printf("\nThe sample variable is now %d .", samplvar ) ;
		getch() ;
	}
