int loading()
{
    int i,j,a;
    printf("\n\t\t\t LOADING...\n\t\t\t");
    for(i=0; i<=11; i++)
    {
        for(j=0; j<100000000; j++)
            a=j;
        printf("%c",177);
    }
}
