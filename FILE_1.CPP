#include <stdio.h>

main()
   {
   FILE *p;
   char name[20];
   int age;

   p = fopen ("a:\data.txt", "w");
   printf ("What is your name? ");
   gets (name);
   printf ("How old are you? ");
   scanf ("%d", &age);
   fprintf (p,  "\n\n\t%s is %d years old.\n", name, age);
   fclose (p);
   }