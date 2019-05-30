#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,r;
 printf("\n enter no of rows");
 scanf("%d",&r);
 for(i=1;i<=r;i++)
 {
   for(j=1;j<r;j++)
   {
    printf(" ");
   }
   for(j=1;j<=1;j++)
   {
   printf("*");
   }
   printf("\n");
 }
 getch();
}
