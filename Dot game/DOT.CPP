//programmer :- vivek ingole
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int lineset[41],x1=100,y1=100,
x[6]={0,160,240,320,400,480},
y[6]={0,60,140,220,300,380},user=0;
char move,ch,name[2][10],n1,n2;
dots()
{
circle(160,60,3);
circle(240,60,3);
circle(320,60,3);
circle(400,60,3);
circle(480,60,3);
circle(160,140,3);
circle(240,140,3);
circle(320,140,3);
circle(400,140,3);
circle(480,140,3);
circle(160,220,3);
circle(240,220,3);
circle(320,220,3);
circle(400,220,3);
circle(480,220,3);
circle(160,300,3);
circle(240,300,3);
circle(320,300,3);
circle(400,300,3);
circle(480,300,3);
circle(160,380,3);
circle(240,380,3);
circle(320,380,3);
circle(400,380,3);
circle(480,380,3);
floodfill(160,60,15);
floodfill(240,60,15);  //
floodfill(320,60,15);
floodfill(400,60,15);
floodfill(480,60,15);
floodfill(160,140,15);
floodfill(240,140,15);
floodfill(320,140,15);
floodfill(400,140,15);
floodfill(480,140,15);
floodfill(160,220,15);
floodfill(240,220,15);
floodfill(320,220,15);
floodfill(400,220,15);
floodfill(480,220,15);
floodfill(160,300,15);
floodfill(240,300,15);
floodfill(320,300,15);
floodfill(400,300,15);
floodfill(480,300,15);
floodfill(160,380,15);
floodfill(240,380,15);
floodfill(320,380,15);
floodfill(400,380,15);
floodfill(480,380,15);
}
update()
{
 if(move=='2') y1+=5;
 else if(move=='8') y1-=5;
 else if(move=='4') x1-=5;
 else if(move=='6') x1+=5;
   circle(x1,y1,4);
}
setlines();   //declaration
insert1()
{
 if((x1>=160 && x1<=240) && (y1>=55&&y1<=65) && lineset[1]!=1)
 {
   dots(); setlines();
   line(x[1],y[1],x[2],y[1]);
   if((ch=getch()==32))
   lineset[1]=1;
 }
 else if((x1>=240 && x1<=320) && (y1>=55&&y1<=65) && lineset[2]!=1)
 {
   dots(); setlines();
   line(x[2],y[1],x[3],y[1]);
   if((ch=getch()==32))
   lineset[2]=1;
 }
 else if((x1>=320 && x1<=400) && (y1>=55&&y1<=65) && lineset[3]!=1)
 {
   dots(); setlines();
   line(x[3],y[1],x[4],y[1]);
   if(ch=getch()==32)
   lineset[3]=1;
 }
 else if((x1>=400 && x1<=480) && (y1>=55&&y1<=65) && lineset[4]!=1)
 {
   dots(); setlines();
   line(x[4],y[1],x[5],y[1]);
   if(ch=getch()==32)
   lineset[4]=1;
 }
  else if((x1>=155 && x1<=165) && (y1>=60&&y1<=140) && lineset[5]!=1)
 {
   dots(); setlines();
   line(x[1],y[1],x[1],y[2]);
   if(ch=getch()==32)
   lineset[5]=1;
 }
  else if((x1>=235 && x1<=245) && (y1>=60&&y1<=140) && lineset[6]!=1)
 {
   dots(); setlines();
   line(x[2],y[1],x[2],y[2]);
   if(ch=getch()==32)
   lineset[6]=1;
 }
  else if((x1>=315 && x1<=325) && (y1>=60&&y1<=140) && lineset[7]!=1)
 {
   dots(); setlines();
   line(x[3],y[1],x[3],y[2]);
   if(ch=getch()==32)
   lineset[7]=1;
 }
  else if((x1>=395 && x1<=405) && (y1>=60&&y1<=140) && lineset[8]!=1)
 {
   dots(); setlines();
   line(x[4],y[1],x[4],y[2]);
   if(ch=getch()==32)
   lineset[8]=1;
 }
  else if((x1>=475 && x1<=485) && (y1>=60&&y1<=140) && lineset[9]!=1)
 {
   dots(); setlines();
   line(x[5],y[1],x[5],y[2]);
   if(ch=getch()==32)
   lineset[9]=1;
 }
  else if((x1>=160 && x1<=240) && (y1>=135&&y1<=145) && lineset[10]!=1)
 {
   dots(); setlines();
   line(x[1],y[2],x[2],y[2]);
   if(ch=getch()==32)
   lineset[10]=1;
 }
  else if((x1>=240 && x1<=320) && (y1>=135&&y1<=145) && lineset[11]!=1)
 {
   dots(); setlines();
   line(x[2],y[2],x[3],y[2]);
   if(ch=getch()==32)
   lineset[11]=1;
 }
  else if((x1>=320 && x1<=400) && (y1>=135&&y1<=145) && lineset[12]!=1)
 {
   dots(); setlines();
   line(x[3],y[2],x[4],y[2]);
   if(ch=getch()==32)
   lineset[12]=1;
 }
  else if((x1>=400 && x1<=480) && (y1>=135&&y1<=145) && lineset[13]!=1)
 {
   dots(); setlines();
   line(x[4],y[2],x[5],y[2]);
   if(ch=getch()==32)
   lineset[13]=1;
 }
  else if((x1>=155 && x1<=165) && (y1>=140&&y1<=220) && lineset[14]!=1)
 {
   dots(); setlines();
   line(x[1],y[2],x[1],y[3]);
   if(ch=getch()==32)
   lineset[14]=1;
 }
  else if((x1>=235 && x1<=245) && (y1>=140&&y1<=220) && lineset[15]!=1)
 {
   dots(); setlines();
   line(x[2],y[2],x[2],y[3]);
   if(ch=getch()==32)
   lineset[15]=1;
 }
  else if((x1>=315 && x1<=325) && (y1>=140&&y1<=220) && lineset[16]!=1)
 {
   dots(); setlines();
   line(x[3],y[2],x[3],y[3]);
   if(ch=getch()==32)
   lineset[16]=1;
 }
  else if((x1>=395 && x1<=405) && (y1>=140&&y1<=220) && lineset[17]!=1)
 {
   dots(); setlines();
   line(x[4],y[2],x[4],y[3]);
   if(ch=getch()==32)
   lineset[17]=1;
 }
  else if((x1>=475 && x1<=485) && (y1>=140&&y1<=220) && lineset[18]!=1)
 {
   dots(); setlines();
   line(x[5],y[2],x[5],y[3]);
   if(ch=getch()==32)
   lineset[18]=1;
 }
   else if((x1>=160 && x1<=240) && (y1>=215&&y1<=225) && lineset[19]!=1)
 {
   dots(); setlines();
   line(x[1],y[3],x[2],y[3]);
   if(ch=getch()==32)
   lineset[19]=1;
 }
  else if((x1>=240 && x1<=320) && (y1>=215&&y1<=225) && lineset[20]!=1)
 {
   dots(); setlines();
   line(x[2],y[3],x[3],y[3]);
   if(ch=getch()==32)
   lineset[20]=1;
 }
  else if((x1>=320 && x1<=400) && (y1>=215&&y1<=225) && lineset[21]!=1)
 {
   dots(); setlines();
   line(x[3],y[3],x[4],y[3]);
   if(ch=getch()==32)
   lineset[21]=1;
 }
  else if((x1>=400 && x1<=480) && (y1>=215&&y1<=225) && lineset[22]!=1)
 {
   dots(); setlines();
   line(x[4],y[3],x[5],y[3]);
   if(ch=getch()==32)
   lineset[22]=1;
 }
  else if((x1>=155 && x1<=165) && (y1>=220&&y1<=300) && lineset[23]!=1)
 {
   dots(); setlines();
   line(x[1],y[3],x[1],y[4]);
   if(ch=getch()==32)
   lineset[23]=1;
 }
  else if((x1>=235 && x1<=245) && (y1>=220&&y1<=300) && lineset[24]!=1)
 {
   dots(); setlines();
   line(x[2],y[3],x[2],y[4]);
   if(ch=getch()==32)
   lineset[24]=1;
 }
  else if((x1>=315 && x1<=325) && (y1>=220&&y1<=300) && lineset[25]!=1)
 {
   dots(); setlines();
   line(x[3],y[3],x[3],y[4]);
   if(ch=getch()==32)
   lineset[25]=1;
 }
  else if((x1>=395 && x1<=405) && (y1>=220&&y1<=300) && lineset[26]!=1)
 {
   dots(); setlines();
   line(x[4],y[3],x[4],y[4]);
   if(ch=getch()==32)
   lineset[26]=1;
 }
  else if((x1>=475 && x1<=485) && (y1>=220&&y1<=300) && lineset[27]!=1)
 {
   dots(); setlines();
   line(x[5],y[3],x[5],y[4]);
   if(ch=getch()==32)
   lineset[27]=1;
 }
   else if((x1>=160 && x1<=240) && (y1>=295&&y1<=305) && lineset[28]!=1)
 {
   dots(); setlines();
   line(x[1],y[4],x[2],y[4]);
   if(ch=getch()==32)
   lineset[28]=1;
 }
  else if((x1>=240 && x1<=320) && (y1>=295&&y1<=305) && lineset[29]!=1)
 {
   dots(); setlines();
   line(x[2],y[4],x[3],y[4]);
   if(ch=getch()==32)
   lineset[29]=1;
 }
  else if((x1>=320 && x1<=400) && (y1>=295&&y1<=305) && lineset[30]!=1)
 {
   dots(); setlines();
   line(x[3],y[4],x[4],y[4]);
   if(ch=getch()==32)
   lineset[30]=1;
 }
  else if((x1>=400 && x1<=480) && (y1>=295&&y1<=305) && lineset[31]!=1)
 {
   dots(); setlines();
   line(x[4],y[4],x[5],y[4]);
   if(ch=getch()==32)
   lineset[31]=1;
 }
  else if((x1>=155 && x1<=165) && (y1>=300&&y1<=380) && lineset[32]!=1)
 {
   dots(); setlines();
   line(x[1],y[4],x[1],y[5]);
   if(ch=getch()==32)
   lineset[32]=1;
 }
  else if((x1>=235 && x1<=245) && (y1>=300&&y1<=380) && lineset[33]!=1)
 {
   dots(); setlines();
   line(x[2],y[4],x[2],y[5]);
   if(ch=getch()==32)
   lineset[33]=1;
 }
  else if((x1>=315 && x1<=325) && (y1>=300&&y1<=380) && lineset[34]!=1)
 {
   dots(); setlines();
   line(x[3],y[4],x[3],y[5]);
   if(ch=getch()==32)
   lineset[34]=1;
 }
  else if((x1>=395 && x1<=405) && (y1>=300&&y1<=380) && lineset[35]!=1)
 {
   dots(); setlines();
   line(x[4],y[4],x[4],y[5]);
   if(ch=getch()==32)
   lineset[35]=1;
 }
  else if((x1>=475 && x1<=485) && (y1>=300&&y1<=380) && lineset[36]!=1)
 {
   dots(); setlines();
   line(x[5],y[4],x[5],y[5]);
   if(ch=getch()==32)
   lineset[36]=1;
 }
    else if((x1>=160 && x1<=240) && (y1>=375&&y1<=385) && lineset[37]!=1)
 {
   dots(); setlines();
   line(x[1],y[5],x[2],y[5]);
   if(ch=getch()==32)
   lineset[37]=1;
 }
  else if((x1>=240 && x1<=320) && (y1>=375&&y1<=385) && lineset[38]!=1)
 {
   dots(); setlines();
   line(x[2],y[5],x[3],y[5]);
   if(ch=getch()==32)
   lineset[38]=1;
 }
  else if((x1>=320 && x1<=400) && (y1>=375&&y1<=385) && lineset[39]!=1)
 {
   dots(); setlines();
   line(x[3],y[5],x[4],y[5]);
   if(ch=getch()==32)
   lineset[39]=1;
 }
  else if((x1>=400 && x1<=480) && (y1>=375&&y1<=385) && lineset[40]!=1)
 {
   dots(); setlines();
   line(x[4],y[5],x[5],y[5]);
   if(ch=getch()==32)
   lineset[40]=1;
 }
}
setlines()
{
 if(lineset[1]==1) line(x[1],y[1],x[2],y[1]);
 if(lineset[2]==1) line(x[2],y[1],x[3],y[1]);
 if(lineset[3]==1) line(x[3],y[1],x[4],y[1]);
 if(lineset[4]==1) line(x[4],y[1],x[5],y[1]);

 if(lineset[5]==1) line(x[1],y[1],x[1],y[2]);
 if(lineset[6]==1) line(x[2],y[1],x[2],y[2]);
 if(lineset[7]==1) line(x[3],y[1],x[3],y[2]);
 if(lineset[8]==1) line(x[4],y[1],x[4],y[2]);
 if(lineset[9]==1) line(x[5],y[1],x[5],y[2]);

 if(lineset[10]==1) line(x[1],y[2],x[2],y[2]);
 if(lineset[11]==1) line(x[2],y[2],x[3],y[2]);
 if(lineset[12]==1) line(x[3],y[2],x[4],y[2]);
 if(lineset[13]==1) line(x[4],y[2],x[5],y[2]);

 if(lineset[14]==1) line(x[1],y[2],x[1],y[3]);
 if(lineset[15]==1) line(x[2],y[2],x[2],y[3]);
 if(lineset[16]==1) line(x[3],y[2],x[3],y[3]);
 if(lineset[17]==1) line(x[4],y[2],x[4],y[3]);
 if(lineset[18]==1) line(x[5],y[2],x[5],y[3]);

 if(lineset[19]==1) line(x[1],y[3],x[2],y[3]);
 if(lineset[20]==1) line(x[2],y[3],x[3],y[3]);
 if(lineset[21]==1) line(x[3],y[3],x[4],y[3]);
 if(lineset[22]==1) line(x[4],y[3],x[5],y[3]);

 if(lineset[23]==1) line(x[1],y[3],x[1],y[4]);
 if(lineset[24]==1) line(x[2],y[3],x[2],y[4]);
 if(lineset[25]==1) line(x[3],y[3],x[3],y[4]);
 if(lineset[26]==1) line(x[4],y[3],x[4],y[4]);
 if(lineset[27]==1) line(x[5],y[3],x[5],y[4]);

 if(lineset[28]==1) line(x[1],y[4],x[2],y[4]);
 if(lineset[29]==1) line(x[2],y[4],x[3],y[4]);
 if(lineset[30]==1) line(x[3],y[4],x[4],y[4]);
 if(lineset[31]==1) line(x[4],y[4],x[5],y[4]);

 if(lineset[32]==1) line(x[1],y[4],x[1],y[5]);
 if(lineset[33]==1) line(x[2],y[4],x[2],y[5]);
 if(lineset[34]==1) line(x[3],y[4],x[3],y[5]);
 if(lineset[35]==1) line(x[4],y[4],x[4],y[5]);
 if(lineset[36]==1) line(x[5],y[4],x[5],y[5]);

 if(lineset[37]==1) line(x[1],y[5],x[2],y[5]);
 if(lineset[38]==1) line(x[2],y[5],x[3],y[5]);
 if(lineset[39]==1) line(x[3],y[5],x[4],y[5]);
 if(lineset[40]==1) line(x[4],y[5],x[5],y[5]);
}
check()
{
  char arr[5];
  for(int i=1;i<=40;i++)
  {

  }
}
main(){
clrscr();
int d=0,m;
printf("enter player names\n");
//gets(name[0]);
//gets(name[1]);
n1=name[0][0];
n2=name[1][0];
initgraph(&d,&m,"c:\\tc\\bgi");
   circle(x1,y1,4);
   dots();
   for(int i=0;i>=0;i++)
  {
     move=getch();
     cleardevice();
     update();
     dots();
     insert1();
     setlines();
   if(user==0)
   {

     user=1;
   }
    else
    {

      user=0;
    }
     if(move=='e')
       goto end;
  }

getch();
end:
}