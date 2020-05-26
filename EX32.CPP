
	/* 		           A D D
	 * This program demonstrates the use of functions to perform
	 * calculations . A separate function is needed for each data type */

	 #include<stdio.h>
	 #include<conio.h>

	 long Addintegers( int number1 , int number2 )
	 {
		long total ;

		total = ( long )number1 + ( long )number2 ;
		return ( total ) ;
	 }

	 double Addreals( float number1 , float number2 )
	 {
		double total ;

		total = ( double )number1 + ( double )number2 ;
		return ( total ) ;
	 }

	 int main( void )
	 {
		int n1 = 20 , n2 = 25 ;
		float f1 = 12.34 , f2 = 56.78 ;

		clrscr() ;
				/* add two integers */
		printf("\n\n\t%d + %d = %d\n", n1 , n2 , Addintegers( n1 , n2 ) ) ;
				/* add two real numbers */
		printf("\n\t%f + %f = %f\n", f1 , f2 , Addreals( f1 , f2 ) ) ;
		getch() ;
		return (0) ;
	 }