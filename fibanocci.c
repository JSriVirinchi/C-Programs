main()
{
int f,x;
int fib(int);
printf("enter the value of n for the nth fibonacci number to print\n");
scanf("%d",&x);
f=fib(x);
printf("%d",f);
}
int fib(int a)
{
   switch (a)
  {
    case 1 : return 1;break;
   case 2 : return 1;break;
   default : return (fib(a-1)+fib(a-2));
  }

}
