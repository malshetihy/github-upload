#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
   {
   FILE *fp;
   char line[120];

   clrscr();
   fp = fopen ("c:\\autoexec.bat", "r");
   if (fp == NULL)	// error in file opening
      {
      puts ("Sorry... This file cannot be opened.");
      }
   while (1)
      {
      if (! fgets (line, 120, fp))	// EOF has been reached
	 break;
      else
	 line[strlen(line)-1] = '\0';
	 puts (line);
      }
   }