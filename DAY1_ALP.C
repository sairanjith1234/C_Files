#include<stdio.h>
#include<conio.h>
void main()
{
//{
// char a='a',b='A',c=0;
 //scanf("%d %d %d",&a,&b,&c);

 //printf("print a=%d,b=%d,c=%d");
 //getch();
 // }
   char l;
   clrscr();
   printf("\nenter any charecter");
   scanf("%c",&l);
 if(l>64&&l<123)
  {
     if(l==65||l==69||l==73||l==79||l==85||l==97||l==101||l==105||l==111||l==117)
     {
      printf("\nthe given letter is vowel");
     }
     else
    {
     printf("\ngiven letter is consunent");
    }
   }
if(l>64&&l<=91)
 {
  printf("\nit is upper case letter");
  }
  else if(l>97&&l<123)
  {
   printf(" \n it is lower case letter");
   }
   else if(l>48&&l<57)
   {
    printf("\n it is a number");
    }
    else
    {
     printf("\nit is a special charecter");
     }
getch();
}



