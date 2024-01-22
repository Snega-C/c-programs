#include<stdio.h>
int main()
{
    float fd,cd;
    printf("Enter a Fahrenheit degree:");
    scanf("%f",&fd);
    cd=(fd-32)*(5.0/9.0);
    printf("\nThe Centgrade degree is %0.5f ",cd);
    return 0;

}
