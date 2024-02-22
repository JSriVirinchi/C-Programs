main()
{
int x,i,j;
printf("enter a number\n");
scanf("%d",&x);
for(i=1;i<=(x-1);i++)
  {
    j=x-i;
    printf("%d + %d\n",i,j);
  }
}
