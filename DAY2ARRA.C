#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],n,i;
  int sum=0;
  printf("\nenter the n value");
  scanf("%d",&n);

  printf("\nenter the array elements");
  for(i=0;i<=n;i++)
  {
   scanf("%d",&a[i]);
   }

   for(i=0;i<=n;i++)
   {
    sum=sum+a[i];
    }
    printf("\nsum of array elements are %d",sum);
   getch();
  }