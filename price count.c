


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


void st(int in)
{
    int qu;
    switch(in)
    {
    case 1 :
    {
      printf ("\n\t\t\t  Paratha \n");

do {
    printf ("\n\t\t\tPlease enter the quantity: ");
    scanf ("%d", &qu);
    getchar();  // clears newline from input buffer

    if (qu < 0)
        printf("\n\t\t\tInvalid input! Quantity cannot be negative.\n");

} while (qu < 0);

p[order_count].number_of_food += qu;
p[order_count].cost += (5 * qu);
        break;
    }
    case 2 :
    {
        do {
    printf ("\n\t\t\tPlease enter the quantity: ");
    scanf ("%d", &qu);
    getchar();  // clears newline from input buffer

    if (qu < 0)
        printf("\n\t\t\tInvalid input! Quantity cannot be negative.\n");

} while (qu < 0);

p[order_count].number_of_food += qu;
p[order_count].cost += (7 * qu);

        break;
    }
    case 3 :
    {
        //printf ("\n\t\t\t Special Paratha\n");
      printf ("\n\t\t\t  Special Paratha \n");

do {
    printf ("\n\t\t\tPlease enter the quantity: ");
    scanf ("%d", &qu);
    getchar();  // clears newline from input buffer

    if (qu < 0)
        printf("\n\t\t\tInvalid input! Quantity cannot be negative.\n");

} while (qu < 0);

p[order_count].number_of_food += qu;
p[order_count].cost += (20 * qu);

        break;
    }
    case 4 :
    {
        printf ("\n\t\t\t Enter the size of Egg Omlete:  1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
        {
            p[order_count].cost += (15*qu);

        }
        else if (i==2)
        {
            p[order_count].cost += (25*qu);

        }
        break;

    }
    case 5 :
    {
        printf ("\n\t\t\t Enter the size of Moong Dal: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (20*qu);
        else
            p[order_count].cost += (35*qu);
        break;
    }
    case 6 :
    {

        printf ("\n\t\t\t Enter the size of Vegetables: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("\n\t\t\t Please enter the quantity: ");

        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (20*qu);
        else
            p[order_count].cost += (25*qu);
        break;
    }
    case 7 :
    {
        printf ("\n\t\t\t Khichuri\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (45*qu);
        break;
    }
    case 8 :
    {
        printf ("\n\t\t\t Special khichuri\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (75*qu);
        break;
    }
    case 9 :
    {
        printf ("\n\t\t\t Rice\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (20*qu);
        break;
    }
    case 10 :
    {
        printf ("\n\t\t\t Enter the size of Dal: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (10*qu);
        else
            p[order_count].cost += (20*qu);
        break;
    }
    case 11 :
    {
        printf ("\n\t\t\t Mixed Vegetables\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (20*qu);
        break;
    }
    case 12 :
    {
        printf ("\n\t\t\t Boal Fish Curry\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (110*qu);
        break;
    }
    case 13 :
    {
        printf ("\n\t\t\t Rui Fish Curry\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (100*qu);
        break;
    }
    case 14 :
    {
        printf ("\n\t\t\t Enter the size of Katla Fish Curry: 1. 2pice 2.3pice\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (60*qu);
        else
            p[order_count].cost += (120*qu);
        break;
    }
    case 15 :
    {
        printf ("\n\t\t\t Enter the size of Pabda Fish Curry: 1. 2pice 2.3pice\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
        {
            p[order_count].cost += (50*qu);
        }
        else
        {
            p[order_count].cost += (110*qu);
        }
        break;
    }
    case 16 :
    {
        printf ("\n\t\t\t Enter the size of Ilish Fish Curry: 1. 2pice 2.3pice\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (70*qu);
        else
            p[order_count].cost += (135*qu);
        break;
    }
    case 17 :
    {
        printf ("\n\t\t\t Kalbaus\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (200*qu);
        break;
    }
    case 18 :
    {
        printf ("\n\t\t\t Egg Curry\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (25*qu);
        break;
    }
    case 19 :
    {
        printf ("\n\t\t\t Enter the size of Chicken Curry: 1.half 2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (80*qu);
        else
            p[order_count].cost += (130*qu);
        break;
    }
    case 20 :
    {
        printf ("\n\t\t\t Enter the size of Chicken Roast: 1.pice 2.2 pice\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
        {
            p[order_count].cost += (90*qu);
        }
        else
        {
            p[order_count].cost += (90*qu);
        }
        break;
    }
    case 21 :
    {
        printf ("\n\t\t\t Chicken Bhuna\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (90*qu);
        break;
    }
    case 22 :
    {
        printf ("\n\t\t\t Mutton Curry\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (110*qu);
        break;
    }
    case 23 :
    {
        printf ("\n\t\t\t Enter the size of Mutton Bhuna: 1.half 2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (140*qu);
        else
            p[order_count].cost += (220*qu);
        break;
    }
    case 24 :
    {
        printf ("\n\t\t\t Rice\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (15*qu);
        break;




    }
    case 25 :
    {
        printf ("\n\t\t\t Enter the size of Dal: 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (7*qu);
        else
            p[order_count].cost += (14*qu);
        break;
    }
    case 26 :
    {
        printf ("\n\t\t\t Egg Curry\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (25*qu);
        break;
    }
    case 27 :
    {
        printf ("\n\t\t\t Enter the size of Chicken curry: 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (80 * qu);
        else
            p[order_count].cost += (135 * qu);
        break;
    }
    case 28 :
    {
        gotoxy(56,10);
        printf ("\n\t\t\t Enter the size of Chicken Roast: 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (90 * qu);
        else
            p[order_count].cost += (150 * qu);
        break;
    }
    case 29 :
    {
        printf ("\n\t\t\t Chicken Bhuna\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (90*qu);
        break;
    }
    case 30 :
    {
        printf ("\n\t\t\t Mutton Curry\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (110*qu);
        break;
    }
    case 31 :
    {
        printf ("\n\t\t\t Enter the size of Mutton Buna: 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (140 * qu);
        else
            p[order_count].cost += (220 * qu);
        break;
    }
    case 32 :
    {
        printf ("\n\t\t\t Enter the size of Chicken Biriyani: 1. quarter  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (60 * qu);
        else
            p[order_count].cost += (120 * qu);
        break;
    }
    case 33 :
    {
        printf ("\n\t\t\t Enter the size of Mutton Biriyani: 1. quarter  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (85 * qu);
        else
            p[order_count].cost += (150 * qu);
        break;
    }
    case 34 :
    {
        printf ("\n\t\t\t Enter the size of  Kachhi  Biriyani: 1. quarter  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (90 * qu);
        else
            p[order_count].cost += (160 * qu);
        break;
    }
    case 35 :
    {
        printf ("\n\t\t\t Enter the size of  Naan: 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (15 * qu);
        else
            p[order_count].cost += (25 * qu);
        break;
    }
    case 36 :
    {
        printf ("\n\t\t\t Enter the size of Special Naan: 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (20 * qu);
        else
            p[order_count].cost += (40 * qu);
        break;
    }
    case 37 :
    {
        printf ("\n\t\t\t Enter the size of   Chicken Grill : 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (180 * qu);
        else
            p[order_count].cost += (350 * qu);
        break;
    }
    case 38 :
    {
        printf ("\n\t\t\t Enter the size of   Chicken Chap : 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (155 * qu);
        else
            p[order_count].cost += (210 * qu);
        break;
    }
    case 39 :
    {
        printf ("\n\t\t\t Enter the size of   Chicken BBQ : 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (120 * qu);
        else
            p[order_count].cost += (240 * qu);
        break;
    }
    case 40 :
    {
        printf ("\n\t\t\t Enter the size of   Chicken Tikka : 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (110 * qu);
        else
            p[order_count].cost += (220 * qu);
        break;
    }
    case 41 :
    {
        printf ("\n\t\t\t Enter the size of   Chicken Korai : 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (55 * qu);
        else
            p[order_count].cost += (110 * qu);
        break;
    }
    case 42 :
    {
        printf ("\n\t\t\t Enter the size of Vegetable fried rice : 1. quarter  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (60 * qu);
        else
            p[order_count].cost += (240 * qu);
        break;
    }
    case 43 :
    {
        printf ("\n\t\t\t Enter the size of  Chicken fried rice : 1. quarter  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (120 * qu);
        else
            p[order_count].cost += (480 * qu);
        break;
    }
    case 44 :
    {
        printf ("\n\t\t\t Tea\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (15*qu);
        break;
    }
    case 45:
    {
        printf ("\n\t\t\t Enter the size of  Coffee: 1. Hot  2.Cold\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (30 * qu);
        else
            p[order_count].cost += (45 * qu);
        break;
    }
    case 46:
    {
        printf ("\n\t\t\t Enter the size of  Coffee: 1. 250 mg  2. 500 mg\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (10 * qu);
        else
            p[order_count].cost += (35 * qu);
        break;
    }
    case 47 :
    {
        printf ("\n\t\t\t Lassi\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (40*qu);
        break;
    }
    case 48 :
    {
        printf ("\n\t\t\t Special coffee\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (50*qu);
        break;
    }
    case 49 :
    {
        printf ("\n\t\t\t Special lassi\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (70*qu);
        break;
    }
    case 50 :
    {
        printf ("\n\t\t\t Special lassi\n");
        printf ("\n\t\t\t Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (90*qu);
        break;
    }
    default :
    {
        printf ("\n\t\t\t Invalid selection try again\n");
    }
    }
}


