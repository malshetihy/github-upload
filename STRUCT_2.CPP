#include <stdio.h>

main()
   {
   struct person
      {
      char name[16];
      float salary;
      int age;
      } ;

   struct person man = {"Mohamed", 512, 42},
		 boy = {"Soso", 20.0, 15};

   printf ("MAN: Name: %s\n", man.name);
   printf ("Age: %d, Salary: %.2f\n\n",man.age, man.salary);

   printf ("BOY: Name: %s\n", boy.name);
   printf ("Age: %d, Salary: %.2f\n\n",boy.age, boy.salary);
   }