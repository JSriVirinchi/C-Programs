main()
{
    int x,y,i,product=1;
    printf("Enter two numbers to find their LCM.\n");
    scanf("%d%d",&x,&y);
    for (i=2;i<=x&&i<=y;i++)
    if(x%i==0&&y%i==0)
   {
      x=x/i;
      y=y/i;
   product=product*i;
   }
   product=product*x*y;
   printf("The LCM is %d",product);
}
