#include <stdio.h>
int main()
{
    float basic_salary,dearness,house_rent,gross_salary;
    printf("Enter a basic salary:");
    scanf("%f",&basic_salary);
    dearness=basic_salary*0.4;
    printf("The dearness is:%0.2f\n",dearness);
    house_rent=basic_salary*0.2;
    printf("The house rent is:%0.2f\n",house_rent);
    gross_salary=basic_salary+dearness+house_rent;
    printf("\nThe gross salary=%0.2f\n",gross_salary);
    return 0;
    /*output
        Enter a basic salary:40000
        The dearness is:16000.00
        The house rent is:8000.00
        The gross salary=64000.00*/
}
