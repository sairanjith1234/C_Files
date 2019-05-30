#include<stdio.h>
#include<conio.h>
void main()
{
  char str1[100],str2[100];
  int length=0,temp,i;

  for(i=0;str1[i]!='\0';i++)
   length++;
   temp=length;
   for(i=0;str2[i]!='\0';i++)
   {
     str1[temp]=str2[i];
     temp++;
     }

     str1[temp]='\0';
     printf("\n concatination of string is\n");
     length++;
     while(str1[i]!='\0')
     i++;
     printf("%d",i);
  getch();
  }


