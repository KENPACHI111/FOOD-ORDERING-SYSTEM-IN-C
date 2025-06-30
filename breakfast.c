
extern int order_count;
extern int totalcost;
extern int served_count;
struct order
{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
} p[10000];


void Breakfast()
{
    printf("\n\t\t\t\t\t\tBreakfast\n"
           "\n\t\t\tCode  Name                                               Price(taka)\n"
           "\n\t\t\t1.   Roti------------------------------------------------- 5\n"
           "\n\t\t\t2.   Paratha---------------------------------------------- 7\n"
           "\n\t\t\t3.   Special Paratha-------------------------------------- 20\n"
           "\n\t\t\t4.   Egg Omlete-----------------half/full----------------- 15/25\n"
           "\n\t\t\t5.   Moong Dal------------------half/full----------------- 20/35\n"
           "\n\t\t\t6.   Vegetables-----------------half/full----------------- 20/25\n"
           "\n\t\t\t7.   Khichuri--------------------------------------------- 45\n"
           "\n\t\t\t8.   Special Khichuri------------------------------------- 75\n ");

    int n, in, qu;
    p[order_count].order_number = 10000+order_count;
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;

    printf ("\n\n\t\t\tHow many items you want to order? ");
    scanf ("%d", &n);
    getchar ();

    while(n--)
    {
        printf ("\n\t\t\tEnter chosen item code :- ");
        scanf("%d",&in);
        getchar();
        st(in);
    }

    printf("\n\t\t\t%d\n",p[order_count].cost);
    totalcost += p[order_count].cost;

    printf("\n\t\t\tTotal cost = %d\n", totalcost);
    printf("\n\t\t\tDo you want to go Main-menu ?(y/n)");

    char temp;
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
    {
        returnMenu();
    }

    //main();

    printf ("\n\t\t\tNumber of food ordered %d\n", p[order_count].number_of_food);
    system("CLS");
    loading();
    system("CLS");


    printf("\n\n\n");
    printf("\n\t\t\t\t\t****************************************\n");
    printf("\n\t\t\t\t\t.                                       \n");
    printf("\n\t\t\t\t\t.    Thank you for your Order           \n");
    printf("\n\t\t\t\t\t.                                       \n");
    printf("\n\t\t\t\t\t.  your total bill = %d Taka            \n",totalcost);
    printf("\n\t\t\t\t\t.                                       \n");
    printf("\n\t\t\t\t\t****************************************\n");

    order_count ++;
    printf("\n\t\t\tPress enter for Payment..........\n");
    getch();

    system("cls");
    printf("\n\n\t\tPLease select payment method.\n");
    payment ();
}
