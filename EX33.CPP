
	/*			A D D - A N Y
	 * Add values without regard to data type . This program uses a macro
	 * to do the calculation instead of using separate function for each
	 * data type . */

	 #include<stdio.h>
	 #include<conio.h>

	 #define ADD( a , b )	( (a) + (b) )

	 int main()
	 {
		int n1 = 20 , n2 = 25 ;
		float f1 = 12.34 , f2 = 56.78 ;

		clrscr() ;
			/* add two integers */
		printf("\n\n\t%d + %d = %d", n1 , n2 , ADD( n1 , n2 ) ) ;
			/* add two real numbers */
		printf("\n\t%f + %f = %f", f1 , f2 , ADD( f1 , f2 ) ) ;
			/* add two mixed numbers */
		printf("\n\t%d + %f = %f", n1 , f2 , ADD( n1 , f2 ) ) ;
		getch() ;
		return (0) ;
	 }