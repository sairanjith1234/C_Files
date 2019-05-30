#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],n,x,i,pos;
 clrscr();
 printf("\n enter no of elements in array");
 scanf("%d",&n);
 printf("\n enter %d value asc order",n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("value to beins");
 scanf("%d",&x);
 for(i=0;i<n;i++)
 if(x<a[i])
 {
  pos=i;
  break;
  }
  for(i=n;i>=pos;i--)
  a[i]=a[i-1];
  a[pos]=x;
  printf(" \n the list is");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
  printf("\n\n after ins the list is");
  printf("%d",a[i]);
  getch();
 }
