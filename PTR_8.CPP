int arr[4][3] = { { 1, 2, 3},
		  { 12, 14, 18},
		  { -8, 9, 3},
		  { 23, 6, 1} };


#include <stdio.h>

main()
   {
   int row, col;

   for (row = 0; row < 4; row++)
      {
      for (col = 0; col < 3; col++)
	printf ("%+03d ", *(*(arr+row)+col));
      printf ("\n");
      }
   }

