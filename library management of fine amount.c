#include<stdio.h>
int main()
{
    int days;
    printf("Enter the number of days delay:");
    scanf("%d",&days);
    if(days>=1 && days<=5)
    {
        printf("The fine amount is 0.50 Paise");
    }
    else if(days>=6 && days<=10)
    {
        printf("The fine amount is one Rupee");
    }
    else if(days>=11 && days<=29)
    {
        printf("The fine amount is five Rupee");
    }
    else
    {
        printf("Your membership is cancelled");
    }
    return 0;
}
/*output
Enter the number of days delay:5
The fine amount is 0.50 Paise
---------------------------------
Enter the number of days delay:9
The fine amount is one Rupee
---------------------------------
Enter the number of days delay:25
The fine amount is five Rupee
---------------------------------
Enter the number of days delay:35
Your membership is cancelled
*/
