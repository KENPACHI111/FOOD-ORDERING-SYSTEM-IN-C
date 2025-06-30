#include <stdio.h>   // For FILE, fopen, printf, scanf
#include <stdlib.h>  // Optional: For other standard library functions
#ifndef GOTOXY_H
#define GOTOXY_H

void gotoxy(int x, int y);

#endif

#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int order_count = 0, served_count = 0, waiting_now = 0,totalcost=0;
struct signin
{
    char fname[25];
    char lname[25];
    char username[25];
    char address[100];
    int number[11];
    char password[25];
};

int signin()
{
    char username[25];
    char password[25];
    FILE*Kutumbari;
    Kutumbari=fopen("Kutumbari1.txt","r");
    struct signin f;

    gotoxy(20,3);
    printf("UserName: ");

    scanf("%s",&username);
    gotoxy(20,6);
    printf("Password: ");
    scanf("%s",&password);

    while (fread(&f,sizeof(f),1,Kutumbari))
    {
        if(strcmp(username,f.username)==0 && strcmp(password,f.password)==0)
        {
            system("CLS");
            loading();
            system("CLS");
            gotoxy(20,6);
            printf("\n\t\t\tCongratulations!! You have successfully logged in...\n ");


            welcome();

            printf("\n\n\n\t\t\tChoose any option : ");
            printf("\n\n\t\t\t\t\t1. Order\n");
            printf("\n\t\t\t\t\t2. Awaiting Food List\n");
            printf("\n\t\t\t\t\t3. Information  \n");
            printf("\n\t\t\t\t\t4. Exit\n");
        }
        else
        {
            system("CLS");
            loading();
            system("CLS");

            gotoxy(10,10);
            printf("\n\t\tOops! Wrong userID or password.Please enter the correct userID and password\n\n");

            gotoxy(10,2);
            signin();
        }
    }
    fclose(Kutumbari);
}
