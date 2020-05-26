#include <stdio.h>
#include <conio.h>

#define NUM_STUD 3
#define NUM_SUBJ 2

main()
   {
   float mark[NUM_STUD][NUM_SUBJ], total[NUM_STUD];
   int stud, subj;

   clrscr();
   for (stud=0; stud<NUM_STUD; stud++)
      {
      total[stud]=0;
      for (subj=0; subj<NUM_SUBJ; subj++)
	 {
	 gotoxy (subj*30+20, 3+stud);
	 printf ("Student %d, Subject %d: ", stud, subj);
	 scanf ("%f", &mark[stud][subj]);
	 total[stud] += mark[stud][subj];
	 }
      gotoxy (75, 3+stud);
      printf ("%.2f", total[stud]);
      }
   }
