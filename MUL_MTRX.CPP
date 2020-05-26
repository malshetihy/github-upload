	#include <stdio.h>
	#include <conio.h>

	#define SIZE	10

	read_matrix(int matrix[][SIZE], int row, int col)
	  {
	  int x, y;

	  for (x=0; x<row; x++)
	     for (y=0; y<col; y++)
		{
		printf ("Element %d %d: ", x, y);
		scanf ("%d", &matrix[x][y]);
		}
	  }

	main()
	   {

	   int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];
	   int m, n, l;
	   int i, j, k, error_flag;

	   clrscr();
	   error_flag = 0;
	   do {
	      if (error_flag == 0)
		 printf ("Enter m, n, l: ");
	      else
		 printf ("%cEnter m, n, l: ", 7);

	      scanf ("%d %d %d", &m, &n, &l);
	      error_flag = 1;
	      } while (m > SIZE || n > SIZE || l > SIZE);

	   puts ("Matrix A");
	   read_matrix (A, m, n);
	   puts ("Matrix B");
	   read_matrix (B, n, l);

	   clrscr();
	   for (i=0; i<m; i++)		//for all rows of C
	      {
	      for (j=0; j<l; j++)      	//for all columns of C
		 {
		 C[i][j] = 0;
		 for (k=0; k<n; k++)
		    {
		    C[i][j] += A[i][k] * B[k][j];
		    }
		 gotoxy (3+j*5 , 5+2*i);
		 printf ("%d", C[i][j]);
		 }
	      }
/*
	  clrscr();
	  for (i=0; i<m; i++)
	     {
	     for (j=0; j<l; j++)
	       {
	       gotoxy (5+5*i, 3+j*2);
	       printf ("%d", C[i][j]);
	       }
	     }
*/
/*	  printf ("Ú ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
	  printf ("%c", 218);
	  printf ("\xda");//print the character whose ASCII code is DA hex = 218
*/
	  }