main()
{
int i,j,a[5][9];
for (i=0;i<=4;i++)
    for (j=0;j<=8;j++)
    a[i][j]=0;

 for (i=0;i<=4;i++)
    a[i][4-i]=1;
for (i=0;i<=4;i++)
{
    for(j=0;j<=8;j++)
        if (j<=5+i && j>=5-i)
      {
        if ((i+j)%2==0)
        a[i][j]=a[i-1][j-1]+a[i-1][j+1];
        else
        a[i][j]=0;
      }
}
a[4][8]=1;
for (i=0;i<=4;i++)
   {
    for (j=0;j<=8;j++)
    printf("%d",a[i][j]);
    printf("\n");
   }
}
