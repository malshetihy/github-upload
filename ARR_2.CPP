#include <stdio.h>
#include <conio.h>


#define MAX_SIZE 20

void read_array (int a[MAX_SIZE])
   {
   int i=0;
   do {
      printf ("Enter element number %d: ", i);
      scanf ("%d", &a[i]);
      } while (a[i++] != 0 && i != MAX_SIZE);
   }

void prnt_array (int a[])
   {
   int i=-1;
   while (a[++i])
      printf ("%d\n", a[i]);
   }

main ()
   {
   int arr[MAX_SIZE];
   read_array (arr);
   prnt_array (&arr[0]);
   getch();
   }
