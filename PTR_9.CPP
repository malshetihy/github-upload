#include <stdio.h>

main()
   {
   char *msg = "Hello";	//initialization
   char name[20];

   puts ("What is your name?  ");
   gets (name);
   printf ("%s, %s\n", msg, name);
   msg = "Welcome";		//assignment
   printf ("%s, %s\n", msg, name);
   }
