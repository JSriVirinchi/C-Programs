main()
{
    int fac(void);
    int s;
printf("enter a number to find its factorial\n");
s=fac();
printf("%d",s);
}
int fac(void)
{
   int x,i,s=1;
   scanf("%d",&x);
   for (i=1;i<=(x-1);i++)
       s=s*(i+1);
   return s;
}
