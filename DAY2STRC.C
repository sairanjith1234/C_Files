#include<stdio.h>
#include<conio.h>
void main()
{
 char str1[100],str2[100];
 int i;
 clrscr();
 printf("\n enter the string1");
 gets(str1);
// printf("\nenter the string2");
// gets(str2);
// l=strlen(str1);
 for(i=0;str1[i]!='\0';i++)
 {
 str2[i]=str1[i];
//fstr2[i]='\0';
 }
 printf("\nthe value of str2 is:");
 puts(str2);
 getch();
 }
