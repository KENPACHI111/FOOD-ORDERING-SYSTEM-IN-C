
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

int  currentStatus()
{
    if (order_count==0)
    {
        printf ("\n\t\t\tPlease order first\n");
        printf ("\n\t\t\tOrder no. %d\n", p[served_count].order_number);
        int enter8;
        printf("\n\t\t\tEnter'1'for Order\n");
        scanf("%d",&enter8);
        if(enter8==1)
        {
            returnMenu();
        }

    }
    else
    {
        printf ("\n\t\t\tAll order served\n");
        printf ("\n\t\t\tOrder no. %d by is ready\n", p[served_count].order_number);

    }

    served_count++;
}
int close()
{
    exit(0);
}
