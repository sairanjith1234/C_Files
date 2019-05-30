#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 short b;
 long c;
 unsigned int d;
 unsigned short e;
 unsigned long f;
 char g;
 unsigned char h;
 float i;
 double j;
 long double k;
 clrscr();
 printf("enter the values of datatypes"\n);
 printf("enter the values of A,B,C,D,E,F");
 scanf("%i,%d,%ld,%u,%hu,%lu",&a,&b,&c,&d,&e,&f);
 printf("%i,\n%d,\n%ld,\n%u,\n%hu,\n%lu\n",a,b,c,d,e,f);
 printf("enter the values ofG,H");
 scanf("%c,%c",&g,&h);
 printf("\n%c,\n%c\n",g,h);
 printf("enter the values of float variable i,j,k");
 scanf("%f,%lf,%Lf",i,j,k);
 printf("\n%f,\n%lf,\n%Lf\n",i,j,k);
 getch();
 }