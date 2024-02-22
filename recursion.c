main()
{
    int x,s;
    int sum4(int);
    printf("enter a number\n");
    scanf("%d",&x);
    s=sum4(x);
    printf("%d",s);
}
int sum4(int a)
{
        if (a==1)
        return 1;
    else
        return ((a*a*a*a)+ sum4(a-1));
}
