#include<stdio.h>
int main()
{
    int t,n,i;
    printf("Enter the table : ");
    scanf("%d",&t);
    printf("\nEnter the Limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n%d X %d : %d",t,i,(t*i));
    }
    return 0;
}
/*output
Enter the table : 2

Enter the Limit : 10

2 X 1 : 2
2 X 2 : 4
2 X 3 : 6
2 X 4 : 8
2 X 5 : 10
2 X 6 : 12
2 X 7 : 14
2 X 8 : 16
2 X 9 : 18
2 X 10 : 20
*/
