#include<stdio.h>
#include<conio.h>
void main()
{
 char str1[100];
 int i;
 printf("\nenter the string");
 gets(str1);
  for(i=0;str1[i]!='\0';i++)
  {
   str1[i]=str1[i]-32;
   }
   clrscr();
   printf("%s",str1);
   getch();
 }
