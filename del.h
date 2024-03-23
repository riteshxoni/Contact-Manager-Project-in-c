void del()
{
	int n,found=0;
	char ch2;
	system("cls");
	system("color 0b");
	printf("################################################ Delete Contact ###########################################\n");
	printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  _ _ _ _ _ _ _ _ _  _ _ _ _ _ _\n\n");
	printf("\nEnter Serial Number : ");
	scanf("%d",&n);
	FILE *fp1;
	fp1=fopen("info.dat","rb");
	while((fread(&cont,sizeof(cont),1,fp1))!=NULL)
	{
		printf("\n");
		if(cont.sno == n)
		{
			printf("SNo : %d|",cont.sno);
			printf("Name : %s|",cont.name);
			printf("Category : %s|",cont.category);
			printf("Gender : %c|",cont.gender);
			printf("Age : %d|",cont.age);
			printf("Address : %s|",cont.address);
			printf("Email : %s|",cont.email);
			printf("Phone : %s|",cont.phone);
			found=1;
			fflush(stdin);
			getch();
			break;
		}
	}
	if(found==1)
	{
		FILE *fp2;
		fflush(stdin);
		printf("\nDelete it y/n : ");
		scanf("%c",&ch2);
		if(ch2=='y' || ch2=='Y')
		{
			rewind(fp1);
			fp2=fopen("temp.dat","wb");
			while((fread(&cont,sizeof(cont),1,fp1)) != NULL)
			{
				if(cont.sno != n)
				{
					fwrite(&cont,sizeof(cont),1,fp2);
				}
			}
			fclose(fp1);
			fclose(fp2);
			remove("info.dat");
			rename("temp.dat","info.dat");
			printf("\n");
			printf("Successfully deleted, Press any key...");
			getch();
		}
	}
	else
	{
		fclose(fp1);
		printf("\nNot found, Press any key...");
		getch();
		return;
	}
}