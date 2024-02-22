main()
{
int n,x,i,p,k=0;
printf("enter a number for all primes below that number\n");
scanf("%d",&p);
for (x=1;x<=p;x++)
{
    i=1;
    for (n=1;n<=((x/2)+1);n++)
    if (x%n==0)
    i++;
    if (i==2)
    k++;
}
    printf("%d",k);
}
