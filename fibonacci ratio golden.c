main()
{
    int x,i;
printf("ratio of Fibonacci no\n");
 scanf("%d",&x);
float a[x];
float n[(x-1)];
a[0]=1;
a[1]=1;
for (i=1;i<=(x-1);i++)
    a[i+1]=a[i]+a[i-1];
for (i=1;i<=(x-1);i++)
   {
    n[(i-1)]=(a[(i)])/(a[(i-1)]);
    printf ("%f ",n[(i-1)]);
   }
}
