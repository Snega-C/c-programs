#include<stdio.h>
int fact(i)
{

    if(i<=1)
        return 1;
    return i*fact(i-1);
}
int main()
{
    int a,b,z;
    printf("Enter a limit:");
    scanf("%d",&a);
    for(z=1;z<=a;z++){
    printf("\n\nEnter a number:");
    scanf("%d",&b);
    printf("Factorial is %d",fact(b));
    }
    return 0;
}
/*output
Enter a limit:5


Enter a number:1
Factorial is 1

Enter a number:2
Factorial is 2

Enter a number:3
Factorial is 6

Enter a number:4
Factorial is 24

Enter a number:5
Factorial is 120*/
