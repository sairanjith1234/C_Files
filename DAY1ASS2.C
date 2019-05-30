#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  float r,area,peri;
  clrscr();
  printf("\ncalculating area and perimeter of circle");
  printf("\nenter r value");
  scanf(" %f",&r);
  area=(22*r*r)/7;
  peri=(2*22*r)/7;
  printf("\narea of circle=%f",area);
  printf("\nperimeter of circle=%f",peri);
  getch();
 }