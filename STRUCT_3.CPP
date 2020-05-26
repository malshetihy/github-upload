#include <stdio.h>

main()
   {
   struct person
      {
      char name[15];
      int age;
      };

   struct family
      {
      struct person husband;
      struct person wife;
      int    children;
      };

   struct family f1;

   printf ("Husband name: "); scanf ("%s", f1.husband.name);
   printf ("Husband age: "); scanf ("%d", &f1.husband.age);
   printf ("Wife name: "); scanf ("%s", f1.wife.name);
   printf ("Wife age: "); scanf ("%d", &f1.wife.age);
   printf ("Number of children: ");
   scanf ("%d", &f1.children);
   printf ("%s, %d, and his wife %s, %d, has %d children.\n",
		f1.husband.name, f1.husband.age, f1.wife.name,
		f1.wife.age, f1.children);
   }
