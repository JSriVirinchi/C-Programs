main()
{
int x,n,a[100],sum=0;
printf("enter a number to check whether its armstrong or not\n");
scanf("%d",x);
n=x;
for (j=0;j<=99;j++)
    a[j]=0;

for (j=0;j<=99;j++)
    {
     a[j]=x%10;
     x=x/10;
     a[j]=a[j]*a[j]*a[j];
     sum=sum+a[j];
    }
    if (sum==n)
    printf("it is a armstrong number");

}
