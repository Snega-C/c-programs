#include<stdio.h>
int main()
{
    int no,a,a1,b,b1,c,c1,d,d1,rev;
    printf("Enter a 5 digit number:");
    scanf("%d",&no);
    a=no/10;
    a1=no%10;
    b=a/10;
    b1=a%10;
    c=b/10;
    c1=b%10;
    d=c/10;
    d1=c%10;
    rev=(a1*10000)+(b1*1000)+(c1*100)+(d1*10)+(d*1);
    printf("The Reverse of the number is %d",rev);
    return 0;
    /*output
    Enter a 5 digit number:12345
    The Reverse of the number is 54321*/
}
