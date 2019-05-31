#include<stdio.h>
#include<conio.h>
struct date{
	     int dt,mn,year;
	     };
	     struct date d[2];
void main()
{
 int dt=29,mn=4,year=1998,n,i;
 clrscr();
 printf("\n enter no of dates to enter n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   printf("\nenter the datein the form of: dt mn year");
   scanf("%d %d %d",&d[i].dt,&d[i].mn,&d[i].year);
   if(dt==d[i].dt&&mn==d[i].mn&&year==d[i].year)
   {
     printf("\n both the dates are same");
   }
   else
   printf("\n both are not same");
   }
   getch();
 }
