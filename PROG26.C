
	#include<stdio.h>

	int nmbr[10];	/*array of numbers used by all modules */
			/*an arithmetic quiz program */
	main()
	{
		char choice;

		choice = 'x';
		initlze();
		while(1==1)
		{
			printf("\n\n\n\n\n\t\t\tARITHMETIC QUIZ");
			printf("\n\n\n\n\n");
			printf("\t\t\t1 - Addition test\n\n");
			printf("\t\t\t2 - Subtraction test\n\n");
			printf("\t\t\t3 - Multiplication test\n\n");
			printf("\t\t\t4 - Division test\n\n");
			printf("\t\t\t5 - Quit\n\n");
			printf("\n\n\n\n\n\t\t\tWhat is your choice > ");
			scanf("\n%c",&choice);
			if(choice =='1')	addtest();
			else if(choice =='2')	subtest();
			else if(choice =='3')	multest();
			else if(choice =='4')	divtest();
			else if(choice =='5')	break    ;
			else printf("\n%c",7);
		}
	}

	/************************************************************/

	initlze()
	{
		nmbr[0] = 3 ;nmbr[1] = 5 ; nmbr[2] = 0 ;nmbr[3] = 9 ; nmbr[4] = 6 ;
		nmbr[5] = 1 ;nmbr[6] = 7 ; nmbr[7] = 2 ;nmbr[8] = 8 ;nmbr[9] = 4 ;
	}

	/****************************************************************/

	addtest()
	{
		int cntrA,cntrB,diff,answer;
		char again;

		cntrA = 0;
		diff = 1;
		cntrB = cntrA + diff;
		while(1==1)
		{
			printf("\n\n\n\n\n\n");
			printf("\t\t\tADDITION QUIZ");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\t\t\t\t%d + %d = ",nmbr[cntrA],nmbr[cntrB]);
			scanf("%d",&answer);
			if (answer == nmbr[cntrA] + nmbr[cntrB])	printf("\nThat is right !!");
			else
			{
				printf("\nThat is wrong !?\n");
				printf("The answer is %d",nmbr[cntrA] + nmbr[cntrB]);
			}
			printf("\n\nDo you want to try another (Y/N) ? ");
			scanf("\n%c",&again);
			if(again != 'Y' && again != 'y')	break;
			else
			{
				cntrA = cntrA + 2;
				if(cntrA > 9)
				{
					cntrA = cntrA - 10;
					diff = diff + 1;
				}
				if(diff > 9)   		diff = 2;
				cntrB = cntrA + diff;
				if(cntrB > 9)		cntrB = cntrB - 10;
			}
		}
	}

	/**************************************************************/

	subtest()
	{
		int cntrA,cntrB,diff,answer;
		char again;

		cntrA = 2;
		diff = 3;
		cntrB = cntrA + diff;
		while(1==1)
		{
			if(nmbr[cntrA] < nmbr[cntrB])		again = 'Y';
			else
			{
				printf("\n\n\n\n\n\n");
				printf("\t\t\tSUBTRACTION QUIZ");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				printf("\t\t\t\t%d - %d = ",nmbr[cntrA],nmbr[cntrB]);
				scanf("%d",&answer);
				if(answer == nmbr[cntrA] - nmbr[cntrB])		printf("\nThat is right !!");
				else
				{
					printf("\nThat is wrong\n");
					printf("The answer is %d",nmbr[cntrA] - nmbr[cntrB]);
				}
				printf("\n\nDo you want to try another (Y/N) ? ");
				scanf("\n%c",&again);
			}
			if (again != 'Y' && again != 'y' )		break;
			else
			{
				cntrA = cntrA + 2;
				if (cntrA > 9)
				{
					cntrA = cntrA - 10;
					diff = diff + 1;
				}
				if (diff > 9)		diff = 2;
				cntrB = cntrA + diff;
				if (cntrB > 9)		cntrB = cntrB - 10;
			}
		}
	}

	/***************************************************************/

	multest()
	{
		int cntrA,cntrB,diff,answer;
		char again;

		cntrA = 4;
		diff = 5;
		cntrB = cntrA + diff;
		while(1==1)
		{
			printf("\n\n\n\n\n\n");
			printf("\t\t\tMULTIPLICATION QUIZ");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\t\t\t\t%d x %d = ",nmbr[cntrA],nmbr[cntrB]);
			scanf("%d",&answer);
			if (answer == nmbr[cntrA] * nmbr[cntrB])		printf("\nThat is right !!");
			else
			{
				printf("\nThat is wrong !?\n");
				printf("The answer is %d",nmbr[cntrA] * nmbr[cntrB]);
			}
			printf("\n\nDo you want to try another (Y/N) ? ");
			scanf("\n%c",&again);
			if (again != 'Y' && again != 'y' )		break;
			else
			{
				cntrA = cntrA + 2;
				if (cntrA > 9)
				{
					cntrA = cntrA - 10 ;
					diff = diff + 1;
				}
				if (diff > 9)		diff = 2;
				cntrB = cntrA + diff;
				if (cntrB > 9)		cntrB = cntrB - 10;
			}
		}
	}

	/***************************************************************/

	divtest()
	{
		int cntrA,cntrB,diff,answer,remainder;
		char again;

		cntrA = 3;
		diff = 4;
		cntrB = cntrA + diff;
		while(1==1)
		{
			if ( nmbr[cntrA] < nmbr[cntrB] || nmbr[cntrB] == 0 )		again = 'Y';
			else
			{
				printf("\n\n\n\n\n\n");
				printf("\t\t\tDIVISION QUIZ");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				printf("\t\t\t\t%d / %d = ",nmbr[cntrA],nmbr[cntrB]);
				scanf("%d",&answer);
				printf("\nWhat is the remainder > ");
				scanf("%d",&remainder);
				if (answer == nmbr[cntrA] / nmbr[cntrB] && remainder == nmbr[cntrA] % nmbr[cntrB] )		printf("\nThat is right !!");
				else
				{
					printf("\nThat is wrong !?\n");
					printf("The answer is %d  And the is remainder %d",nmbr[cntrA]/nmbr[cntrB],nmbr[cntrA]%nmbr[cntrB]);
				}
				printf("\n\nDo you want to try another (Y/N) ? ");
				scanf("\n%c",&again);
			}
			if (again != 'Y' && again != 'y')		break;
			else
			{
				cntrA = cntrA + 2;
				if (cntrA > 9)
				{
					cntrA = cntrA - 10;
					diff = diff + 1;
				}
				if ( diff > 9)		diff = 2;
				cntrB = cntrA + diff;
				if (cntrB > 9)		cntrB = cntrB - 10;
			}
		}
	}

	/************************************************************/



































