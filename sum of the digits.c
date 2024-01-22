#include<stdio.h>
int main()
{
    int no,a,a1,b,b1,c,c1,d,d1,sum;
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
    sum=d+d1+c1+b1+a1;
    printf("The sum of the Digits is %d",sum);
    return 0;
    /*output
    Enter a 5 digit number:12345
    The sum of the Digits is 15
    /*
}
