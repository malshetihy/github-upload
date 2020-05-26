#include <string.h>
#include <stdio.h>
#include <conio.h>

#define	NUM 4
#define LEN 30

main()
   {
   char names[NUM][LEN], check[LEN];
   int i;

   clrscr();
   for (i=0; i<NUM; i++)
      {
      printf ("Enter name number %d: ", i);
      gets(names[i]);  //address of 1st character in string number (i)
       /* &names[i][0] */
      }

   puts ("Enter a name to check:");
   gets (check);

   for (i=0; i<NUM; i++)
      if ( ! strcmp(names[i], check) )
	 break;

   if (i == NUM)
      puts ("NAME NOT FOUND");
   else
      puts ("NAME IS IN LIST");
   }
