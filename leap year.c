int main (void)
{
    int year,q;
    printf("enter a year\n");
    scanf("%d",&year);
    if ( year % 4 == 0)
    {
        if ( year % 100 == 0 && year % 400!= 0)
        {
            q=4;
            printf("next leap year in %d",q);
        }
        else
        {
            q=0;
           printf("next leap year in %d",q);
        }
    }
    else
    {
        if ( ((year+4)-((year + 4)%4))%100 == 0 && ((year+4)-((year + 4)%4))%400 !=0 )
        {
            q=((year+4)-((year + 4)%4)) - year + 4;
            printf("next leap year in %d",q);
        }
        else
        {
            q=((year+4)-((year + 4)%4)) - year;
            printf("next leap year in %d",q);
        }
    }

    return 0;
}
