

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


void  teaDrinks()
{
    printf("\n\t\t\t\t\t\tTea & Drinks\n"
           "\n\t\t\tCode  Name                                               Price\n"
           "\n\t\t\t1.   Tea------------------------------------------------- 15 |=\n"
           "\n\t\t\t2.   Coffee--------------------hot/cold------------------ 30/45 |=\n"
           "\n\t\t\t3.   Cold Drinks---------------250mg/500mg--------------- 20/35 |=\n"
           "\n\t\t\t4.   Lassi----------------------------------------------- 40 |=\n"
           "\n\t\t\t5    Special coffee-------------------------------------- 50 |=\n"
           "\n\t\t\t6.   Special lassi--------------------------------------- 70 |=\n"
           "\n\t\t\t7.   Cappuccino------------------------------------------ 90 |=\n");

    int n, in, qu;
    p[order_count].order_number = 10000+order_count;
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;
    printf ("\n\t\t\tHow many items you want to order?\n ");
    scanf ("%d", &n);
    getchar ();
    while(n--)
    {
        printf ("\n\t\t\tEnter chosen item code :- ");
        scanf("%d",&in);
        getchar();
        st(in + 43);
    }
    printf("\n\t\t\t%d\n",p[order_count].cost);

    totalcost+=p[order_count].cost;

    printf("\n\t\t\tTotal cost = %d\n", totalcost);
    printf("\n\t\t\tDo you want to go Main-menu? (y/n)");

    char temp;
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        returnMenu();

    printf ("\n\t\t\tNumber of food ordered %d\n", p[order_count].number_of_food);
    system("CLS");
    loading();
    system("CLS");
    struct signin f;
    printf("\n\n\n");
    printf("\n\t\t\t\t\t****************************************\n");
    printf("\n\t\t\t\t\t.                                       \n");
    printf("\n\t\t\t\t\t.     Thank you For your Order          \n");
    printf("\n\t\t\t\t\t.                                       \n");
    printf("\n\t\t\t\t\t.  your total bill = %d Taka            \n",totalcost);
    printf("\n\t\t\t\t\t.                                       \n");
    printf("\n\t\t\t\t\t****************************************\n");

    order_count ++;

    printf("\n\t\t\tPress enter for Payment.............\n");
    getch();
    system("cls");
    printf("\n\n\t\tPLease select payment method.\n");
    payment ();
}
