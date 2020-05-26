#include <stdio.h>
#include <stdlib.h>

struct student
   {
   char name[16];
   int mark;
   };

struct student get_info()
   {
   struct student stud;
   char mark_str[10];

   printf ("Name? "); gets (stud.name);
   printf ("Mark? "); gets(mark_str);
   stud.mark = atoi (mark_str);
   return stud;
   }

void disp_info ( struct student s)
   {
   printf ("%s got %d marks\n", s.name, s.mark);
   }

void main()
   {
   struct student s1, s2, s3;

   s1 = get_info ();
   s2 = get_info ();
   s3 = get_info ();

   disp_info (s1);
   disp_info (s2);
   disp_info (s3);
   }
