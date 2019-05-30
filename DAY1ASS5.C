#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int amnt,nt100,nt50,nt20,nt10,nt5,nt2,nt1;
 printf("\nenter the amnt");
 scanf("%d",&amnt);

 nt100=(int)amnt/100;
 printf("\nno of hundred notes=%d",nt100);

 nt50=(int)amnt/50;
 printf("\nno of fifty notes=%d",nt50);

 nt20=(int)amnt/20;
 printf("\nno of twenty notes=%d",nt20);

 nt10=(int)amnt/10;
 printf("\n no often notes=%d",nt10);

 nt5=(int)amnt/5;
 printf("\n no of five notes=%d",nt5);

 nt2=(int)amnt/2;
 printf("\n no of two notes=%d",nt2);

 nt1=(int)amnt/1;
 printf("\n no of one notes=%d",nt1);
 getch();
 }
