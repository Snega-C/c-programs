#include <stdio.h>
int main()
{
    float distancekm_twocity,meter,cm,i,ft;
    printf("Enter the distance between two cities:");
    scanf("%f",&distancekm_twocity);
     printf("\n The Km is:%0.2f",distancekm_twocity);
    meter=distancekm_twocity*1000;
     printf("\n The meter is:%0.2f",meter);
    cm=meter*100;
     printf("\n The Cm is:%0.2f",cm);
    i=cm/2.54;
     printf("\n The inches is:%0.2f",i);
    ft=i/12;
     printf("\n The feet is:%0.2f",ft);
    return 0;
}
