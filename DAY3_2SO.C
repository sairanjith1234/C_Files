#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20],i,j,b,n;
 clrscr();
 printf("\nenter no of elements in an array");
 scanf("%d",&n);
 printf("\nenter the elements into array");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  printf("\n before sort elements are");
  for(i=0;i<n;i++)
  {
   printf("\n%d",a[i]);
  }

  for(i=0;i<n;++i)
  {
   for(j=i+1;j<n;++j)
   {
    if(a[i]>a[j])
    {
     b=a[i];
     a[i]=a[j];
     a[j]=b;
     }
   }
  }
   printf("\nsorted elements are ");
   for(i=0;i<n;++i)
   printf("\n%d",a[i]);
   getch();
}