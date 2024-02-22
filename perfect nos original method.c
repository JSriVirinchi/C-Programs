main()
{
  int x,i,j,sum,k;
 printf("enter a number to see all perfect nos before that number\n");
 scanf("%d",&x);
 int a[x];
 for (k=0;k<=(x-1);k++)
 a[k]=0;
 for (i=1;i<=x;i++)   //for checking ith num
 {
     sum=0;
     for (j=1;j<=i;j++)
        if (i%j==0)
        a[j]=j;
        else
        a[j]=0;
        for(j=1;j<=i;j++)
    sum=sum+a[j];
    if (sum==2*(i))
        printf("%d ",i);
 }
}
