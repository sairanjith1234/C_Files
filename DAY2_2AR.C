#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,a[20];
  clrscr();
 printf("\nenter the no of elements");
 scanf("%d",&n);
 printf("\n enter the array elements");
 for(i=0;i<=n;i++)
 {
   scanf("%d",&a[i]);
   }
   printf("\nreverse of array elements");
   for(i=6;i<=n;i--)
   {
    printf("%d",a[i]);
    }
    getch();
 }
