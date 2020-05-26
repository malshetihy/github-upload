#include <stdio.h>
#include <string.h>

main()
   {
   struct person
      {
      char name[16];
      int age;
      };

   struct person man, *ptr;

   ptr = &man;		// ptr points to man

   strcpy (ptr->name, "Samy");
   printf ("Enter %s age: ", ptr->name);
   scanf ("%d", &ptr->age);
   printf ("\n%s is %d years old\n", man.name, man.age);
   }