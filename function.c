main()
{
    int x;
    void odd(int);
printf("enter a number\n");
scanf("%d",&x);
odd(x);
}
void odd(int a)
{
    if (a%2==0)
        printf("its even");
   else
        printf("its odd");
}



