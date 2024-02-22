main()
{
int n,x,i=1;
printf("enter a number to know its prime or not\n");
scanf("%d",&x);
for (n=1;n<=((x/2)+1);n++)
if (x%n==0)
    i++;
   if (i==2)
    printf("\nit is a prime number");
else
    printf("\nit is a composite number");
}

