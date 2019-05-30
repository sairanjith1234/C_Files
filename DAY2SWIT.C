#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
 int n,ch,dif,rem1,rem2,rem3,rem4,rem5,rem6,rem7,sum,a,b,es=0,os=0;
 printf("\n===================DIVISIBILITY RULE================");
 clrscr();
 printf("\nenter the number");
 scanf("%d",&n);

 printf("\nenter the choice between 2 to 11");
 scanf("%d",&ch);
 switch(ch)
 {
 case 2:
	 if((n%2)==0)
	 printf("\nthe number is divisible by 2");
	 else
	 printf("\nthe number is not divisible by 2");
	 break;

 case 3:
	  while(n!=0)
	  {
	   rem1=n%10;
	   sum=sum+rem1;
	   n=n/10;
	   }
	   if(sum%3==0)
	   printf("\nthe number is divisible by 3");
	   else
	   printf("\nthe number is not divisible by 3");
	   break;
 case 4:   rem2=n%100;
	      if((rem2%4)==0)
	      printf("\n the number is divisible by 4");
	      else
	      printf("\n not divisible by 4");
	      break;
 case 5: rem3=n%10;
	 if(rem3==0||rem3==5)
	 printf("\n it is divisible by 5");
	 else
	 printf("\n not divisible by 5");
	 break;
 case 6: while(n!=0)
	 {
	 rem4=n%10;
	 sum=sum+rem4;
	 n=n/10;
	 }
	 if(rem4%2==0&&sum%3==0)
	   printf("\ndivisible by 6");
	  else
	  printf("\nnot divisible by 6");
	  break;

 case 7:if(n%7==0)
	printf("\nit divisible by 7");
	else
	printf("\n not divisible by 7");
	break;
 case 8:rem5=n%100;
	if(rem5%8==0)
	 printf("\nit is divisible by 8");
	 else
	  printf(" \nit is not divisible by8");
	 break;

 case 9:
       rem6=n%100;
       if(rem6%3==0||rem6%9==0)
       printf("\nit isdivisible by9");
       else
       printf("\n not divisible by 9");
       break;


 case 10:rem7=n%100;
	if(rem7==0)
	printf("\n divisible by 10");
	else
	printf("\n not divisible by 10");
	break;
 case 11: a=n;
	 b=n/10;
	 while(a>0)
	 {
	  os=os+(a%10);
	  a=a/100;
	  }
	  while(b>0)
	  {
	  es=es+(b%10);
	  b=b/100;
	  }
	  dif=os-es;
	  if(dif%11==0||dif==0)
	  printf("divisible by11");
	  else
	  printf("\nnot divisible by 11");
	  break;


  default :
	 exit(0);
	 }

getch();
}




