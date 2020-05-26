#include<stdio.h>

#define MSG1 puts("Message 1");
#define MSG2 puts("Message 2")

main()
   {
   int i;
   printf ("Enter 1 or 2");
   scanf ("%d", &i);
   if (i==1) MSG1
   else MSG2 ;

   MSG1
   getch();
   }

