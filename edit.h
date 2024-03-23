void edits()
{
    FILE *fp;
    int n,pos,found=0;
    system("cls");
    system("color 0e");
    printf("############################## EDIT CONTACT ############################\n");
    printf("\nEnter Serial Number : ");
    scanf("%d",&n);

    fp=fopen("info.dat","r+b");
    while((fread(&cont,sizeof(cont),1,fp)) != NULL)
    {
        if(cont.sno==n)
        {
            found=1;
            printf("\nSerial Number : %d",cont.sno);
            printf("\nName : %s",cont.name);
            printf("\nCategory : %s",cont.category);
            printf("\nGender : %c",cont.gender);
            printf("\nAddress : %s",cont.address);
            printf("\nPhone : %d",cont.phone);
            printf("\nAge : %d",cont.age);
            printf("\nEmail : %s",cont.email);
            break;
        }
    }
    if(found==0)
    {
        printf("\nNot Found. Press any key...");
        fclose(fp);
        getch();
        return;
    }
    printf("\n===================>Enter New Data<======================\n");
    pos = ftell(fp);
    fseek(fp,pos-sizeof(cont),SEEK_SET);
    fflush(stdin);
    printf("\nEnter Category (Friend/PG/Salesman/Customer/Student) : ");
    gets(cont.category);
    fflush(stdin);
    printf("\nEnter Name : ");
    gets(cont.name);
    fflush(stdin);
    printf("\nEnter gender : ");
    scanf("%c",&cont.gender);
    printf("\nEnter Age : ");
    scanf("%d",&cont.age);
    fflush(stdin);
    printf("\nEnter Address : ");
    gets(cont.address);
    fflush(stdin);
    printf("\nEnter Phone No. : ");
    gets(cont.phone);
    fflush(stdin);
    printf("\nEnter Email : ");
    gets(cont.email);
    fwrite(&cont,sizeof(cont),1,fp);
    fclose(fp);
    printf("\nSuccessfully Updated, Press any key...");
    getch();
}