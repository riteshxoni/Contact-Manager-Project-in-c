
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void change()
{
    system("cls");
    system("color 0a");
    char pass[50],orig[50],conf[50];
    fflush(stdin);
    fflush(stdin);
    int i=0;
    char ch;
    printf("\nEnter Your Password : ");
    while(1)
    {
        ch=getch();
        if(ch==13)
        {
            pass[i]='\0';
            break;
        }
        pass[i]=ch;
        printf("*");
        i++;
    }   
    FILE *fp;
    fp=fopen("password.dat","r");
    fgets(orig,sizeof(orig),fp);
    fclose(fp);
    if(strcmp(pass,orig)==0)
    {
        fflush(stdin);
        fflush(stdin);
        printf("\nEnter New Password : ");
        i=0;
        while(1)
        {
            ch=getch();
            if(ch==13)
            {
                pass[i]='\0';
                break;
            }
            pass[i]=ch;
            printf("*");
            i++;
        }
        fflush(stdin);
        printf("\nEnter Confirm Password : ");
        int i=0;
        while(1)
        {
            ch=getch();
            if(ch==13)
            {
                conf[i]='\0';
                break;
            }
            conf[i]=ch;
            printf("*");
            i++;
        }
        if(strcmp(pass,conf)==0)
        {
            fp=fopen("password.dat","w");
            fprintf(fp,conf);
            printf("\nPassword Changed Successfully...");
        }
    }
    else
    {
        printf("\nWrong Password. Press any key...");
        fclose(fp);
        return;
    }
    fclose(fp);
    printf("\nPress any key...");
    getch();
}