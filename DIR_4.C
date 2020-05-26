//vol.c: A program to calculate volumes using VOLUME.H

#include "a:\c_prog\volume.h"

#include <stdio.h>

#define ASK(prmt,var) puts(prmt);\
		      scanf ("%f", &var)

int menu();

main()
   {
   float s, r, h;
   int sel;
   while ( (sel=menu() ) != 0   )
      switch(sel)
	 {
	 case 1:				/* cube */
	    ASK("Side", s);
	    printf ("Volume = %f\n", V_CUBE(s));
	    break;

	 case 2:				/* ball */
	    ASK("Radius", r);
	    printf ("Volume = %f\n", V_BALL(r));
	    break;

	 case 3:				/* cylinder */
	 case 4:				/* cone */
	    ASK("Radius", r);
	    ASK("Hieght", h);
	    printf ("Volume=%f\n", sel==3 ? V_CYL(r,h) : V_CONE(r,h) );
	 }
   }

int menu()
   {
   int ch;
   puts ("\n\n   Volume Calculator");
   puts ("1. Cube");
   puts ("2. Ball");
   puts ("3. Cylinder");
   puts ("4. Cone");
   puts ("0. Exit");
   puts ("\n      Press 0-4");
   do {
      ch = getche();
      } while (ch  < '0' || ch > '4');
   return (ch - '0');		/* convert char to int */
   }
