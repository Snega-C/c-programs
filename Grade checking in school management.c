#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5,tot,avg;
    printf("Enter a 5 subjects marks:");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    tot=m1+m2+m3+m4+m5;
    avg=tot/5;
    printf("\nThe Total is %0.2f",tot);
    printf("\nThe Average is %0.2f",avg);
    if(m1>=35&&m2>=35&&m3>=35&&m4>=35&&m5>=35)
    {
        printf("\nCONGRATULATIONS \nRESULT : PASS");
        if(avg>=90 && avg<=100)
        {
            printf("\nGRADE : A");
        }
        else if(avg>=80 && avg<=89)
        {
            printf("\nGRADE : B");
        }
        else if(avg>=70 && avg<=79)
        {
            printf("\nGRADE : C");
        }
        else if(avg>=60 && avg<=69)
        {
            printf("\nGRADE : D");
        }
        else
        {
            printf("\nGRADE : E");
        }
    }
    else
    {
        printf("\nRESULT : FAIL \nNO GRADE");

    }
    return 0;

}
/*output
Enter a 5 subjects marks:95 93 100 89 97

The Total is 474.00
The Average is 94.80
CONGRATULATIONS
RESULT : PASS
GRADE : A
-------------------------------------------------
Enter a 5 subjects marks:85 90 93 100 75

The Total is 443.00
The Average is 88.60
CONGRATULATIONS
RESULT : PASS
GRADE : B
--------------------------------------------------
Enter a 5 subjects marks:67 44 39 55 75

The Total is 280.00
The Average is 56.00
CONGRATULATIONS
RESULT : PASS
GRADE : E
---------------------------------------------------
Enter a 5 subjects marks:32 75 55 67 43

The Total is 272.00
The Average is 54.40
RESULT : FAIL
NO GRADE
*/
