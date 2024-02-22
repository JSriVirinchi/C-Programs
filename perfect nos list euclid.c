main()
{
 int x=2,y,q,n,i,r=1,p;
 printf("enter a number to see perfect nos below a number");
 scanf("%d",q);
 for (y=1;y<=q;y++)
 {
 for (i=1;i<=(y-1);i++)
 r=r*x;
 i=1;
 p=(2*r-1);
for (n=1;n<=((p/2)+1);n++)
if (p%n==0)
    i++;
   if (i==2)
   printf("\n%d is a perfect no",p*(r));

  }
}
