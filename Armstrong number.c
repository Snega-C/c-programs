#include<stdio.h>
int main()
{
    int arm,b,c,d,e,f;
    printf("Enter a Armstrong Number:");
    scanf("%d",&arm);
    b=arm/10;
    c=arm%10;
    d=b/10;
    e=b%10;
    f=(c*c*c)+(d*d*d)+(e*e*e);
   if(arm==f)
   {
       printf("%d is an Armstrong Number",arm);
   }
   else
   {
    printf("%d is not an Armstrong Number",arm);
   }
    return 0;
}
/*output
Enter a Armstrong Number:153
153 is an Armstrong Number
------------------------------
Enter a Armstrong Number:123
123 is not an Armstrong Number
-------------------------------
*/
