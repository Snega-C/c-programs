#include<stdio.h>
int main()
{
    int i,n,a=-1,b=1,c;
    printf("Enter the Limit : ");
    scanf("%d",&n);
    printf("\nThe Fibonacci series is");
    for(i=0; i<n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
    }
    return 0;
}
/*output
Enter the Limit : 10

The Fibonacci series is 0 1 1 2 3 5 8 13 21 34
*/
