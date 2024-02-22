main()
{
    printf("enter 10 numbers for sorting out highest number\n");
    int i,a[10];
    for (i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for (i=0;i<=9;i++)
    if (a[i+1]<a[i])
        a[i+1]=a[i];
  printf("%d",a[9]);
}
