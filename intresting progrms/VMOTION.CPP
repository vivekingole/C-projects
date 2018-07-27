#include<stdio.h>
#include<conio.h>
#include<dos.h>
main()
{
int i,j,k,x=0,y=69,z=36,a=8;
clrscr();
for(i=1;i<=36;i++)
{
 for(j=1;j<=x;j++)
 {
 printf(" ");
 }x++;
 printf("vivek");
 for(k=1;k<=y;k++)
 {
 printf(" ");
 }y=y-2;
 printf("vivek");
 delay(30);
 printf("\n");
}
for(i=1;i<=4;i++)
{
 for(j=1;j<=z;j++)
 {
  printf(" ");
  }z++;
  for(k=1;k<=a;k++)
 {
   printf("v");
   }
   a=a-2;
   delay(30);
   printf("\n");
}
getch();
}