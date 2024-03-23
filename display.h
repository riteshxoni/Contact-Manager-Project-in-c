void display()
{
	system("cls");
	system("color 0a");
	int i=0;
	printf("################################################ LIST OF CONTACTS ###########################################\n");
	printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  _ _ _ _ _ _ _ _ _  _ _ _ _ _ _ _\n\n");
	FILE *fp;
	fp = fopen("info.dat","rb");
	while ((fread(&cont,sizeof(cont),1,fp))!=NULL)
	{
		printf("SNo : %d|",cont.sno);
		printf("Name : %s|",cont.name);
		printf("Category : %s|",cont.category);
		printf("Gender : %c|",cont.gender);
		printf("Age : %d|",cont.age);
		printf("Address : %s|",cont.address);
		printf("Email : %s|",cont.email);
		printf("Phone : %s|",cont.phone);
		i++;
		printf("\n");
	}
	printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  _ _ _ _ _ _ _ _ _  _ _ _ _ _ _ _\n\n");
	fclose(fp);
	printf("\nPress any key...");
	getch();
}