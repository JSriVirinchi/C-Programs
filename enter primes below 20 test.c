main()
{
    int x,i;
    printf("enter all primes below 20\n");
    for (i=1;i<=8;i++)
    {
        scanf("%d",&x);
        switch(x)
       {
        case 2: printf("correct\n");break;
        case 3: printf("correct\n");break;
        case 5: printf("correct\n");break;
        case 7: printf("correct\n");break;
        case 11: printf("correct\n");break;
        case 13: printf("correct\n");break;
        case 17: printf("correct\n");break;
        case 19: printf("correct\n");break;
        default: printf("try again\n");break;
       }
    }
     printf("answer is 2,3,5,7,11,13,17,19");
}

