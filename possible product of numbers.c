#include<math.h>
main()
{
int x,i,j;
printf("enter a number\n");
scanf("%d",&x);
for (i=2;i<=sqrt(x);i++)
{
    if(x%i==0)
    {
        j=x/i;
        printf("%d * %d\n",i,j);
    }
}

}
