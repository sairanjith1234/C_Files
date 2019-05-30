#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,first=0,second=1,next;
 clrscr();
 printf("\nenter the range upto which to print");
 scanf("%d",&n);
 for(i=1;i<n;++i)
 {
     printf("%d",first);
     next=first+second;
     first=second;
     second=next;
 }
 getch();
 }