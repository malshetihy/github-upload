
	#include<stdio.h>

	main()		/* print a real number in scientific notation */
	{                    /* with three digits of precision */
		double RlNmbr;
		char dummy ;

		while(1==1)
		{
			dummy = ' ';
			printf("\nType a real number > ");
			if ( scanf("\n%lf",&RlNmbr) == 0 )	break ;
			printf("\nThe value in scientific notation is %.3e.\n",RlNmbr);
			while (dummy != 'y' && dummy != 'Y' && dummy != 'n' && dummy != 'N' )
			{
				printf("\nDo you want to type another one (Y/N) > ");
				scanf("\n%c",&dummy);
				     if ( dummy =='n' || dummy =='N')	exit ();
				else if ( dummy =='y' || dummy =='Y')	break  ;
				printf("\n%c",7);
			}
		}
	}



