#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int l,w;
  float area,peri;
  clrscr();
  printf("\ncalculating area and perimeter of rectangle");
  printf("\nenter l,w values");
  scanf("%d %d",&l,&w);
  area=w*l;
  peri=2*(l+w);
  printf("\narea of rectangle=%f",area);
  printf("\nperimeter of rectangle=%f",peri);
  getch();
 }