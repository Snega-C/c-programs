#include<stdio.h>
int main()
{
    int a[100],i,n,e=0,o=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value : ");
        scanf("%d",&a[i]);
        a[i]%2==0?e++:o++;
    }
    printf("\nTotal Number of Even Number is %d",e);
    printf("\nTotal Number of Odd Number is %d",o);
    return 0;
}
/*output
Enter the limit : 5

Enter the value : 11

Enter the value : 22

Enter the value : 33

Enter the value : 44

Enter the value : 55

Total Number of Even Number is 2
Total Number of Odd Number is 3
*/
