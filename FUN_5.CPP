#include <conio.h>
#include <stdio.h>

int getlc()		// gets a lower-case character from the user
   {
   int ch;

   ch = getch();		// get a character form the user
   if (ch >= 'A' && ch <= 'Z')	// if an upper-case letter
      return (ch + 32);		// convert into lower-case
   else
      return (ch);	      	// otherwise, leave it unchanged
   }

main()
   {
   printf ("Please press any key...");
   printf ("%c\n", getlc());
   }
