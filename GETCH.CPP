#include <conio.h>
#include <stdio.h>

   main()
      {
      char name[21];
      int i;

      printf ("What is your name: ");

      for (i=0; i<20; i++)
	 {
	 name[i] = getche();
	 switch(name[i])
	    {
	    case '\b':
	       if (i != 0)
		  i-=2;
	       else
		  i--;
	       break;

	    case '\r':
	       break;
	    }
	    if (name[i] == '\r')
	       break;
	 }
      name[i] = '\0';
      printf ("\nHello %s\n", name);
      }
