#include<stdio.h>
int fact(i)
{

    if(i<=1)
        return 1;
    return i*fact(i-1);
}
int main()
{
   int a;
   printf("Enter a number:");
   scanf("%d",&a);
   printf("Factorial is %d",fact(a));
   return 0;
}
/*output
Enter a number:5
Factorial is 120
*/
