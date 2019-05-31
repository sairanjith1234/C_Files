#include<stdio.h>
#include<conio.h>

struct marks{
	      int rollno[20],chem_marks[20],maths_marks[20],phy_marks[20];
	      int total;
	      char name[20];
	      float percent;
	      };
	      struct marks m[5];
void main()
{
 int i,j;
// printf("\n=======================markslist=====================");
 printf("\nenter the names of 5 students");
 for(i=0;i<5;i++)
 {
  printf("\nenter the name of student");
  scanf("%s",m[i].name);
  printf("\n enter the rool no of student");
  scanf("%d",&m[i].rollno);

  printf("\nenter the 3 subjects marks");
 // for(j=0;j<3;j++)
//  {
    printf("\nenter the marks of chemistery,maths and physics");
    scanf("%d %d %d",&m[i].chem_marks[i],&m[i].maths_marks[i],&m[i].phy_marks[i]);
    m[i].total=m[i].chem_marks[i]+m[i].maths_marks[i]+m[i].phy_marks[i];
    m[i].percent=m[i].total/3;
    printf(" \n total=%d \npercent=%f",m[i].total,m[i].percent);
 //  }
   }

   getch();
 }