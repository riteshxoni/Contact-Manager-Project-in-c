void add()
{
	system("cls");
	system("color 09");
	printf("Add New Contact \n");
	printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
	cont.sno=getsn();
	printf("\nSerial Number : %d",cont.sno);
	fflush(stdin);//clear input buffer
	printf("\nEnter Category (Friend/PG/Salesman/Customer/Student) : ");
	gets(cont.category);
	fflush(stdin);
	printf("\nEnter Name : ");
	gets(cont.name);
    fflush(stdin);
	printf("\nEnter Gender : ");
	scanf("%c",&cont.gender);
	fflush(stdin);
	printf("\nEnter Age : ");
	scanf("%d",&cont.age);
	fflush(stdin);
	printf("\nEnter Address : ");
	gets(cont.address);
	fflush(stdin);
	printf("\nEnter Email : ");
	gets(cont.email);
	fflush(stdin);
	printf("\nEnter Phone Number : ");
	gets(cont.phone);
	FILE *fp;
	fp = fopen("info.dat","ab");
	fwrite(&cont,sizeof(cont),1,fp);
	fclose(fp);
	printf("\nSuccessfully saved, Press any key...");
	getch();
}