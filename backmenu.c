void backMenu()
{
    int in,n;
level:
    printf("\n\n\t\t1:Order\n\t\t2:Awaiting Food \n\t\t3:Information and Quiz\n\t\t4:Exit \n");
    scanf ("%d", &in);
    getchar();
    switch(in)
    {
    case 1:
        system("CLS");
        returnMenu();
        break;
    case 2 :
        system("CLS");
        awaitingFood();
        break;
    case 3 :
        system("CLS");
        entertainment();
        break;
    case 4 :
        system("CLS");
        Exit();
    default :
    {
        printf ("\n\n\t\t\tInvalid selection try again\n");
    }
    }
}
