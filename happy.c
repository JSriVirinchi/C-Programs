main()
{
 int n,sum,p,a;
 scanf("%d",&n);
 sum = 0;
 p=n;
 while (sum!=1 && sum!=4)
 {
     while (p>0)
   {
    a = p%10;
    sum = sum + (a*a);
    p = p/10;
   }
    p = sum;
 }
 if (sum==1)
    printf("its happy");
 else
    printf("not happy");
}
