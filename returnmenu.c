


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


struct order
{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
} p[10000];

int  returnMenu()
{
    int n, in, qu;
    p[order_count].order_number = 10000+order_count;

    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;

level:

    printf("\n\n\t\t  1: BreakFast  2: Lunch  3: Dinner  4: Others  5: Tea And Drinks \n\t\t\t");
    scanf ("%d", &in);
    getchar();
    switch(in)
    {

    case 1:
        system("CLS");
        Breakfast();
        break;
    case 2 :
        system("CLS");
        lunch();
        break;
    case 3 :
        system("CLS");
        Dinner();
        break;
    case 4 :
        system("CLS");
        Others();
    case 5 :
        system("CLS");
        teaDrinks();
        break;

    default :
    {

        printf ("\n\n\t\t\tInvalid selection try again\n");
        n++;
    }
    }


    char temp;

    printf ("\n\n\t\t\tDo you want to go Main-menu?(y/n)\n ");
    scanf("%c", &temp);

    if (temp == 'y' || temp == 'Y')
        goto level ;

    printf("\n\t\t\tTotal cost = %d\n", totalcost);
    system("CLS");
    printf("\n\t\t\t\tTotal cost = %d\n", totalcost);


    printf ("\n\t\t\tNumber of food ordered %d\n", p[order_count].number_of_food);
    loading();
    system("CLS");
    struct signin f;
    printf("\n\n\n");
    printf("\n\t\t\t\t\t****************************************\n");
    printf("\n\t\t\t\t\t.                                       \n");
    printf("\n\t\t\t\t\t. Thank you Mr.  for your Order          \n");
    printf("\n\t\t\t\t\t.                                       \n");
    printf("\n\t\t\t\t\t.  your total bill = %d Taka            \n",totalcost);
    printf("\n\t\t\t\t\t.                                       \n");
    printf("\n\t\t\t\t\t****************************************\n");

    order_count ++;
    printf("\n\t\t\tPress enter for Payment Option.\n");
    getch();
    system("cls");
    printf("\n\t\t\tPLease select payment method.\n");
    payment ();


}
