#include<stdio.h>
#include<conio.h>
main()
{
int a=1,b=5,c=0,i,j,k;
clrscr();
printf("\n\n");
printf("                       ******** chess  board ********* ");
printf("\n\n\n");
printf("               ");
for(i=1;i<=40;i++)
{
  if((i>=1&&i<=5)||(i>=11&&i<=15)||(i>=21&&i<=25)||(i>=31&&i<=35))
  {
      for(int l=1;l<=4;l++)
      {
	   for(j=1;j<=6;j++)
	   {
	       printf("*");
	    }
	   for(k=1;k<=6;k++)
	    {
	    if(i==1)
	    printf("-");
	    else if(l==4&&k==6)
	    printf("|");
	    else
		printf(" ");
	    }
       }
   }
  else
  {
      for(int l=1;l<=4;l++)
      {
	   for(k=1;k<=6;k++)
	    {
	      if(i==40)
	      printf("-");
	    else if(l==1&&k==1)
	      printf("|");
	      else
		printf(" ");
	    }
	     for(j=1;j<=6;j++)
	   {
	       printf("*");
	    }

       }
   }

printf("\n");
printf("               ");

}

getch();
}