#include<stdio.h>
#include<conio.h>
void main()
{
 int i,min,max,n;
 int a[20];
 clrscr();
 printf("\nenter the no of elements");
 scanf("%d",&n);
 printf("\nenter the array elements");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }

 printf("\n elements are");
 min=max=a[0];
 for(i=0;i<n;i++)
 {
  printf("\n%d",a[i]);
 }

 for(i=0;i<n;i++)
 {
  if(a[i]>max)
 {
   max=a[i];

 }
 if(a[i]<min)
 {
   min=a[i];
 }
 }
 printf("\nmax=%d\nmin=%d",max,min);
 getch();
 }