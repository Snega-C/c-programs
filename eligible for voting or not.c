#include<stdio.h>
int main()
{
    char name[10];
    int age;
    printf("Enter the name:");
    scanf("%s",name);
    printf("\nEnter the age:");
    scanf("%d",&age);
    if(age==0)
    {
        printf("Invalid age");
    }
    else if(age>18)
    {
        printf("%s is %d ,Eligible for voting",name,age);
    }
    else if(age==18)
    {
        printf("%s is %d ,Eligible for voting to apply",name,age);
    }
    else
    {
        printf("%s is %d ,Not eligible for voting",name,age);
    }
    return 0;
}
