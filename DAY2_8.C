#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int a[10],i,sum=0,sum1=0;
 clrscr();
 printf("\n enter the array");
 for(i=0;i<5;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("\nthe array is ");
 for(i=0;i<5;i++)
 {
  printf("%d",a[i]);
  break;
  }
  printf("\npositive elements");
  for(i=0;i<5;++i)
  {
    if(a[i]>0)
    {
     printf("%d",a[i]);
     sum=(sum+a[i]);
     }
     }
     printf("\nsum of positive elements%d",sum);

     printf("\n negitive elements");
     for(i=0;i<5;++i)
     {
      if(a[i]<0)
      {
       printf("\n %d",a[i]);
       sum1=sum1+a[i];
      }
    }
    printf("\n sum ofnegitive elements %d",sum1);
    getch();

 }