#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year to check:");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("%d year is a leap year",year);
        }
        else
        {
            printf("%d year is not a leap year",year);
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("%d year is a leap year",year);
        }
        else
        {
            printf("%d year is not a leap year",year);
        }
    }
    return 0;
}
/*output
Enter the year to check:2024
2024 year is a leap year

Enter the year to check:2007
2007 year is not a leap year
*/

