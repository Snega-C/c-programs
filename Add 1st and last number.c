#include<stdio.h>
int main()
{
    int no,a,a1,b,b1,c,c1,d,d1,rev;
    printf("Enter a 4 digit number:");
    scanf("%d",&no);
    a=no/10;
    a1=no%10;
    b=a/10;
    c=b/10;
    printf("The sum of first and last number is:%d",c+a1);
    return 0;

    /*output
Enter a 4 digit number:1234
The sum of first and last number is:5
    */
}


