#include <stdio.h>
#include <stdlib.h>
#include <alloc.h>

	//two-dimensional dynamic array

	main()
	   {
	   int i, j, rows, columns ;
	   float *arr_ptr, total;

	   printf ("Enter the number of rows: ");
	   scanf ("%d", &rows);
	   printf ("Enter the number of columns: ");
	   scanf ("%d", &columns);
	   arr_ptr = (float *) malloc (rows * columns * sizeof(float));
	   for (i=0; i<rows; i++)
	      {
	      for (j=0; j<columns; j++)
		 {
		 printf ("Enter element number (%d,%d): ", i, j);
		 scanf ("%f", arr_ptr + i*columns + j);
		 }
	      }
	   for (i=0; i<rows; i++)
	      {
	      for (j=0; j<columns; j++)
		 {
		 printf ("%7.2f ", *(arr_ptr + i*columns + j));
		 }
	      printf ("\n");
	      }
	   free (arr_ptr);
	   }
