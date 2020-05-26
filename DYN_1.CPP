#include <stdio.h>
#include <stdlib.h>
#include <alloc.h>

	//one-dimensional dynamic array

	main()
	   {
	   int i, size, free_mem;
	   float *arr_ptr, total;

	   printf ("Enter the number of elements: ");
	   scanf ("%d", &size);
	   free_mem = coreleft();
	   printf ("B4 allocation, free memory = %u\n", (unsigned)free_mem);
	   arr_ptr = (float *) malloc (size * sizeof(float));
	   free_mem = coreleft();
	   printf ("After allocation, free memory = %u\n", (unsigned)free_mem);
	   for (i=0; i<size; i++)
	      {
	      printf ("Enter element number %d: ", i);
	      scanf ("%f", arr_ptr + i);
	      }
	   puts ("The array in reversed order:");
	   total = 0;
	   for (i=size-1; i>=0; i--)
	      {
	      printf ("%f\n", *(arr_ptr+i));
	      total += *(arr_ptr+i);
	      }
	   printf ("Average is %f\n", total/size);
	   free (arr_ptr);
	   free_mem = coreleft();
	   printf ("after free, free memory = %u\n", (unsigned)free_mem);
	   }
