#include<stdio.h>
int main()
{
    int choice,qua,con,net;
    printf("\n MENU CARD");
    Menu:
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
       net=net+(qua*15);
       break;
    case 2:
       printf("\nYou have selected TEA");
       printf("\nEnter the quantity:");
       scanf("%d",&qua);
       net=net+(qua*10);
       break;
    case 3:
       printf("\nYou have selected COLD COFFEE");
       printf("\nEnter the quantity:");
       scanf("%d",&qua);
       net=net+(qua*25);
       break;
    case 4:
       printf("\nYou have selected MILKSHAKE");
       printf("\nEnter the quantity:");
       scanf("%d",&qua);
       net=net+(qua*50);
       break;
    default:
       printf("\nInvalid Product Selection");
       break;
    }
    printf("\nDo you want to continue -'Press 1':");
    scanf("%d",&con);
    if(con==1)
    {
      goto Menu;
    }
    printf("\nTotal Amount=%d",net);
    printf("\nThank you visit again");
    return 0;

}
/*output
 MENU CARD
                1.COFFEE        Rs:15
                2.TEA           Rs:10
                3.COLD COFFEE   Rs:25
                4.MILKSHAKE     Rs:50

Enter Your Choice:1

You have selected COFFEE
Enter the quantity:1

Do you want to continue -'Press 1':1

                1.COFFEE        Rs:15
                2.TEA           Rs:10
                3.COLD COFFEE   Rs:25
                4.MILKSHAKE     Rs:50

Enter Your Choice:4

You have selected MILKSHAKE
Enter the quantity:2

Do you want to continue -'Press 1':0

Total Amount=115
Thank you visit again
--------------------------------------------------------------

 MENU CARD
                1.COFFEE        Rs:15
                2.TEA           Rs:10
                3.COLD COFFEE   Rs:25
                4.MILKSHAKE     Rs:50

Enter Your Choice:3

You have selected COLD COFFEE
Enter the quantity:2

Do you want to continue -'Press 1':0

Total Amount=50
Thank you visit again

*/
