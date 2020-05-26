#include <stdio.h>
#include <string.h>

#define SIZE 5
char *names[SIZE] = { "Zizo",
		   "Aya",
		   "Kofta",
		   "Ibrahim",
		   "Sayyed" };

/////////// prototype //////////
void p_swap ( char **, char **);


main()
    {
    int i, j;

    for (i=0; i<SIZE-1; i++)
       {
       for (j=i+1; j<SIZE; j++)
	  {
	  if (strcmp(names[j] , names[i]) < 0)
			// if *names[j] < *names[i]
	     p_swap( &names[j], &names[i]);
	  }
       }
    puts ("Sorted array...");
    for (i=0; i<SIZE; i++)
       printf ("%s\n", names[i]);
    }


void p_swap ( char **p1, char **p2)
   { // p1 and p2 are pointers to pointers to characters
   char *temp;

   temp = *p1;		// p1 contains an address of char
   *p1 = *p2;
   *p2 = temp;	       	// temp contains an address of char
   }

