#include<stdio.h>
#include<conio.h>
main()
{
int i,sum=0,p,s,add1=0,add2=0,h=0,j=0,g[100],q[100],c1=0,c2=0,s1,s2;
char b[6][10],*a="end",*c="sugar",*d="tea";
clrscr();
printf("\n product list (enter end for stop the entry)\n\n 1.sugar = 50Rs\n\n 2.tea = 10Rs\n\n");
printf("enter product name with it's quantity\n\n");
for(i=0;i<=100;i++)
{
scanf("%s",&b[i][10]);
if(b[i][10]==*a)
{goto v;}
scanf("%d",&p);
if (b[i][10]==*c)
{
g[h]=p;
h++;
c1=c1++;
sum=sum+(50*p);
}
else if(b[i][10]==*d)
{
q[j]=p;
j++;
sum=sum+(10*p);
}
}
v:
for(i=0;i<=c1;i++)
{
add1=add1+g[i];
}
s1=50*add1;
printf("\n\ntotal sugar bill is %d",s1);
for(i=0;i<=c2;i++)
{
add2=add2+q[i];
}
s2=10*add2;
printf("\n\ntotal tea bill is %d",s2);

printf("\n\ntotal bill is %d",sum);
getch();
}




