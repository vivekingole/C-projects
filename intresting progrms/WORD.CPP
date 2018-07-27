#include<stdio.h>
#include<conio.h>
int num[10],qty,c=0;
array(long int n)
{
 long int sum=0,r,m=0;
  while(n>0)
  {
   r=n%10;
   sum=sum*10+r;
   n=n/10;
   c++;
  }
  while(sum>0)
  {
   num[m++]=sum%10;
   sum=sum/10;
  }
  return c;
}
onenum(int n)
{
  switch(n)
  {
    case 1: printf("one "); break;
    case 2: printf("two "); break;
    case 3: printf("three "); break;
    case 4: printf("four "); break;
    case 5: printf("five "); break;
    case 6: printf("six "); break;
    case 7: printf("seven "); break;
    case 8: printf("eight "); break;
    case 9: printf("nine "); break;
  }
}
twono(int n,int m)
{
  switch(n)
  {
    case 2: printf("twenty "); break;
    case 3: printf("thirty "); break;
    case 4: printf("fourty "); break;
    case 5: printf("fifty "); break;
    case 6: printf("sixty "); break;
    case 7: printf("seventy "); break;
    case 8: printf("eighty "); break;
    case 9: printf("ninty "); break;
    case 1:
	     switch(num[m])
	     {
	    case 1: printf("eleven "); break;
	    case 2: printf("twelve "); break;
	    case 3: printf("thirten "); break;
	    case 4: printf("fourteen "); break;
	    case 5: printf("fifteen "); break;
	    case 6: printf("sixteen "); break;
	    case 7: printf("seventeen "); break;
	    case 8: printf("eighteen "); break;
	    case 9: printf("ninteen "); break;
	    case 0: printf("ten "); break;
	     }
  }
}
main()
{
long int number;
clrscr();
 printf("enter any no. :- ");
 scanf("%ld",&number);
 printf("%ld",number);
 qty=array(number);

 if(number==0)
  printf("zero");
 else if(qty==11)
 {
 onenum(num[0]);
 printf("thousand ");
   onenum(num[1]);
     if(num[1])
   printf("hundred ");
   twono(num[2],3);
   if(num[2]!=1)
     onenum(num[3]);
   for(int i=1;i<=7;i++)
   {
     num[i]=num[i+3];
   }
    goto core;
 }

    else if(qty==10)
 {
   onenum(num[0]);
   printf("hundred ");

   twono(num[1],2);
   if(num[1]!=1)
     onenum(num[2]);
   for(int i=1;i<=7;i++)
   {
     num[i]=num[i+2];
   }
    goto core;
 }
  else if(qty==9)
 {
   twono(num[0],1);
   if(num[0]!=1)
     onenum(num[1]);
   for(int i=1;i<=7;i++)
   {
     num[i]=num[i+1];
   }
    goto core;
 }
 else if(qty==8)
 {
   onenum(num[0]);
   core:
   printf("core ");
   twono(num[1],2);
   if(num[1]!=1)
     onenum(num[2]);
     if(num[1]||num[2])
     printf("lakh ");

   twono(num[3],4);
   if(num[3]!=1)
   onenum(num[4]);
   if(num[3]||num[4])
   printf("thousand ");
   onenum(num[5]);
   if(num[5])
   printf("hundred ");

   twono(num[6],7);
   if(num[6]!=1)
   onenum(num[7]);
 }
 else if(qty==7)
 {
   twono(num[0],1);
   if(num[0]!=1)
     onenum(num[1]);
     printf("lakh ");

   twono(num[2],3);
   if(num[2]!=1)
   onenum(num[3]);
   if(num[2]||num[3])
   printf("thousand ");
   onenum(num[4]);
   if(num[4])
   printf("hundred ");

   twono(num[5],6);
   if(num[5]!=1)
   onenum(num[6]);
 }
  else if(qty==6)
 {
     onenum(num[0]);
     printf("lakh ");

   twono(num[1],2);
   if(num[1]!=1)
   onenum(num[2]);
   if(num[1]||num[2])
   printf("thousand ");
   onenum(num[3]);
   if(num[3])
   printf("hundred ");

   twono(num[4],5);
   if(num[4]!=1)
   onenum(num[5]);
 }
    else if(qty==5)
 {
   twono(num[0],1);
   if(num[0]!=1)
   onenum(num[1]);
   printf("thousand ");
   onenum(num[2]);
   if(num[2])
   printf("hundred ");

   twono(num[3],4);
   if(num[3]!=1)
   onenum(num[4]);
 }
      else if(qty==4)
 {
   onenum(num[0]);
   printf("thousand ");
   onenum(num[1]);
   if(num[1])
   printf("hundred ");

   twono(num[2],3);
   if(num[2]!=1)
   onenum(num[3]);
 }
 else if(qty==3)
 {
   onenum(num[0]);
   printf("hundred ");

   twono(num[1],2);
   if(num[1]!=1)
   onenum(num[2]);
 }
  else if(qty==2)
 {
   twono(num[0],1);
   if(num[0]!=1)
   onenum(num[1]);
 }
 else if(qty==1)
 {
   onenum(num[0]);
 }
getch();
}
