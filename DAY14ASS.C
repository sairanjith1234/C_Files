#include<stdio.h>
#include<conio.h>
void main()
{
 char id[20];
 int hour;
 double val,sal;
 printf("\ninput the emp id");
 scanf("%c ",&id);
 printf("\n working hours");
 scanf("%d",&hour);
 print("\nsalary for hour");
 scanf("%lf",&val);
 sal=val*hour;
 printf("\n emp id=%c\n sal=%lf\n",id,sal);
getch();
 }