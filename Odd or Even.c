#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is Even number",a);
    }
    else
    {
        printf("%d is Odd number",a);
    }
    return 0;

}
/*output
Enter a number:88
88 is Even number
----------------------
Enter a number:55
55 is Odd number
*/
