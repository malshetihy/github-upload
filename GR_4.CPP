#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <dos.h>

main()
   {
   int mode, driver, x_scr, y_scr, x_prev, y_prev;
   int x, y;

   driver =  VGA;
   mode = VGAHI;
   initgraph (&driver, &mode, "a:\\c_prog");

   x_prev = 10;		//origin
   y_prev = 240;

   setbkcolor (RED);
   setcolor(BLUE);
   setlinestyle (SOLID_LINE, 2, 3);
   for (x=10; x<=600; x+=50)
      {
      circle (x, 100, 15);
      setfillstyle (((x-10)/50)%11, YELLOW);
      floodfill (x, 100, BLUE);
      }
   //nosound();

   getch();
   closegraph();
   }
