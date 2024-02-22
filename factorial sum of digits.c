main()
{
 int x,i,p=1,sum=0,t;
 printf("enter a number to find the sum of the digits of its factorial.\n");
 scanf("%d",&x);
 for (i=1;i<=x;i++)
 p=p*(i);
 for (i=1;i<=x;i++)
 {t=p%10;
 sum=sum+t;
 p=p/10;
 }
printf("%d",sum);
}
