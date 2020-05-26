	
	#include<stdio.h>
	main()  	/* simple menu selection */
	{
	int slct;
	while (1==1)
		 {
		printf("\n\n\n\t\t\t\t   ---MENU---");             						
		printf("\n\n\t\t\t\t----------------");
		printf("\n\n\t\t\t\t1 - COMMAND NO.1");
		printf("\n\n\t\t\t\t2 - COMMAND NO.2");
		printf("\n\n\t\t\t\t3 - COMMAND NO.3");
		printf("\n\n\t\t\t\t4 - COMMAND NO.4");
		printf("\n\n\t\t\t\t5 - COMMAND NO.5");
		printf("\n\n\nType any charcter other than 1 through 5 to quit ,");
		printf("\nWhat is your selection > ");
		scanf("%d",&slct);
		if (slct < 1 || slct > 5) 	exit ();
		else printf("\n\n\nYou choose COMMAND NO.%d",slct);
		}
	}

