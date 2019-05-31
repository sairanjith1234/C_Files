#include<stdio.h>
#include<conio.h>
struct student{
	       char rollno[20];
	       char name[20],address[20];
	       int age[20],marks[20];
	       };
	       struct student s1[15];
void main()
{
  int i,j;
  for(i=0;i<15;i++)
  {
    printf("\n enter the rollno ");
    scanf("%s",s1[i].rollno);
    printf("\nenter the name of the student");
    scanf("%s",s1[i].name);
    printf("\nenter the age of the student");
    scanf("%d",s1[i].age);
    printf("\nenter the  marks of 5subjects");
    for(j=0;j<5;j++)
    {
      printf("\n enter the marks of %d subject",j);
      scanf("%d",&s1[i].marks[j]);
    }
    printf("\nenter the address");
    scanf("%s",s1[i].address);
  }
  for(i=1;i<15;i++)
  {
   printf("\nrollno is %s",s1[i].rollno);
   printf("\nname is %s",s1[i].name);
   printf("\nage is %d",s1[i].age);
   printf("\nthe marks are");
   for(j=0;j<5;j++)
   {
    printf("\n%d",&s1[i].marks[j]);
   }
   printf("\n address:%s",s1[i].address);
   }
   getch();
  }