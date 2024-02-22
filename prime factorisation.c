main()
{
    int i,x= 600851475143;
    printf("enter a number\n");
    scanf("%d",&x);
   for (i=2;i<=x;i++)
    while (x%i==0)
   {
    x=x/i;
    printf("%d*",i);
   }
printf("\n");
 scanf("%d",&x);
   for (i=2;i<=x;i++)
    while (x%i==0)
   {
    x=x/i;
    printf("%d*",i);
   }

}
