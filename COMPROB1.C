
	#include<stdio.h>
		   
	double VCC,VRC,VRE,VCE,VBE,VBB;
	double IC;
	double RC,RE,R1,R2,RB;
	char again ; 
	int slct ,cntr;

	main()
	{
	clrscrn();
	printf("\n WARNING :");
	printf("\n -------");
	printf("\n\n THE FOLLOWING ANALYSIS CAN ONLY BE APPLIED"); 
	printf("\n   TO  TRANSISTORS  OPERATING  IN  ACTIVE  OR ");
	printf("\n SATURATION MODES !? ");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\nPRESS ANY KEY TO CONTINUE > ");
	getch ();
	clrscrn();
	while ( 1==1 )
		{
		clrscrn();
		printf("\nTRANSISTOR ANALYSIS");
		printf("\n-------------------");
		printf("\n\n\nEnter the following data in kOhm , mAmp , Volt units : ");
		printf("\n VCC = ");                          
		scanf("%lf",&VCC);
		printf("\n RC = ");
		scanf("%lf",&RC);
		printf("\n RE = ");
		scanf("%lf",&RE);
		printf("\n R1 = ");
		scanf("%lf",&R1);
		printf("\n R2 = ");
		scanf("%lf",&R2);
		printf("\nAre you  satisfied  with  these data"); 
		printf("\nor do you want to change them before"); 
		printf("\ncontinuing : ");
		printf("\n1-CONTINUE ");
		printf("\n2-CHANGE   ");
		printf("\n\nWhat is your selection > ");
		scanf("%d",&slct);
		if (slct == 2)	{continue;}

       		VBE = 0.7;                     /* the solution method */
		RB = (R1*R2)/(R1+R2) ;
		VBB = (VCC*R2)/(R1+R2);
		IC = (VBB - VBE)/RE ;
		VRC = IC*RC;
		VRE = IC*RE;
		VCE = VCC- IC*(RC+RE);
		clrscrn();
		printf("\n\n\n Assuming that IC = IE  approx. : ");
		printf("\n\n IC = %lf",IC);
		printf("\n VRC = %lf",VRC);
		printf("\n VRE = %lf",VRE);
		printf("\n VCE = %lf",VCE);
		if (VCE > 0.2)		
			{ printf("\n\n\nThe transistor is in its active mode of operation . ");}
		else if (VCE <= 0.2)	
			{ printf("\n\n\nThe transistor is saturated . "); }		
		printf("\n\n\n Solve another circuit (Y/N) > ");		
		scanf("\n%c",&again);
		if (again == 'n'|| again =='N') 	exit ();
		}
	}
	clrscrn()
	{
	cntr = 0;
	while ( cntr != 25 )
		{
		printf("\n");
		cntr = cntr + 1;
		}
	}