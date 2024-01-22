#include<stdio.h>
int main()
{
    int pop=80000;
    int pop_men=(52*pop)/100;
    int pop_women=pop-pop_men;
    int po_li=(48*pop)/100;
    int po_menli=(35*pop)/100;
    int po_womenli=pop-po_menli;
    int po_menill=pop-po_menli;
    int po_womenill=pop-po_womenli;
    printf("The total population is %d",pop);
    printf("\nThe total population of Men is %d",pop_men);
    printf("\nThe total population of Women is %d",pop_women);
    printf("\nThe total population of literacy is %d",po_li);
    printf("\nThe total population of literacy men is %d",po_menli);
    printf("\nThe total population of literacy Women is %d",po_womenli);
    printf("\nThe total population of illiteracy men is %d",po_menill);
    printf("\nThe total population of illiteracy Women is %d",po_womenill);
    return 0;
    /*output
The total population is 80000
The total population of Men is 41600
The total population of Women is 38400
The total population of literacy is 38400
The total population of literacy men is 28000
The total population of literacy Women is 52000
The total population of illiteracy men is 52000
The total population of illiteracy Women is 28000*/
}
