#include<stdio.h>
int main()
{
  float l_r,b_r,r_c,area_r,peri_r,area_circle,circumference_circle;
  printf("Enter a length of the rectangle:");
  scanf("%f",&l_r);
  printf("Enter a breadth of the rectangle:");
  scanf("%f",&b_r);
  printf("Enter a radius of the circle:");
  scanf("%f",&r_c);
  area_r=l_r*b_r;
  printf("The Area of the Rectangle is %0.2f",area_r);
  peri_r=2*(l_r+b_r);
  printf("\nThe Perimeter of the Rectangle is %0.2f",peri_r);
  area_circle=3.14*r_c*r_c;
  printf("\nThe Area of the circle is %0.2f",area_circle);
  circumference_circle=2*3.14*r_c;
  printf("\nThe circumference of the circle is %0.2f",circumference_circle);
  return 0;

}
