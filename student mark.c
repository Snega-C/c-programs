#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,total,avg;
printf("Enter a five subjects marks:");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
avg=total/5;
printf("\nTotal is:%d\n",total);
printf("\nAverage is:%d\n",avg);
return 0;

}
