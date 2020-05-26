	
	#include<stdio.h>
	float Areaoftriangle(float,float);
	main()    	/* calculate the area of a right triangle */
	{
	float Area,Base,Altitude;
	char dummy ;
	while (1==1)
		{
		printf("\nEnter The Length Of The Base > ");
		if (scanf("%f",&Base) == 0 )			break;
		printf("\nEnter The Height Of The Altitude > ");			
		if (scanf("%f",&Altitude) == 0 )		break;			
		Area = Areaoftriangle(Base,Altitude);
		printf("\nThe area of the triangle equals %f.",Area );
		dummy = ' ';
		while (dummy != 'y' && dummy != 'Y' && dummy != 'n' && dummy != 'N' )
			{
			printf("\n\nDo you want to calculate another one (Y/N) > ");
			scanf("\n%c",&dummy);
			if (dummy == 'y' || dummy == 'Y')	break  ;
			if (dummy == 'n' || dummy == 'N')	exit ();
			printf("\n%c",7);
			}
		}
	 }

	float Areaoftriangle(float x ,float y )     	/* calculate the area of a right triangle */
	{
	 return   0.5 * x * y ;	
	}
	
