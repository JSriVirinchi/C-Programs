main()
{
int x,a;
int odd(int);
printf("enter a number\n");
scanf("%d",&x);
a=odd(x);
if (x%2==0)
    printf("its even");
else
    printf("its odd");
}
int odd(int a)
{
 return a;
}
