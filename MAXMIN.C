

 #include <stdio.h>
 #include <conio.h>


 /* ascending order for data1 use > &
 decending order use < inside the if statment */

 main ()
 {
int i , j , mt=16 ;      /* mt = no of data */
int temp ;
int data1[16] , data2[16] ;
 data1[0]= 6    ;  data1[1] =2 ; data1[2]= 3 ;data1[3] = 10  ;data1[4]=12 ;
 data1[5]= 7    ;  data1[6] =0 ; data1[7]=15 ;data1[8] = 10  ;data1[9]=11 ;
 data1[10]= 4    ;  data1[11] =5 ; data1[12]= 3 ;data1[13] = 16  ;data1[14]=20 ;
 data1[15]=1 ;

 data2[0]= 0    ;  data2[1] =1 ; data2[2]= 2 ;data2[3] = 3   ;data2[4]=4  ;
 data2[5]= 5    ;  data2[6] =6 ; data2[7]=7  ;data2[8] = 8   ;data2[9]=9  ;
 data2[10]= 10   ;  data2[11] =11; data2[12]=12 ;data2[13] =13   ;data2[14]=14 ;
 data2[15]=15;



	for(i = 0    ;i< mt ; i++)
		{
		for(j = 0 ;j <mt-1  ; j++)
			 {

			 if ( data1[j]  > data1[j+1] )
				  {
				   temp =data1[j] ;
				   data1[j] = data1[j+1] ;
				   data1[j+1]  = temp ;

				   temp =data2[j] ;
				   data2[j] = data2[j+1] ;
				   data2[j+1]  = temp ;
				   }          /* end of if */
			 }                    /* end of for j */
		}                             /* end of for i */

  clrscr();
  for ( i=0 ; i < mt ; i++)
  { printf(" data1[%i] = %i ",i,data1[i] ) ;
    printf(" data2[%i] = %i \n",i,data2[i] ) ;

   }

 getch();

  }                                           /* end of main fun. */
