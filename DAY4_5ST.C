#include<stdio.h>
#include<conio.h>
struct distance{


		  double foot,temp1,temp2;//inch 1=0.0833foot
		  int   inch[10];
		  };
		  struct distance d;
void main()
{
 int i,n;
 clrscr();
// printf("\n enter the inches to find foot distance");
// scanf("%d %d",&d.inch1,&d.inch2);
  printf("\nenter the range n value");
  scanf("%d",&n);
  printf("\n enter the values in inches");
  d.temp1=0.0833;
  for(i=0;i<n;i++)
  {
   scanf("%d",&d.inch[i]);
    d.temp2=d.temp1*d.inch[i];
    d.foot=d.temp2++;
   }
   printf("\n foot distance =%f",d.foot);
//  temp1=d.inch1/12;
 // temp2=d.inch2/12;
 // d.foot=temp1+temp2;
 // printf("\n%d \n%d \n%f",temp1,temp2,d.foot);
  getch();
  }
