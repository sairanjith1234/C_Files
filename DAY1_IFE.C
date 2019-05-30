#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int nsubj,max,m1,m2,m3,m4,m5,total,avg,grade,perc;
 max=500;
 clrscr();
 printf("\n====================marks list==================\n");

 printf("enter the no of subjects\n",nsubj);
 scanf("%d",&nsubj);

 printf("\nenter the marks of 5 subjects");
 printf("\nenter for m1");
 scanf("%d",&m1);
 printf("\nenter for m2");
 scanf("%d",&m2);
 printf("\nenter for m3");
 scanf("%d",&m3);
 printf("\nenter for m4");
 scanf("%d",&m4);
 printf("\n enter for m5");
 scanf("%d",&m5);


 total=m1+m2+m3+m4+m5;
 printf("\n total marks=%d \n",total);

 perc=(total/5)*100;
 printf("percentage=%d \n",perc);

 avg=total/5;
 printf("\n avg=%d \n",avg);

 if(total>400)
  printf("\ngrade is O");
   else if(total>300 & total<399)
  {
   printf("\n grade is E");
  }
   else if(total>200 & total<299)
   {
     printf("\n grade is A");
   }
    else
    {
     printf(" grade is Fail");
    }
    getch();
 }
