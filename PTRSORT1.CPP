#include <stdio.h>

#define SIZE 4

void swap ( int *, int *);

main()
   {
   int arr[SIZE] = { 3, 8, 2, 5};
   int i, j;

   for (i=0; i<SIZE-1; i++)		// for all elements but the last
      {
      for (j = i+1; j<SIZE; j++)
	 {
	 if (arr[j] > arr[i])
	    swap (&arr[i], &arr[j]);
	 }
      }

   puts ("Sorted aray:");
   for (i=0; i<SIZE; i++)
      printf ("%d\n", arr[i]);
   }

void swap ( int *p1, int * p2 )
   {
   int temporary;

   temporary = *p1;
   *p1 = *p2;
   *p2 = temporary;
   }
