#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int no,rem;
  int sum=0;
  clrscr();
  printf("\nenter a value");
  scanf("%d",&no);
  while(no>0)
  {
  rem=no%10;
  sum=sum+rem;
  no=no/10;
  }

  printf("\nsum of the digits =%d",sum);
  getch();
  }