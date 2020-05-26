#include <stdio.h>

main()
   {
   struct person
      {
      char name[16];
      float salary;
      int age;
      } ;

   struct person man;

   printf ("Name: ");
   gets (man.name);
   printf ("Age: ");
   scanf ("%d", &man.age);
   printf ("Salary: ");
   scanf ("%f", &man.salary);

   printf ("%s is %d years old and gets LE %.2f per month.\n",
					man.name, man.age, man.salary);
   }
