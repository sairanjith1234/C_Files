#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r,k=0;
printf("\n enter the range");
scanf("%d",&r);
for(i=1;i<=r;++i,k=0)
{
  for(j=1;j<=r-i;++j)
  {
  printf(" ");
  }
  while(k!=2*i-1)
  {
   printf("*");
   ++k;
  }
  printf("\n");
  }
  getch();
}