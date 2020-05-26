#include <stdio.h>
#include <graphics.h>
#include <conio.h>

main()
   {
   int mode, driver, i;

   driver =  VGA;
   mode = VGAHI;
   initgraph (&driver, &mode, "a:\\c_prog");

   for (i=0; i<400; i+=1)
      putpixel (i, i, i%16);

   getch();
   closegraph();
   }