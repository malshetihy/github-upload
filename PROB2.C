
	#include<stdio.h>

	main()
	{
	char optn;

	while(1==1)
		{
		clrscrn();
		printf("\n\tMain Menu");
		printf("\n\ta  New File");
		printf("\n\tb  Open File");
		printf("\n\tc  Edit File");
		printf("\n\td  Save File");
		printf("\n\te  Quit");
		printf("\nSelect an Item >");
		scanf("\n%c",&optn);
		     if (optn=='a')     	NwFile();
		else if (optn=='b')		OpnFile();
		else if (optn=='c')		EdtFile();
		else if (optn=='d')		SvFile();
		else if (optn=='e')		break;
		while(optn != 'a' && optn != 'b'&& optn!='c' && optn!='d'&& optn != 'e')
			{
			printf("\nWrong Choice ");
			printf("\nTry again > ");
			scanf("\n%c",&optn);
			}
		}
	}
