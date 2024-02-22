main()
{
int n,k=1,x,i,p;
float f;
printf("enter a number for all primes below that number\n");
scanf("%d",&p);
printf("2");
for (x=3;x<=p;x++)
{
    i=1;
    for (n=1;n<=((x/2)+1);n++)
    if (x%n==0)
    i++;
    if (i==2)
    {
        printf(" %d",x);
        k++;
    }
}
 printf("\nthe number of primes below %d is %d",p,k);
}

