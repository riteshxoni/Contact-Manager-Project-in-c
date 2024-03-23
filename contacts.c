#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include"my_header.h"

struct contact
{
	int sno;
	char category[30];
	char name[30];
	char gender;
	int age;
	char address[60];
	char email[50];
	char phone[12];
}cont;
#include"getsn.h"
#include"del.h"
#include"add.h"
#include"display.h"
#include"edit.h"
#include"search.h"
#include"change.h"

void main()
{
	void add();
	void display();
	char pass[30],ch;
	system("color 0a");
	system("cls");
	printf("Enter the Password : ");
	int i=0;
	while(1)
	{
		ch=getch();
		if(ch==13) //ASCII code ENTER Key
		{
			pass[i]='\0';
			break;
		}
		pass[i]=ch;
		i++;
		printf("*");
	}
	char orignal[30];
	FILE *fp;
	fp=fopen("password.dat","r");
	fgets(orignal,30,fp);
	fclose(fp);

	if(strcmp(orignal,pass)!=0)
	{
		printf("\nIncorrect Password.\nPress any key...");
		getch();
		exit(0);
	}
	else
	{
		system("color 09");
		system("cls");
		printf("##################### CONTACT MANAGER ####################\n\n");
		printf("################### Version No. : 1.0 ####################\n\n");
		printf("########### Devoloped by : Anisha's Ritesh Soni ##########\n\n");
		printf("Please Wait ");
		for(i=1;i<=45;i++)
		{
			printf("%c",254);
			delay(.1);
		}
		while(1)
		{
			system("cls");
			system("color 0c");
			printf("################## MAIN MENU #################\n");
			printf("            _ _ _ _ _ _ _ _ _ _ _ _           \n\n");
			printf("     1. > Add New Contact\n");
			printf("     2. > Delete Contact\n");
			printf("     3. > Edit Contact\n");
			printf("     4. > Search Contact\n");
			printf("     5. > List Contacts\n");
			printf("     6. > Change Password\n");
			printf("     7. > Exit\n");
			printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n");
			printf("Enter Your Choice ? : ");
			char ch1;
			scanf("%c",&ch1);
			switch(ch1)
			{
				case '1':
					add();
					break;
				case '2':
					del();
					break;
				case '3':
					edits();
					break;
				case '4':
					srch();
					break;
				case '5':
					display();
					break;
				case '6':
					change();
					break;
				case '7':
					exit(0);
			}
		}
		getch();
	}
}