#include<stdio.h>
int main()
{
    int choice,qua;
    printf("\n MENU CARD");
    printf("\n\t\t1.COFFEE        Rs:15");
    printf("\n\t\t2.TEA           Rs:10");
    printf("\n\t\t3.COLD COFFEE   Rs:25");
    printf("\n\t\t4.MILKSHAKE     Rs:50");
    printf("\n\nEnter Your Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
       printf("\nYou have selected COFFEE");
       printf("\nEnter the quantity:");
       scanf("%d",&qua);
       printf("\nTotal amount :%d",(qua*15));
       break;
    case 2:
       printf("\nYou have selected TEA");
       printf("\nEnter the quantity:");
       scanf("%d",&qua);
       printf("\nTotal amount :%d",(qua*10));
       break;
    case 3:
       printf("\nYou have selected COLD COFFEE");
       printf("\nEnter the quantity:");
       scanf("%d",&qua);
       printf("\nTotal amount :%d",(qua*25));
       break;
    case 4:
       printf("\nYou have selected MILKSHAKE");
       printf("\nEnter the quantity:");
       scanf("%d",&qua);
       printf("\nTotal amount :%d",(qua*50));
       break;
    default:
       printf("\nInvalid Product Selection");
       break;
    }
    return 0;

}
/*output

 MENU CARD
                1.COFFEE        Rs:15
                2.TEA           Rs:10
                3.COLD COFFEE   Rs:25
                4.MILKSHAKE     Rs:50

Enter Your Choice:3

You have selected COLD COFFEE
Enter the quantity:2

Total amount :50
--------------------------------------------

 MENU CARD
                1.COFFEE        Rs:15
                2.TEA           Rs:10
                3.COLD COFFEE   Rs:25
                4.MILKSHAKE     Rs:50

Enter Your Choice:5

Invalid Product Selection
---------------------------------------------
 MENU CARD
                1.COFFEE        Rs:15
                2.TEA           Rs:10
                3.COLD COFFEE   Rs:25
                4.MILKSHAKE     Rs:50

Enter Your Choice:2

You have selected TEA
Enter the quantity:1

Total amount :10
*/
