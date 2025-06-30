

int entertainment()
{
    int enter9;
    printf("\n\t\t\tt\n");
    scanf("%d",&enter9);
    if(enter9==1)
    {
        system("CLS");
        int enter10;
        printf("\n\t\t\tEnter'1'For Information\n\t\t\t\n");
        scanf("%d",&enter10);

        if(enter10==1)
        {
            system("CLS");
            information();
            Exit();
        }

        else if(enter10==0)
        {
            system("CLS");
            entertainment();
            Exit();
        }

    }
            return 0;

}
