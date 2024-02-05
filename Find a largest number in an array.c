#include<stdio.h>
int main()
{
    int a[100],i,n,t;
    printf("Enter a Limit : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter a values : ");
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=1; i<n; i++)
    {
        if(t<a[i])
            t=a[i];
    }
    printf("The largest number is %d",t);
    return 0;
}
/*output
Enter a Limit : 10
Enter a values : 65
Enter a values : 55
Enter a values : 48
Enter a values : 73
Enter a values : 86
Enter a values : 35
Enter a values : 98
Enter a values : 48
Enter a values : 91
Enter a values : 45
The largest number is 98
*/
