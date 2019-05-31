#include<stdio.h>
#include<conio.h>
struct print{
	     int regno;
	     char name[20];
	      };
	      struct print s1[3];

void main()
{
int i;

  for(i=0;i<3;i++)
  {
  printf("\nenter the regno %d:\t",i);
  scanf("%d",&s1[i].regno);
  printf("\nenter the name");
  scanf("%s",s1[i].name);
  }
 // printf("%d",s.regno);
  for(i=0;i<3;i++)
  { printf("%d",s1[i].regno);
    printf("%s",s1[i].name);
   }

  getch();
}
