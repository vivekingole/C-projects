//programmer :- vivek ingole
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
clock()
{
 circle(315,240,127);
putpixel(315,240,15);
ellipse(209,107,39,221,69,66);
arc(246,153,79,178,87);
arc(377,150,360,463,88);
ellipse(409,110,-31,140,68,72);
circle(161,47,10);
circle(462,50,10);
line(174,104,224,152);
line(207,75,244,133);
line(464,414,389,344);
line(464,413,402,332);
line(409,68,374,127);
line(441,89,396,142);
line(159,411,222,326);
line(236,339,160,411);
arc(312,80,32,150,37);
arc(314,146,73,110,91);
line(306,56,312,113);
line(317,55,315,112);
line(422,240,400,240);
line(208,240,231,240);
circle(315,240,107);
line(315,134,315,155);
line(315,347,315,326);
line(366,146,359,158);
line(407,186,393,193);
line(412,286,397,280);
line(372,331,363,319);
line(221,290,235,284);
line(260,330,267,319);
line(261,147,271,160);
line(222,186,236,194);
outtextxy(309,122,"12");
outtextxy(370,137,"1");
outtextxy(412,178,"2");
outtextxy(428,237,"3");
outtextxy(416,285,"4");
outtextxy(373,335,"5");
outtextxy(315,355,"6");
outtextxy(198,240,"9");
outtextxy(253,335,"7");
outtextxy(212,292,"8");
outtextxy(248,139,"11");
outtextxy(205,180,"10");

}
speed()
{
  for(long int i=1;i<=1000000;i++)
  {
    for(int j=1;j<=3;j++)
    {

    }
  }
}
setmin(int k)
{
  int j,c=0;
   for(j=90;j>=2;j=j-6)
   {
   c++;
   if(c==k+2)
   goto end;
   }
   for(j=360;j>=90;j=j-6)
   {
   c++;
      if(c==k+2)
   break;
   }
   end:
   return j;
}
sethour(int j,int k)
{
    switch(j)
    {
     case 1:
       if(k<=30) return 66;
       else return 48;
     break;
     case 2:
       if(k<=30) return 30;
       else return 18;
     break;
      case 3:
       if(k<=30) return 360;
       else return 348;
     break;
      case 4:
       if(k<=30) return 366;
       else return 318;
     break;
      case 5:
       if(k<=30) return 300;
       else return 288;
     break;
      case 6:
       if(k<=30) return 270;
       else return 252;
     break;
      case 7:
       if(k<=30) return 240;
       else return 222;
     break;
      case 8:
       if(k<=30) return 210;
       else return 192;
     break;
      case 9:
       if(k<=30) return 180;
       else return 162;
     break;
      case 10:
       if(k<=30) return 150;
       else return 138;
     break;
 case 11:
       if(k<=30) return 120;
       else return 102;
     break;
 case 12:
       if(k<=30) return 90;
       else return 72;
     break;

    }
   //return j;
}
main(){
clrscr();
int d=0,m,i,j,k=90,l=360,sec=0,min=0,hour;
char array[10];
struct time t;
gettime(&t);
initgraph(&d,&m,"c:\\tc\\bgi");
     k=setmin(t.ti_min);
     min=t.ti_min+1;
      hour=sethour(t.ti_hour,k);
for(i=1;!kbhit();i++)
{
   for(j=90;j>=2;j=j-6)
   {
    cleardevice();
     clock();
	 pieslice(315,240,hour,hour-2,50); //hour

       if(k>=2)
       pieslice(315,240,k,k-2,77); //minut
      else
       pieslice(315,240,l-2,l,77); //minut\
     pieslice(315,240,j,j-2,84);
       sprintf(array,":%d",min);
       outtextxy(340,430,array);
       outtextxy(272,430,"time:-");
	     sprintf(array,"%d",t.ti_hour);
       outtextxy(325,430,array);
	     sprintf(array,":%d",sec++);
       outtextxy(365,430,array);

   delay(942);
   speed();
   if(kbhit())
   goto end;
   }
   for(j=360;j>=90;j=j-6)
   {
    cleardevice();
     clock();
     pieslice(315,240,hour,hour-2,50); //hour

       if(k>=2)
       pieslice(315,240,k,k-2,77); //minut
      else
       pieslice(315,240,l-2,l,77); //minut\

	sprintf(array,":%d",min);
       outtextxy(340,430,array);
       outtextxy(272,430,"time:-");
	     sprintf(array,"%d",t.ti_hour);
       outtextxy(325,430,array);
	     sprintf(array,":%d",sec++);
       outtextxy(365,430,array);

     pieslice(315,240,j-2,j,84);
       speed();

	delay(942);
     if(kbhit())
   goto end;

   }
	  if(k>=2)
   k=k-6;
   else
   l=l-6  ;
   sec=0;
  min++;
}  //main for loop
getch();
end:

}