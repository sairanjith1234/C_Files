#include<stdio.h>
#include<conio.h>
void main()
{
 char str1[30],str2[30];
 int i,len;
 clrscr();

 printf("\nenter the string");
 gets(str1);
 len=strlen(str1)-1;
 for(i=0;str1[i]!='\0';i++)
 {
  str2[len]=str1[i];
  len--;
  }
  printf("\nreverse of string");
  puts(str2);

  getch();
 }

