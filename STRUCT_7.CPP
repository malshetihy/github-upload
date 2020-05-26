#include <stdio.h>
#include <conio.h>

main()
   {
   struct person
      {
      char name[15];
      };

   struct family
      {
      struct person husband;
      struct person wife;
      };

   struct family f[3];
   int i, j;

   for (i=0; i<3; i++)
      {
      printf ("Family %d, Husband name: ", i); scanf ("%s", f[i].husband.name);
      printf ("Family %d, Wife name   : ", i); scanf ("%s", f[i].wife.name);
      }

   clrscr();
   gotoxy (20, 1); printf ("Ú");
   for (i=21; i<50; i++)
      printf ("Ä");
   printf ("Â");
   for (i=51; i<70; i++)
      printf ("Ä");
   printf ("¿");
   gotoxy (20, 2); puts ("³ Husband name");
   gotoxy (50, 2); puts ("³ Wife name");
   gotoxy (70, 2); puts ("³");

   gotoxy (20, 3); printf ("Æ");
   for (i=21; i<50; i++)
      printf ("Í");
   printf ("Ø");
   for (i=51; i<70; i++)
      printf ("Í");
   printf ("µ");

   for (i=0; i<3; i++)
      {
      gotoxy (20, i+4); printf ("³ %s", f[i].husband.name);
      gotoxy (50, i+4); printf ("³ %s", f[i].wife.name);
      gotoxy (70, i+4); puts ("³");

      }
   gotoxy (20, 4+i); printf ("À");
   for (i=21; i<50; i++)
      printf ("Ä");
   printf ("Á");
   for (i=51; i<70; i++)
      printf ("Ä");
   printf ("Ù");

   }
