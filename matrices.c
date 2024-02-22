main()
{
 int a[3][3],i,j;
  printf("Enter 9 numbers for 3*3 matrix and its determinant.\n");
 for (i=0;i<=2;i++)
 {
   for (j=0;j<=2;j++)
   scanf("%d",&a[i][j]);
 }
 for (i=0;i<=2;i++)
 {
  for (j=0;j<=2;j++)
  printf("%d ",a[i][j]);
  printf("\n");
 }

}
