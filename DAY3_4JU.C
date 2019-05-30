#include<stdio.h>
#include<conio.h>
void main()
{
 char str1[20],str2[20];
 int i,jmp;
 printf("\nenter the string");
 gets(str1);
 for(i=0;str1[i]!='\0';i++)
 {
   if(str1[i]>96&&str1[i]<124)
   {
     str2[i]=str1[i]+2;



