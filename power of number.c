main()
{
    printf("enter a base and the power respectively to know the value\n");
 int x,y,i,r=1;
 scanf("%d",&x);
 scanf("%d",&y);
 for (i=1;i<=y;i++)
 r=r*x;
 printf("%d",r);
}
