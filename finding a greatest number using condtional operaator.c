#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a two numbers:");
    scanf("%d%d",&a,&b);
    c=a<b?b:a;
    printf("\nThe Greatest number is %d",c);
    return 0;

    /*output
Enter a two numbers:50 90
The Greatest number is 90

Enter a two numbers:8 2
The Greatest number is 8
*/
}
