#include<stdio.h>
#include<conio.h>
void main()
{
  char str1[100],str2[100];
  int i,temp=0;
  printf("\nenter the 1st string");
  gets(str1);
  printf("\n enter the 2nd string");
  gets(str2);

  for(i=0;str1[i]!='\0';i++)
  {
   if(str1[i]==str2[i])
   temp=1;
   else
   temp=0;
  }
  if(temp==1)
  printf("\nboth strings are same");
  else
  printf("\n strings are not same");
  getch();
 }