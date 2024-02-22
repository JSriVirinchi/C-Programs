main()
{
 int x,p,n,i,sum,a[10000];
 printf("enter a number to see perfect numbers below that number (below 10000)");
 scanf("%d",&p);
 for (x=1;x<=p;x++)
  {
     for (n=1;n<=((x/2)+1);n++)
     {
      if (x%n==0)
      a[n]=x/n;
      else
      a[n]=0;
     }
     sum=0;
     for (i=0;i<=9999;i++)
        sum = sum + a[i];
        if (sum==2*x)
            printf(" %d",x);
  }

}

