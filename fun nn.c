main()
{
 void odd(void);
odd();
}
void odd(void)
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if (x%2==0)
        printf("its even");
    else
        printf("its odd");
}

