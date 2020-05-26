
	/*			EXAMPLE 29
	 *	          Print a table of powers */

	 #include<stdio.h>
	 #include<conio.h>

	 main()
	 {
		int n ;		/* tabel index */
				/* label for the column */
		clrscr() ;
		puts("\tnumber\t exp2 \t exp3 \t exp4") ;
		puts("\t------\t------\t------\t------") ;
			/* Print the table of power value */
		for( n = 0 ; n <= 10 ; ++n )
			printf("\t%2d\t%5d\t%5d\t%5d\n", n , n * n ,
					n * n * n , n * n * n * n ) ;
		getch() ;
	 }