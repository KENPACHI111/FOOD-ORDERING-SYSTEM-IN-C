#include <stdio.h>   // Required for FILE, fopen, printf, scanf
#include <stdlib.h>  // Optional


extern int order_count;
extern int totalcost;
extern int served_count;
struct signin
{
    char fname[25];
    char lname[25];
    char username[25];
    char address[100];
    int number[11];
    char password[25];
};


int Registration()
{
    FILE*Kutumbari;
    Kutumbari=fopen("Kutumbari1.txt","w");
    struct signin f;

    gotoxy(10,6);
    printf("Enter Frist name: ");
    scanf("%s",f.fname);

    gotoxy(10,8);
    printf("Enter Last name: ");
    scanf("%s",f.lname);

    gotoxy(10,10);
    printf("Enter username: ");
    scanf("%s",f.username);

    gotoxy(10,12);
    printf("Enter your address: ");
    scanf("%s",f.address);

    gotoxy(10,14);
    printf("Enter your Number: ");
    scanf("%s",f.number);

    gotoxy(10,16);
    printf("Enter your password: ");
    scanf("%s",f.password);
    fwrite(&f,sizeof(f),1,Kutumbari);
    fclose(Kutumbari);

    loading();
    system("CLS");



    gotoxy(10,6);
    printf("Your User name is %s\n",f.username);

    gotoxy(10,8);
    printf("Now Sign-in to Kutum - bari with your userID and password");

    gotoxy(10,10);
    printf("Press enter to continue : ...");

    getch();
    system("CLS");

    signin();
}
