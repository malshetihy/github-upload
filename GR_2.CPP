#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

#define PI 3.14
main()
   {
   int mode, driver, x_scr, y_scr;
   double x, y;

   driver =  VGA;
   mode = VGAHI;
   initgraph (&driver, &mode, "a:\c_prog");

   for (x=0.0; x<(4*PI); x+=0.01)
      {

      y = sin(x);
      x_scr = 10 + x * 620 / (4*PI);
      y_scr = 240 - y * 240 ;
      //gotoxy (x_scr/8, y_scr/10); printf ("GGG");
      putpixel (x_scr, y_scr, WHITE);
      }

   getch();
   closegraph();
   }
