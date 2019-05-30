#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int m,n,i,j,temp=0;
  printf("\nenter the range");
  scanf(" %d ",&n);
  printf("\nprime numbers in the given range is:");
  for(i=0;i<n;i++)
  {
  m=0;
  for(j=1;j<=n;j++)
  {
  if(i%j==0)
  m++;
  }
  if(m==2)
  printf("%d\n",i);

  }
 getch();
}
