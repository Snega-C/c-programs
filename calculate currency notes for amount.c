#include<stdio.h>
int main()
{
    int amt,hun,fi,ten;
    printf("Enter the amount in Hundreds:");
    scanf("%d",&amt);
    hun=amt/100;
    printf("\nThe 100 notes are %d",hun);
    fi=(amt%100)/50;
    printf("\nThe 50 notes are %d",fi);
    ten=((amt%100)%50)/10;
    printf("\nThe 10 notes are %d",ten);
    printf("\nThe remaining amount is %d",(((amt%100)%50)%10));
    return 0;
    /*output
Enter the amount in Hundreds:1275
The 100 notes are 12
The 50 notes are 1
The 10 notes are 2
The remaining amount is 5*/
}
