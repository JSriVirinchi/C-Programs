main()
{
 int x=2,y,n,i,r=1,p;
 scanf("%d",&y);
 for (i=1;i<=(y-1);i++)
 r=r*x;
 i=1;
 p=(2*r-1);
for (n=1;n<=((p/2)+1);n++)
if (p%n==0)
    i++;
   if (i==2)
  {
    printf("%d",p*(r));
    printf("\nits a perfect no");
  }
   else
    printf("its not perfect");
}
