int Exit ()
{
    int enter2,enter3,enter4,enter6,et;
    system ("COLOR 2");
    printf("\n\n\t\t\tThanks for chosen kutum - bari\n");
    printf("\n\t\t\tIf you are not satisfied with our service then report our restaurant or else Rating our restaurant.\n");
    printf("\n\t\t\tEnter'1' : Rating\n\t\t\tEnter'2' : Report\n");
    scanf("%d",&et);
    switch(et)
    {
    case 1 :
        system("CLS");
        printf("\n\t\t\tEnter'1' : for 5 STAR\n\t\t\tEnter'2' : for 3 STAR\n\t\t\tEnter'3' : for 1 STAR\n");
        scanf("%d",&enter3);
        if(enter3==1)
        {
            system("CLS");
            system ("COLOR 5");
            printf("\n\t\t\tWow! THANK YOU FOR YOUR RATING\n");
            printf("\n\t\t\tEnter'1'for Main-Manu\n\t\t\tEnter'2'for exit\n");
            scanf("%d",&enter6);
            if(enter6==1)
            {
                returnMenu();
            }
            else if(enter6==2)
            {

                contributor();
                close();
            }
        }
        else if(enter3==2)
        {
            system("CLS");
            system ("COLOR 3");
            printf("\n\t\t\tTHNAK YOU FOR YOUR RATING\n");
            printf("\n\t\t\tEnter'1'for Main-Manu\n\t\t\tEnter'2'for exit\n");
            scanf("%d",&enter6);
            if(enter6==1)
            {
                returnMenu();
            }
            else if(enter6==2)
            {
                system("CLS");
                contributor();
                close();
            }
        }
        else if(enter3==3)
        {
            system("CLS");
            system ("COLOR 4");
            printf("\n\t\t\tTHANK YOU\n");
            printf("\n\t\t\tEnter'1'for Main-Manu\n\t\t\tEnter'2'for exit\n");
            scanf("%d",&enter6);
            if(enter6==1)
            {
                returnMenu();
            }
            else if(enter6==2)
            {
                system("CLS");
                contributor();
                close();
            }
        }
        break;
    case 2 :
        system("CLS");
        printf("\n\t\t\t1.I have no mood for rating thats why choice report option\n\t\t\t2.Food quality not good\n\t\t\t3.late delivery.\n");
        scanf("%d",&enter4);
        if(enter4==1)
        {
            system("CLS");
            system ("COLOR 4");
            printf("\n\t\t\tOK!when you are in mood rate our restaurant.THANK YOU");
            printf("\n\t\t\tEnter'1' : for Main-Manu\n\t\t\tEnter'2' : for exit\n");
            scanf("%d",&enter6);
            if(enter6==1)
            {
                main();
            }
            else if(enter6==2)
            {
                system("CLS");
                contributor();
                close();
            }
        }
        else if(enter4==2)
        {
            system("CLS");
            system ("COLOR 5");
            printf("\n\t\t\tOK!We will improve our food Quality.THANK YOU");
            printf("\n\t\t\tEnter'1'for Main-Manu\n\t\t\tEnter'2'for exit\n");
            scanf("%d",&enter6);
            if(enter6==1)
            {
                main();
            }
            else if(enter6==2)
            {
                system("CLS");
                contributor();
                close();
            }
        }
        else if(enter4==3)
        {
            system("CLS");
            system ("COLOR 3");
            printf("\n\t\t\tOK!We will deliver our food faster.THANK YOU");
            printf("\n\t\t\tEnter '1' for Main-Manu\n\t\t\tEnter '2' for exit\n");
            scanf("%d",&enter6);
            if(enter6==1)
            {
                main();
            }
            else if(enter6==2)
            {
                system("CLS");
                contributor();

            }
        }
        break;
    }
}
