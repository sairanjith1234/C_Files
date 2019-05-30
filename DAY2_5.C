#include<stdio.h>
#include<conio.h>
int main()
{
 int a[100],b[100],i,j,n,c=0;
 printf("\nenter the size of array");
 scanf("%d",&n);

 printf("\nEnter elements in array");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   if(a[i]!=-1)
   {
     for(j=i+1;j<n;j++)
     {
       if(a[i]==a[j])
       {
	c++;
	a[j]=-1;
       }
     }
   }
   }
   printf("duplicate numbers in arry %d",c);
   return 0;
 }
