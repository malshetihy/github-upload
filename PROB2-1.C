	
	#include<stdio.h>
	int main(void)
	{
	char MenuChoice;
	while(1==1)
		{
		printf("\n\n\n\t\t\tMain Menu");
		printf("\n\t\t\ta  New File");
		printf("\n\t\t\tb  Open File");
		printf("\n\t\t\tc  Edit File");
		printf("\n\t\t\td  Save File");
		printf("\n\t\t\te  Quit");
		printf("\n\n\n\tSelect an Item >");
		scanf("\n%c",&MenuChoice);
		if (MenuChoice < 'a'|| MenuChoice >'e')
			printf("%c\nError in your choice",7);
		else 
			break;
		}
	}
