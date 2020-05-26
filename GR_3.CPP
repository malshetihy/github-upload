#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <dos.h>

#define PI 3.14
main()
   {
   int mode, driver, x_scr, y_scr, x_prev, y_prev;
   double x, y;

   driver =  VGA;
   mode = VGAHI;
   initgraph (&driver, &mode, "a:\\c_prog");

   x_prev = 10;		//origin
   y_prev = 240;

   setcolor (RED);		//x-axis
   line (10, 240, 629, 240);
   line (619, 230, 629, 240);
   line (619, 250, 629, 240);
   setcolor (YELLOW);
   line (10, 10, 10, 240);
   setcolor(BLUE);
   for (x=0.0; x<=(4*PI)+.1; x+=0.1)
      {
      y = sin(x);
      x_scr = 10 + x * 620 / (4*PI);
      y_scr = 240 - y * 230 / 1;
      line (x_prev, y_prev, x_scr, y_scr);
      x_prev = x_scr;
      y_prev = y_scr;
      putpixel (x_scr, y_scr, WHITE);
      //getch();
      sound (y_scr*2 + 100);
      delay (10);
      }
   nosound();

   setcolor(GREEN);
   settextstyle (GOTHIC_FONT, HORIZ_DIR, 6);
   outtextxy (12, 100, "Sin(x)");
   getch();
   closegraph();
      }
