#include<stdio.h>
int main()
{
    int selling,profit,cost,oneitem;
    printf("Enter the selling price of 15 items:");
    scanf("%d",&selling);
    printf("Enter the profit:");
    scanf("%d",&profit);
    cost=selling-profit;
    printf("The cost price is %d",cost);
    oneitem=cost/15;
    printf("\nThe cost price of one item is %d",oneitem);
    return 0;
    /*output
Enter the selling price of 15 items:2000
Enter the profit:500
The cost price is 1500
The cost price of one item is 100*/
}
