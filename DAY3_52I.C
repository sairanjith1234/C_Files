#include<stdio.h>
#include<conio.h>
 main()
{
 char s1[20],s2[20],s3[20];
 int i=0,j,pos=3,t;
 printf("\n enter the first string");
 gets(s1);
 printf("\n enter the second string");
 gets(s2);
 //len1=strlen(s1);
// len2=strlen(s2);
 for(i=0;i<pos;i++)
 {
  s3[i]=s1[i];
 }
 t=pos;
 for(i=0;s2[i]!='\0';i++)
 {
  s3[pos]=s2[i];
  pos++;
  }

  for(i=t;s1[i]!='\0';i++)
  {

    s3[pos]=s1[i];
    pos++;
 }
    s3[pos]='\0';

   puts(s3);
   getch();
 }





 //  tlen=len1+len2;
 //  ref=len2+pos;
 //  for(i=pos;i<tlen;i++)
 //  {
 //   temp= s3[i];
 //   if(ran<s2[i])
 //   {
 //    s1[i]=s2[ran];
 //    ran=ran+1;
//     }
 //    s1[ref]=temp;
  //   ref=ref+1;
   //  }
  //   puts(s1);
 //    getch();
// }
