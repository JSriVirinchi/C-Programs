main()
{
int o;
 int odd(void);
 o=odd();
 if (o%2==0)
 printf("its even");
 else
 printf("its odd");
}
int odd(void)
{
 int x;
 printf("enter a number\n");
 scanf("%d",x);
 return x;
}

