main()
{
int n,x,i=1;
//printf("enter a number to know its factors\n");
scanf("%d",&x);
for (n=1;n<=((x/2)+1);n++)
if (x%n==0)
    {printf("%d ",x/n);
    i++;
    }
printf("1");
printf("\nthe number of factors are %d",i);

}

