#include <stdio.h>
#include <conio.h>

double factorial (double x)
   {
   double factorial = 1;

   while (x>1)
      factorial *= x--;
   return factorial;
   }


double power (double base, int exp)
   {
   double result = 1;
   int i;

   for (i=1; i<=exp; i++)
      result *= base;

   return result;
   }

double sin (double angle)
   {
   double s = 0;
   int p, n;

   angle = angle * 3.141593/180;
   for (p=1, n=1; p<=20; p+=2, n++ )
      {
      if (n % 2 == 1)	//odd n
	 s += power (angle, p)/factorial(p);	// all positive terms
      else		// even n
	 s -= power (angle, p)/factorial(p);	// all negative terms
      }
   return s;
   }

main()
   {
   double degree;

   printf ("Enter the required angle in degrees: ");
   scanf ("%lf", &degree);
   printf ("sin(%.2lf)=%.2lf", degree, sin(degree));
   }
