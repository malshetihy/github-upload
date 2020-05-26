#include <stdio.h>

void prnt_arr (int arr[])
   {
   int i;

   for (i=0; i<4; i++)
      printf ("%d\n", arr[i]);
   }

void prnt_arr_p (int *ptr)
   {
   int i;

   for (i=0; i<4; i++)
      printf ("%d\n", *(ptr+i) );
   }

main()
   {
   int num[] = {7, 2, 5, -3};
   prnt_arr(num);
   prnt_arr_p (num);
   }

