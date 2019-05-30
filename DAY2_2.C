#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20],i,n,p,x;
 clrscr();
 printf("\nenterno of elements ");
 scanf("%d",&n);
 printf("enter%d ele in asc order",n);
 for(i=0;i<n;i++)
 {
  printf("\nelement=%d",i);
  scanf("%d",&a[i]);
  }
  printf("\n value to insert");
  scanf("%d",&x);
  printf("\npos to ins");
  scanf("%d",&p);
  for(i=n;i>=p;i--)
  a[i]=a[i-1];
  a[p-1]=x;
  for(i=0;i<=n;i++)
  printf("%d",a[i]);
  printf("\n\n");
  getch();
  }