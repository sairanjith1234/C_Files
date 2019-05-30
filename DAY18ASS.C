#include<stdio.h>
#include<conio.h>
void main()
{
  int num,i;
  float avg;
  clrscr();
  printf("enter the no");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
  printf("\n numbers are %d",i);
  }
  avg=(num*(num+1))/2;
  printf("\n avg of n natural numbers %f",avg);
  getch();
  }