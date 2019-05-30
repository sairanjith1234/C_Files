#include<stdio.h>
#include<conio.h>
void main()
{
  char str1[100],str2[100];
  int l;
  clrscr();
  printf("\n enter the first string");
  gets(str1);
  printf("\n enter the second string");
  gets(str2);

  printf("\nenter the choice between 1 to 6");
  scanf("%d",&l);

  switch(l)
  {
     case 1:if(strcmp(str1,str2)==0)
	    printf("\nstrings are equal");
	    else
	    printf("\nstrings are not equal");
	    break;

     case 2:printf("\nstring copy=%c",strcpy(str1,str2));
	    printf("\nstring=%c",str1);
	    break;

     case 3:printf("\nstring concatination ",strcat(str1,str2));
	    printf("\n cincatinated=%s",str1);
	    break;

     case 4:printf("\nstring length =%d",strlen(str1));
	    break;
     case 5:printf("\nstring uppercase=",strupr(str2));
	    printf("\n upprcase=%s",str2);
	    break;
     case 6:printf("\nstring lowercase=",strlwr(str1));
	    printf("\nlowercase=%s",str1);
	    break;
     default:
	   exit(0);
  }
  getch();
}