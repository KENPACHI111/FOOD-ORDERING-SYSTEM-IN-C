


struct order
{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
} p[10000];

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


int main()
{
    int enter;
    welcome();

    gotoxy(8,32);
    printf("Press 1 to continue :......");
    getch();

    logIn();

    scanf("%d",&enter);
    if(enter==1)
    {
        system("CLS");
        Registration();
    }
    else if(enter==2)
    {
        system("CLS");
        signin();
    }
    while (1)
    {
        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in)
        {
        case 1 :
        {
            system("CLS");
            int a;
            printf("\n\n\t\t\tTotal cost = %d\n", totalcost);
            printf("\n\n\t\t\t1: BreakFast  2: Lunch  3: Dinner  4: Others  5: Tea And Drinks \n\t\t\t");
            scanf("%d",&a);
            switch(a)
            {
            case 1:

                Breakfast();
                break;
            case 2 :
                lunch();
                break;
            case 3 :
                Dinner();
                break;
            case 4 :
                Others();
            case 5 :
                teaDrinks();
                break;
            default:
                printf("\n\t\t\tWrong input");

            }

            break;
        }
        case 2 :
        {
            system("CLS");
            awaitingFood();
            break;
        }

        case 3 :
        {
            system("CLS");
           // information();
            break;

        }
        case 4 :
        {
            system("CLS");
            Exit();
            break;
        }

        default:
            printf("\n\n\t\t\tWrong input !!!\n");
        }
    }
    return 0;
}
