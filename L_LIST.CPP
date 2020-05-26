	#include<stdio.h>
	#include<stdlib.h>
	#include<conio.h>
	#include<string.h>

       struct worker
	  {
	  char name[16];
	  int age;
	  int salary;
	  struct worker *next;
	  };
       struct worker *first,	// pointer to the 1st element in the list
		     *last;	// pointer to last element

	void add_new_element()
	   {
	   if (!first)	// if the list is empty
	      {
	      last = first = (struct worker *) malloc (sizeof(struct worker));
	      }
	   else
	      {
	      last->next = (struct worker *) malloc (sizeof(struct worker));
	      last = last->next;
	      }

	   printf ("Worker name: ");
	   scanf ("%s", last->name);
	   printf ("Worker age: ");
	   scanf ("%d", &last->age);
	   printf ("Worker salary: ");
	   scanf ("%d", &last->salary);
	   last->next = NULL;	// mark the last element
	   }

	void list_all()
	   {
	   struct worker *current;

	   current = first;
	   while (current)	// current != NULL
	      {
	      printf ("Name: %s, Age: %d, Salary: %d\n",
			current->name, current->age, current->salary);
	      current = current->next;
	      }
	   getch();
	   }

	void search_list()
	   {
	   struct worker *current;
	   char req_name[16];
	   int flag = 0;

	   printf("Enter the name to search: ");
	   scanf ("%s", req_name);
	   current = first;
	   while (current)	// current != NULL
	      {
	      if (strcmp(current->name, req_name) == 0)
		 {
		 printf ("Name: %s, Age: %d, Salary: %d\n",
			current->name, current->age, current->salary);
		 flag = 1;
		 }
	      current = current->next;
	      }
	   if (flag == 0)
	      puts ("Sorry... Cannot find this name");
	   getch();
	   }

	void delete_element()
	   {
	   struct worker *current, *prev;
	   char req_name[16];
	   int flag = 0;

	   printf("Enter the name to delete: ");
	   scanf ("%s", req_name);
	   current = first;
	   while (current)	// current != NULL
	      {
	      if (strcmp(current->name, req_name) == 0)
		 {
		 puts ("Worker has been KILLED!");
		 flag = 1;
		 if (current == first)	// if this is the 1st element
		    first = first->next;
		 else			// not the 1st
		    {
		    prev->next = current->next;
		    }
		 if (current == last)
		    last = prev;		// update last pointer
		 break;
		 }
	      else
		 {
		 prev = current;
		 current = current->next;
		 }
	      }
	   if (flag == 0)
	      puts ("Sorry... Cannot find this name");
	   getch();
	   }

	void save_to_file()
	   {
	   char filename[30];
	   struct worker *current;
	   FILE *fp;

	   printf ("Enter the filenmae to save: ");
	   scanf ("%s", filename);
	   fp = fopen (filename, "w");
	   if (fp == NULL)
	      {
	      puts ("Error opening this file...");
	      }
	   else
	      {
	      current = first;		// point to start of list
	      while (current)
		 {
		 fprintf (fp, "%s\n%d\n%d\n", current->name, current->age, current->salary);
		 current = current->next;
		 }
	      fcloseall();
	      puts ("100 100");
	      }
	   getch();
	   }

	void load_from_file()
	   {
	   char filename[30];
	   FILE *fp;
	   char name[16], temp;

	   printf ("Enter the filename to load from: ");
	   scanf ("%s", filename);
	   fp = fopen (filename, "r");
	   if (fp == NULL)
	      {
	      puts ("Error opening this file...");
	      }
	   else
	      {
	      first = NULL;		// start with an empty list
	      while (1)
		 {
		 if (!fgets(name, 16, fp))	// if eof
		    break;
		 else
		    {
		    if (first == NULL)
		       {
		       last = first = (struct worker *) malloc (sizeof(struct worker));
		       }
		    else
		       {
		       last->next = (struct worker *) malloc (sizeof(struct worker));
		       last = last->next;
		       }
		    name[strlen(name)-1] = '\0';
		    strcpy (last->name, name);
		    //strncpy (last->name, name, strlen(name)-1);
		    fscanf (fp, "%d %d", &last->age, &last->salary);
		    fscanf (fp, "%c", &temp);		// read the \n char
		    last->next = NULL;
		    }

		 }
	      puts ("Kollo tamam");
	      }
	   getch();
	   fcloseall ();
	   }
	int menu()
	   {
	   char ch;

	   clrscr();
	   puts ("       Main Menu");
	   puts ("       ---------");
	   puts (" 1. Add a worker");
	   puts (" 2. List available workers");
	   puts (" 3. Delete a worker");
	   puts (" 4. Search for a worker");
	   puts (" 5. Save to file");
	   puts (" 6. Load from file");
	   puts (" 7. Exit");
	   puts ("\n     Press 1, 2, 3, 4, 5, 6, or 7 ...");
	   do {
	      ch = getch();
	      } while ( ch < '1' || ch > '7');
	   return (int)ch-'0';		// convert character to number
	   }

	void main()
	   {
	   int sel;

	   first = NULL;	// the list is initialy empty
	   while ((sel=menu()) !=7)
		{
		switch (sel)
		   {
		   case 1:			//add
		      add_new_element();
		      break;

		   case 2:
		      list_all();
		      break;

		   case 3:
		      delete_element();
		      break;

		   case 4:
		      search_list();
		      break;

		   case 5:			// save
		      save_to_file();
		      break;

		   case 6:			// load
		      load_from_file();
		      break;

		   }
		}
	   }
