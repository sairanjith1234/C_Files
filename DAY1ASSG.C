
#include<stdio.h>
#include<conio.h>
void main()
{
 int j,k,l;
 clrscr();
 printf("\nenter j,k,l values");
 scanf("%d %d %d ",&j,&k,&l);
 if(j>k && j>l)
 {
  printf("\nJ is greater");
  }
  else if(k>l)
  {
   printf("\n Kis greater");
   }
   else
   printf("\n L is greater");
   getch();
 }