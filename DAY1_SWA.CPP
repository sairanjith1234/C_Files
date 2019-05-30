#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
 clrscr();
 printf("enter a, b values");
 scanf("%d %d",&a,&b);
 c=a^b;
 printf("c=%d \n",c);
 a=a^b;
 printf("a=%d \n",a);
 b=a^b;
 printf("b=%d \n",b);
 a=b^a;
 printf("a=%d \n",a);
 printf("the values of a&b %d %d",a,b);
 getch();
 }