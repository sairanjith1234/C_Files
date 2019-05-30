#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int d,w,m;
 int y=365;
 int m1=30;
 int w1=7;
 float t;
 clrscr();
 printf("enter the no of days\n");
 scanf("%lu",&t);

 printf("years=%lu\n",t/y);
 m=t%y;

 printf("months=%d\n",m/m1);
 w=m%m1;

 printf("weeks=%d\n",w/w1);
 d=w/w1;

 printf("days=%d\n",d);
 getch();
 }