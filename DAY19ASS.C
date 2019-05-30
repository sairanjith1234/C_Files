#include<stdio.h>
#include<conio.h>
void main()
{
int num,count=0;
printf("\nenter a value");
scanf("%d",&num);
do
{
num=num/10;
count=count+1;
}
while(num>0);
printf("\ntotal no of digits=%d",count);
getch();
}