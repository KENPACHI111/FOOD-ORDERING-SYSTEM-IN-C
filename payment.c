int payment()
{
    int card,cash,enter5,enter7,code,pt;
    system ("COLOR 2");

    printf("\n\n\n\n");
    printf("\n\t\t\tEnter'1' : Pay with Card or Mobile account\n");
    printf("\n\t\t\tEnter'2' : Cash on delivery\n");
    printf("\n\t\t\tEnter'3' : For Back\n");


    scanf("%d",&pt);
    switch (pt)
    {
    case 1 :
        system("CLS");

        printf("\n\n\n\n");
        printf("\n\t\t\tEnter '1' : V I S A\n");
        printf("\n\t\t\tEnter '2' : B A N K\n");
        printf("\n\t\t\tEnter '3' : N A T W E S T\n");
        printf("\n\t\t\tEnter '4' : B-kash\n");
        printf("\n\t\t\tEnter '5' : R O C K E T\n");
        printf("\n\t\t\tEnter '6' : N A G A D\n");
        printf("\n\t\t\tEnter '0' : FOR BACK\n");

        scanf("%d",&enter5);
        if(enter5==1)
        {
            system("CLS");

            printf("\n\t\t\tEnter your card number: ");

            scanf("%d",&card);

            printf("\n\t\t\tEnter your code : ");
            scanf("%d",&code);
            loading();
            system("CLS");
        }
        if(enter5==2)
        {
            system("CLS");
            printf("\n\t\t\tEnter your card number: ");

            scanf("%d",&card);
            printf("\n\t\t\tEnter your code : ");

            scanf("%d",&code);
            loading();
            system("CLS");
        }
        if(enter5==3)
        {
            system("CLS");
            printf("\n\t\t\tEnter your card number: ");

            scanf("%d",&card);
            printf("\n\t\t\tEnter your code : ");

            scanf("%d",&code);
            loading();
            system("CLS");
        }

        if(enter5==4)
        {
            system("CLS");
            printf("\n\t\t\tEnter Bkash number: ");
            scanf("%d",&card);
            printf("\n\t\t\tEnter B-kash Pin : ");
            scanf("%d",&code);
            loading();
            system("CLS");

        }

        if(enter5==5)
        {
            system("CLS");
            printf("\n\t\t\tEnter your Rocket number: ");

            scanf("%d",&card);
            printf("\n\t\t\tEnter Rocket Pin : ");
            scanf("%d",&code);
            loading();
            system("CLS");
        }

        if(enter5==6)
        {
            system("CLS");
            printf("\n\t\t\tEnter your Nagad number: ");

            scanf("%d",&card);
            printf("\n\t\t\tEnter Nagad Pin : ");

            scanf("%d",&code);
            loading();
            system("CLS");
        }

        if(enter5==0)
        {
            system("CLS");
            payment();
        }
        system("CLS");

        printf("\n\n\n\t\t\tYour Food is on the way please wait 20 minutes.");

        printf("\n\n\n");
        printf("\n\t\t\tEnter '1' : Awaitng Food List\n\t\t\tEnter '2' : Current Status\n\t\t\tEnter '3' : Both\n");
        scanf("%d",&enter7);
        if(enter7==1)
        {
            system("CLS");
            awaitingFood();
        }
        else if(enter7==2)
        {
            system("CLS");
            currentStatus();
        }
        else if(enter7==3)
        {
            system("CLS");
            awaitingFood();
            currentStatus();
        }
        printf("\n\t\t\tThank you\n");
        int enter9;
        printf("\n\t\t\tEnter'0'For Exit\n");
        scanf("%d",&enter9);
        if(enter9==1)
        {
            system("CLS");
            int enter10;
            printf("Enter'0' :For Exit\n");
            scanf("%d",&enter10);

            if(enter10==1)
            {
                system("CLS");
                information();
                printf("\n\n\n\n");
                Exit();
            }
            else if(enter10==2)
            {
                system("CLS");
                //quiz();
                Exit();
            }
            else if(enter10==0)
            {
                system("CLS");
                Exit();
            }
        }
        else if(enter9==0)
        {
            system("CLS");
            Exit();
        }


        break;
    case 2 :
        loading();
        system("CLS");
        printf("\n\t\t\tPlease keep the amount on delivery time");
        printf("\n\t\t\tEnter'1' : Awaiting Food\n\t\t\tEnter'2' : Current Status\n\t\t\tEnter'3' : Both\n\t\t\tEnter'0' : For Back\n");
        scanf("%d",&enter7);
        if(enter7==1)
        {
            system("CLS");
            awaitingFood();
        }
        else if(enter7==2)
        {
            system("CLS");
            currentStatus();
        }
        else if(enter7==3)
        {
            system("CLS");
            awaitingFood();
            currentStatus();
        }
        else if(enter7==0)
        {
            system("CLS");
            payment();
        }
        int enter15,enter16;
        printf("\n\t\t\tThank you\n");
        printf("\n\t\t\tEnter'0'For Exit\n");
        scanf("%d",&enter15);
        if(enter15==1)
        {
            system("CLS");
            int enter16;
            printf("Enter'0' : For Exit\n");
            scanf("%d",&enter16);

            if(enter16==1)
            {
                system("CLS");
                information();
                printf("\n\n\n\n");
                Exit();
            }
            else if(enter16==2)
            {
                system("CLS");
                //quiz();
                Exit();
            }
            else if(enter16==0)
            {
                system("CLS");
                Exit();
            }
        }
        else if(enter15==0)
        {
            system("CLS");
            Exit();
        }
        break;
    case 3:
        system("CLS");
        backMenu();
        break;

    }
}
