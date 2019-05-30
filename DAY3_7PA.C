#include<stdio.h>
#include<conio.h>
void main()
{
 int r,c,k,space=1;
 printf("\n enter the range ");
 scanf("%d",&r);
 space=r-1;
 for(k=1;k<=r;k++)
 {
  for(c=1;c<=space;c++)
    printf("  ");
   space--;
   for(c=1;c<=k+1;c++)
   printf("*");
   printf("\n");

 }
// space=1;
// for(k=1;k<=r;k++)
 //{
 getch();
 }

