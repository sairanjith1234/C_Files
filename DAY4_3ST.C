#include<stdio.h>
#include<conio.h>
struct student{
	       char rollno[10];
	       char name[10];
	       int age[10];
	       };
	       struct student s1[5];
void main()
{
  int i;
  for(i=0;i<5;i++)
  {
    printf("\n enter the rollno ");
    scanf("%s",s1[i].rollno);
    printf("\nenter the name of the student");
    scanf("%s",s1[i].name);
    printf("\nenter the age of the student");
    scanf("%d",s1[i].age);
  }
  for(i=1;i<5;i++)
  {
   printf("\nrollno is %s",s1[i].rollno);
   printf("\nname is %s",s1[i].name);
   printf("\nage is %d",s1[i].age);
   }
   getch();
  }