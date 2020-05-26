#include <stdio.h>
#include <conio.h>

line (int);		//This is a prototype
			/* Hi. This is a commnent ! */
main()
   {
   clrscr();
   printf ("Sayyed  : ");
   line (10);
   printf ("Abdo    : ");
   line (13);
   printf ("Meshmesh: ");
   line (6);
  }

line (int n)
   {
   int i;
   for (i=0; i<n; i++)
      printf ("=");
   printf ("\n");
   }
