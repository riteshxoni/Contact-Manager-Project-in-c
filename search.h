#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void Serial_no()
{
    system("cls");
    int n,found=0;
    printf("Enter Serial Number : ");
    scanf("%d",&n);
    FILE *fp;
    fp=fopen("info.dat","r");
    while(fread(&cont,sizeof(cont),1,fp)!=NULL)
    {
        if(cont.sno==n)
        {
            printf("\nContact Found :");
            printf("\nSerial No. : %d",cont.sno);
            printf("\nName : %s",cont.name);
            printf("\nCategory : %s",cont.category);
            printf("\nGenger : %c",cont.gender);
            printf("\nAddress : %s",cont.address);
            printf("\nEmail : %s",cont.email);
            printf("\nPhone : %s",cont.phone);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("\nNot Found, Press any key...");
        fclose(fp);
        getch();
        return;
    }
    fclose(fp);
    printf("\nPress any key...");
    getch();
}
void category()
{
    system("cls");
    int found=0;
    char category[30];
    fflush(stdin);
    fflush(stdin);
    printf("\nEnter Category : ");
    gets(category);
    FILE *fp;
    fp=fopen("info.dat","r");
    while(fread(&cont,sizeof(cont),1,fp)!=NULL)
    {
        if(strcmpi(category,cont.category)==0)
        {
            printf("\nSerial No. : %d |",cont.sno);
            printf("Name : %s |",cont.name);
            printf("Category : %s |",cont.category);
            printf("Genger : %c |",cont.gender);
            printf("Address : %s |",cont.address);
            printf("Email : %s |",cont.email);
            printf("Phone : %s",cont.phone);
            found++;
        }
    }
    printf("\nTotal %d Contacts found in %s Category",found,category);
    if(found==0)
    {
        printf("\nNot Found. Press any key...");
        getch();
        fclose(fp);
        return;
    }
    fclose(fp);
    printf("\nPress any key...");
    getch();
}
void name()
{
    system("cls");
    char name[30];
    int found=0;
    fflush(stdin);
    fflush(stdin);
    fflush(stdin);
    fflush(stdin);
    printf("\nEnter Contact Name : ");
    gets(name);
    FILE *fp;
    fp=fopen("info.dat","r");
    while(fread(&cont,sizeof(cont),1,fp)!=NULL)
    {
        if(strcmpi(name,cont.name)==0)
        {
            printf("\nContact Found :");
            printf("\nSerial No. : %d",cont.sno);
            printf("\nName : %s",cont.name);
            printf("\nCategory : %s",cont.category);
            printf("\nGenger : %c",cont.gender);
            printf("\nAddress : %s",cont.address);
            printf("\nEmail : %s",cont.email);
            printf("\nPhone : %s",cont.phone);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("\nNot Found. Press any key...");
        getch();
        fclose(fp);
        return;
    }
    fclose(fp);
    printf("\nPress any key...");
    getch();
}
void phone()
{
    system("cls");
    int found=0;
    char phone[12];
    fflush(stdin);
    fflush(stdin);
    printf("Enter Phone Number : ");
    gets(phone);
    FILE *fp;
    fp=fopen("info.dat","r");
    while(fread(&cont,sizeof(cont),1,fp)!=NULL)
    {
        if(strcmp(phone,cont.phone)==0)
        {
            printf("\nContact Found :");
            printf("\nSerial No. : %d",cont.sno);
            printf("\nName : %s",cont.name);
            printf("\nCategory : %s",cont.category);
            printf("\nGenger : %c",cont.gender);
            printf("\nAddress : %s",cont.address);
            printf("\nEmail : %s",cont.email);
            printf("\nPhone : %s",cont.phone);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("\nNot Found. Press any key...");
        getch();
        fclose(fp);
        return;
    }
    fclose(fp);
    printf("\nPress any key...");
    getch();
}
void srch()
{
    while(1)
    {
        system("cls");
        system("color 0d");
        printf("\n######################## SEARCH CONTACTS ########################\n");
        printf("\n-----------------------------------------------------------------\n");
        printf("\n1. >  Search by Serial Number");
        printf("\n2. >  Search by Category ");
        printf("\n3. >  Search by Name ");
        printf("\n4. >  Search by Phone No. ");
        printf("\n5. >  Back to Menu ");
        printf("\n-----------------------------------------------------------------\n");
        printf("\nEnter Your Choice : ");
        char ch=getche();
        switch(ch)
        {
            case '1':
            Serial_no();
            break;
            case '2':
            category();
            break;
            case '3':
            name();
            break;
            case '4':
            phone();
            break;
            case '5':
            return;
        }
    }
}