main()
{
int n,sum,i,x;
printf("enter a number to check its perfect or not\n");
scanf("%d",&x);
int a[x];
a[0]=0;
for (n=1;n<=(x-1);n++)
 {
 if (x%n==0)
 a[n]=n;
 else
 a[n]=0;
 }
 sum=0;
for (i=0;i<=(x-1);i++)
sum = sum + a[i];
if (sum==x)
printf("its perfect");
else
printf("its not perfect");
}
