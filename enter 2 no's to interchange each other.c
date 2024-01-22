#include<stdio.h>
int main()
{
   int a,b,c,d,e;
   printf("Enter a 1st number:");
   scanf("%d",&a);
   printf("Enter a 2nd number:");
   scanf("%d",&b);
   c=a;
   a=b;
   b=c;
   printf("The first number is %d",a);
   printf("\nThe second number is %d",b);
   /*Another method--without using third variable*/
   printf("\n\nEnter a 1st number:");
   scanf("%d",&d);
   printf("Enter a 2nd number:");
   scanf("%d",&e);
   d=d+e;
   e=d-e;
   d=d-e;
   printf("The first number is %d",d);
   printf("\nThe second number is %d",e);
   return 0;
   /*output
    Enter a 1st number:10
    Enter a 2nd number:20
    The first number is 20
    The second number is 10

    Enter a 1st number:30
    Enter a 2nd number:50
    The first number is 50
    The second number is 30*/
}
