     #include <stdio.h>
     #include <conio.h>

     #define SIZE 10

	read_matrix(float matrix[][SIZE], int row, int col)
	  {
	  int x, y;

	  for (x=0; x<row; x++)
	     for (y=0; y<col; y++)
		{
		printf ("Element %d %d: ", x, y);
		scanf ("%f", &matrix[x][y]);
		}
	  }

     main()
	{
	int i, j, k, n;
	float D[SIZE][SIZE], det, factor;

	printf ("Enter determinant size: ");
	scanf ("%d", &n);

	read_matrix (D, n, n);
	for (i = 0; i<=n-2; i++)		// all diagonal elements
	   {
	   for (j=i+1; j<n; j++)		// all rows under elements
	      {
	      factor = D[j][i]/D[i][i];
	      for (k=0; k<n; k++)		// all elements in current row
		 {
		 D[j][k] = D[j][k] - factor*D[i][k];
		 }
	      }
	   }

	det = 1;
	for (i=0; i<n; i++)
	   det = det * D[i][i];

	printf ("The determinant value is %.2f\n", det);
	}
