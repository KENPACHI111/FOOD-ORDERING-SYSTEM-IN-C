

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



int awaitingFood ()
{
    if(order_count == 0)
    {
        printf("\n\n\n\n");
        printf ("\n\t\t\tTotal order taken: %d\n", (order_count));
        printf ("\n\t\t\tNumber of Currently waiting to be served: %d\n", (order_count-served_count));
        printf ("\n\t\t\tCurrently preparing food for order no. %d\n\n", p[served_count].order_number);

        printf("\n\t For order Press : 1\n");
        int p;
        scanf("%d",&p);

        if(p==1)
            returnMenu();
    }

    else
    {
        printf("\n\n\n\n");
        printf ("\n\t\t\tTotal order taken: %d\n", (order_count));
        printf ("\n\t\t\tNumber of Currently waiting to be served: %d\n", (order_count-served_count));
        printf ("\n\t\t\tCurrently preparing food for order no. %d\n\n", p[served_count].order_number);
    }
}
