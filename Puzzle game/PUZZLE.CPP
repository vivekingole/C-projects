//programmer :- vivek ingole
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
int i,j,k,rd,l,stat[10],x1[10],x2[10],y1[10],y2[10],
    x[5]={0,140,260,380,500},y[5]={0,55,175,295,415},flag=1;
char move;
time_t t;
d1(int a1,int b1,int a2,int b2,int st)
{  x1[1]=a1;   y1[1]=b1;   x2[1]=a2;   y2[1]=b2;  stat[1]=st;
  rectangle(a1,b1,a2,b2);
  line(a1+19,b1+120,a2,b2-86);
   setfillstyle(1,2);
   floodfill(a2-5,b2-5,15);
}

d2(int a1,int b1,int a2,int b2,int st)
{  x1[2]=a1;   y1[2]=b1;   x2[2]=a2;   y2[2]=b2;  stat[2]=st;
  rectangle(a1,b1,a2,b2);
  line(a1,b1+33,a2-17,b2);
  line(a1+64,b2-34,a2,b2-87);
  line(a1+18,b1+32,a1+41,b1+55);
  line(a1+57,b1+19,a1+60,b1+46);
   line(a1+97,b1+25,a1+82,b1+51);
    line(a1+43,b1+35,a1+50,b1+49);
     line(a1+57,b1+19,a1+60,b1+46);
     line(a1+76,b1+33,a1+73,b1+47);
  arc(a1+64,b1+83,40,144,36);
  setfillstyle(1,2);
  floodfill(a1+5,b2-5,15);
  floodfill(a2-5,b2-5,15);
  setfillstyle(1,6);
  floodfill(a1+64,b1+80,15);
}
d3(int a1,int b1,int a2,int b2,int st)
{  x1[3]=a1;   y1[3]=b1;   x2[3]=a2;   y2[3]=b2;  stat[3]=st;
  rectangle(a1,b1,a2,b2);
  line(a1,b1+33,a2-20,b2);
  setfillstyle(1,2);
floodfill(a1+5,b2-5,15);
}
d4(int a1,int b1,int a2,int b2,int st)
{   x1[4]=a1;   y1[4]=b1;   x2[4]=a2;   y2[4]=b2;  stat[4]=st;
  rectangle(a1,b1,a2,b2);
  ellipse(a1+35,b1+101,0,360,25,13);
ellipse(a1+88,b1+96,1,360,29,18);
ellipse(a1+52,b1+82,0,360,13,7);
arc(a1+119,b1+89,117,171,50);
arc(a1+20,b1+94,374,425,50);
arc(a1+122,b1+78,123,179,53);
circle(a1+71,b1+26,4);
arc(a1+27,b1+78,366,422,43);
arc(a1+189,b1+53,169,192,120);     //puzz2
 setfillstyle(1,8);
 floodfill(a1+90,b1+100,15);
setfillstyle(1,8);
floodfill(a1+50,b1+100,15);
setfillstyle(1,8);
floodfill(a1+50,b1+85,15);
setfillstyle(1,14);
floodfill(a1+70,b1+25,15);
 }
d5(int a1,int b1,int a2,int b2,int st)
{   x1[5]=a1;   y1[5]=b1;   x2[5]=a2;   y2[5]=b2;  stat[5]=st;
  rectangle(a1,b1,a2,b2);
  ellipse(a1+115,b1+54,100,198,79,55);
  ellipse(a1+136,b1+45,124,235,49,54);
  arc(a1,b1+92,322,389,44);   // a1=260
  arc(a1+77,b1+112,348,413,38);
   setfillstyle(1,3);
   floodfill(a1+50,b1+50,15);
}
d6(int a1,int b1,int a2,int b2,int st)
{   x1[6]=a1;   y1[6]=b1;   x2[6]=a2;   y2[6]=b2;  stat[6]=st;
  rectangle(a1,b1,a2,b2);
 ellipse(a1+50,b1+87,150,231,45,43);
 ellipse(a1+37,b1+65,106,200,34,27);
ellipse(a1+21,b1+86,-32,13,88,63);
ellipse(a1+62,b1+72,-22,50,52,36);
ellipse(a1+59,b1+53,10,162,43,35);
  setfillstyle(1,2);
floodfill(a1+60,b1+60,15);
 }
d7(int a1,int b1,int a2,int b2,int st)
{   x1[7]=a1;   y1[7]=b1;   x2[7]=a2;   y2[7]=b2;  stat[7]=st;
  rectangle(a1,b1,a2,b2);
 ellipse(a1+54,b1+11,230,321,84,31);   //puzz1
 setfillstyle(1,3);
floodfill(a2-5,b2-5,15);
 }
d8(int a1,int b1,int a2,int b2,int st)
{   x1[8]=a1;   y1[8]=b1;   x2[8]=a2;   y2[8]=b2;  stat[8]=st;
  rectangle(a1,b1,a2,b2);
  arc(a1-37,b1-45,297,327,84);
  ellipse(a1-45,b1+4,296,361,160,129);
  setfillstyle(1,3);
floodfill(a1+30,b1+10,15);
}
d10(int a1,int b1,int a2,int b2,int st)
{
   stat[10]=st;
   rectangle(a1,b1,a2,b2);
   ellipse(a1+149,b1+59,143,218,66,98);   //puzz2
   ellipse(a1-85,b1+63,-29,33,125,117);
   arc(a1-6,b1+70,385,427,75);
   arc(a1+118,b1+49,118,176,56);
   setfillstyle(1,6);
   floodfill(a1+60,b1+50,15);
 }
db(int a1,int b1,int a2,int b2,int st)
{   x1[9]=a1;   y1[9]=b1;   x2[9]=a2;   y2[9]=b2; stat[9]=st;
  rectangle(a1,b1,a2,b2);
}
d9(int a1,int b1,int a2,int b2,int st)
{   x1[9]=a1;   y1[9]=b1;   x2[9]=a2;   y2[9]=b2; stat[9]=st;
  rectangle(a1,b1,a2,b2);
}
digfromstat(int m)
{
  for(int k=1;k<=8;k++)
  {
    if(stat[k]==m)
      break;
  }
  return k;
}
edit(int m,int a1,int b1,int a2,int b2,int s)
{
  if(m==1)
  {
    d1(a1,b1,a2,b2,s);
  }
  else if(m==2)
  {
    d2(a1,b1,a2,b2,s);
  }
   else if(m==3)
  {
    d3(a1,b1,a2,b2,s);
  }
 else if(m==4)
  {
    d4(a1,b1,a2,b2,s);
  }
 else if(m==5)
  {
    d5(a1,b1,a2,b2,s);
  }
 else if(m==6)
  {
    d6(a1,b1,a2,b2,s);
  }
 else if(m==7)
  {
    d7(a1,b1,a2,b2,s);
  }
 else if(m==8)
  {
    d8(a1,b1,a2,b2,s);
  }
}
remove2(int r1,int r2)
{
  k=digfromstat(r1);
  l=digfromstat(r2);
     if(k==1)
   {
     if(l==2)
     {
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
      //	d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
     else if(l==3)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
      //	d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
     else if(l==4)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       //	d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
     else if(l==5)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       //	d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
	d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==6)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
      //	d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
	  else if(l==7)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
      //	d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
	  else if(l==8)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
      // d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
	  else if(l==9)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
   }             //k=1

   else if(k==2)
   {
     if(l==1)
     {
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
     else if(l==3)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
     else if(l==4)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
     else if(l==5)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
	  else if(l==6)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
	  else if(l==7)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
	  else if(l==8)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
	  else if(l==9)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }

   }      //k=2

   else if(k==3)
   {
     if(l==1)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
     else if(l==2)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
     else if(l==4)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
     else if(l==5)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==6)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
	  else if(l==7)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
	  else if(l==8)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
	  else if(l==9)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
   }      //k=3

   else if(k==4)
   {
     if(l==1)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
     else if(l==2)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
     else if(l==3)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
     else if(l==5)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
       d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
     }
	  else if(l==6)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==7)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==8)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
     }
	  else if(l==9)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
   }      //k=4

      else if(k==5)
   {
     if(l==1)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
     else if(l==2)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
     else if(l==3)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
     else if(l==4)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==6)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==7)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==8)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
     }
	  else if(l==9)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
   }      //k=5

	 else if(k==6)
   {
     if(l==1)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
     else if(l==2)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
     else if(l==3)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
     else if(l==4)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==5)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==7)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
	 d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
	 d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==8)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
	d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
	d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
     }
	  else if(l==9)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
   }      //k=6

	 else if(k==7)
   {
     if(l==1)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
     else if(l==2)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
     else if(l==3)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
     else if(l==4)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==5)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==6)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
	 d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
	 d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==8)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
	d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
	d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
     }
	  else if(l==9)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
   }      //k=7

	 else if(k==8)
   {
     if(l==1)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
     }
     else if(l==2)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
     }
     else if(l==3)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
     }
     else if(l==4)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       }
	  else if(l==5)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
     }
	  else if(l==6)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
	 d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
	  d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
	d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
     }
	  else if(l==7)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
	d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
	   d9(x1[9],y1[9],x2[9],y2[9],stat[9]);
d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
     }
	  else if(l==9)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
     }

   }      //k=8
  else if(k==9)
   {
     if(l==1)
     {
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
     else if(l==2)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
     else if(l==3)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
       d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
     d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
     else if(l==4)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
       d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
       }
	  else if(l==5)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
	  d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
       d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
       d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
       d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==6)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
	 d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
	d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
	d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==7)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
	d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
	d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
	d8(x1[8],y1[8],x2[8],y2[8],stat[8]);
     }
	  else if(l==8)
     {
       d1(x1[1],y1[1],x2[1],y2[1],stat[1]);
	 d2(x1[2],y1[2],x2[2],y2[2],stat[2]);
       d3(x1[3],y1[3],x2[3],y2[3],stat[3]);
	d4(x1[4],y1[4],x2[4],y2[4],stat[4]);
	d5(x1[5],y1[5],x2[5],y2[5],stat[5]);
	d6(x1[6],y1[6],x2[6],y2[6],stat[6]);
	d7(x1[7],y1[7],x2[7],y2[7],stat[7]);
     }

   }      //k=8

 }    // end of remove2()
/*line(260,55,260,415);
line(380,55,380,415);
line(140,175,500,175);
rectangle(140,55,500,415);
line(140,295,500,295);*/
main(){
clrscr();
int d=0,m;
srand((unsigned) time(&t));
rd=rand()%9;
rd++;
rd=2;
initgraph(&d,&m,"c:\\tc\\bgi");
 if(rd==1)
 {
   d1(x1[1]=x[1], y1[1]=y[1], x2[1]=x[2], y2[1]=y[2], stat[1]=1);
   d4(x1[4]=x[2], y1[4]=y[1], x2[4]=x[3], y2[4]=y[2], stat[4]=2);
   d2(x1[2]=x[3], y1[2]=y[1], x2[2]=x[4], y2[2]=y[2], stat[2]=3);
   d5(x1[5]=x[1], y1[5]=y[2], x2[5]=x[2], y2[5]=y[3], stat[5]=4);
   d7(x1[7]=x[2], y1[7]=y[2], x2[7]=x[3], y2[7]=y[3], stat[7]=5);
   d3(x1[3]=x[3], y1[3]=y[2], x2[3]=x[4], y2[3]=y[3], stat[3]=6);
   d6(x1[6]=x[1], y1[6]=y[3], x2[6]=x[2], y2[6]=y[4], stat[6]=7);
   d8(x1[8]=x[2], y1[8]=y[3], x2[8]=x[3], y2[8]=y[4], stat[8]=8);
   db(x1[9]=x[3], y1[9]=y[3], x2[9]=x[4], y2[9]=y[4], stat[9]=9);
 }
  else if(rd==2)
 {
   d2(x1[2]=x[1], y1[2]=y[1], x2[2]=x[2], y2[2]=y[2], stat[2]=1);
   d4(x1[4]=x[2], y1[4]=y[1], x2[4]=x[3], y2[4]=y[2], stat[4]=2);
   d1(x1[1]=x[3], y1[1]=y[1], x2[1]=x[4], y2[1]=y[2], stat[1]=3);
   d6(x1[6]=x[1], y1[6]=y[2], x2[6]=x[2], y2[6]=y[3], stat[6]=4);
   db(x1[9]=x[2], y1[9]=y[2], x2[9]=x[3], y2[9]=y[3], stat[9]=5);
   d5(x1[5]=x[3], y1[5]=y[2], x2[5]=x[4], y2[5]=y[3], stat[5]=6);
   d7(x1[7]=x[1], y1[7]=y[3], x2[7]=x[2], y2[7]=y[4], stat[7]=7);
   d8(x1[8]=x[2], y1[8]=y[3], x2[8]=x[3], y2[8]=y[4], stat[8]=8);
   d3(x1[3]=x[3], y1[3]=y[3], x2[3]=x[4], y2[3]=y[4], stat[3]=9);
 }
  else if(rd==3)
 {
   d3(x1[3]=x[1], y1[3]=y[1], x2[3]=x[2], y2[3]=y[2], stat[3]=1);
   d1(x1[1]=x[2], y1[1]=y[1], x2[1]=x[3], y2[1]=y[2], stat[1]=2);
   d4(x1[4]=x[3], y1[4]=y[1], x2[4]=x[4], y2[4]=y[2], stat[4]=3);
   db(x1[9]=x[1], y1[9]=y[2], x2[9]=x[2], y2[9]=y[3], stat[9]=4);
   d2(x1[2]=x[2], y1[2]=y[2], x2[2]=x[3], y2[2]=y[3], stat[2]=5);
   d6(x1[6]=x[3], y1[6]=y[2], x2[6]=x[4], y2[6]=y[3], stat[6]=6);
   d5(x1[5]=x[1], y1[5]=y[3], x2[5]=x[2], y2[5]=y[4], stat[5]=7);
   d8(x1[8]=x[2], y1[8]=y[3], x2[8]=x[3], y2[8]=y[4], stat[8]=8);
   d7(x1[7]=x[3], y1[7]=y[3], x2[7]=x[4], y2[7]=y[4], stat[7]=9);
 }
   else if(rd==4)
 {
   d4(x1[4]=x[1], y1[4]=y[1], x2[4]=x[2], y2[4]=y[2], stat[4]=1);
   db(x1[9]=x[2], y1[9]=y[1], x2[9]=x[3], y2[9]=y[2], stat[9]=2);
   d2(x1[2]=x[3], y1[2]=y[1], x2[2]=x[4], y2[2]=y[2], stat[2]=3);
   d5(x1[5]=x[1], y1[5]=y[2], x2[5]=x[2], y2[5]=y[3], stat[5]=4);
   d8(x1[8]=x[2], y1[8]=y[2], x2[8]=x[3], y2[8]=y[3], stat[8]=5);
   d3(x1[3]=x[3], y1[3]=y[2], x2[3]=x[4], y2[3]=y[3], stat[3]=6);
   d7(x1[7]=x[1], y1[7]=y[3], x2[7]=x[2], y2[7]=y[4], stat[7]=7);
   d6(x1[6]=x[2], y1[6]=y[3], x2[6]=x[3], y2[6]=y[4], stat[6]=8);
   d1(x1[1]=x[3], y1[1]=y[3], x2[1]=x[4], y2[1]=y[4], stat[1]=9);
 }
   else if(rd==5)
 {
   d5(x1[5]=x[1], y1[5]=y[1], x2[5]=x[2], y2[5]=y[2], stat[5]=1);
   d1(x1[1]=x[2], y1[1]=y[1], x2[1]=x[3], y2[1]=y[2], stat[1]=2);
   d3(x1[3]=x[3], y1[3]=y[1], x2[3]=x[4], y2[3]=y[2], stat[3]=3);
   d4(x1[4]=x[1], y1[4]=y[2], x2[4]=x[2], y2[4]=y[3], stat[4]=4);
   d2(x1[2]=x[2], y1[2]=y[2], x2[2]=x[3], y2[2]=y[3], stat[2]=5);
   db(x1[9]=x[3], y1[9]=y[2], x2[9]=x[4], y2[9]=y[3], stat[9]=6);
   d7(x1[7]=x[1], y1[7]=y[3], x2[7]=x[2], y2[7]=y[4], stat[7]=7);
   d6(x1[6]=x[2], y1[6]=y[3], x2[6]=x[3], y2[6]=y[4], stat[6]=8);
   d8(x1[8]=x[3], y1[8]=y[3], x2[8]=x[4], y2[8]=y[4], stat[8]=9);
 }
   else if(rd==6)
 {
   d6(x[1],y[1],x[2],y[2],1);
   d3(x[2],y[1],x[3],y[2],2);
   d4(x[3],y[1],x[4],y[2],3);
   d8(x[1],y[2],x[2],y[3],4);
   d2(x[2],y[2],x[3],y[3],5);
   db(x[3],y[2],x[4],y[3],6);
   d5(x[1],y[3],x[2],y[4],7);
   d7(x[2],y[3],x[3],y[4],8);
   d1(x[3],y[3],x[4],y[4],9);
 }
   else if(rd==7)
 {
   d7(x[1],y[1],x[2],y[2],1);
   d1(x[2],y[1],x[3],y[2],2);
   d2(x[3],y[1],x[4],y[2],3);
   d4(x[1],y[2],x[2],y[3],4);
   db(x[2],y[2],x[3],y[3],5);
   d6(x[3],y[2],x[4],y[3],6);
   d5(x[1],y[3],x[2],y[4],7);
   d8(x[2],y[3],x[3],y[4],8);
   d3(x[3],y[3],x[4],y[4],9);
 }
   else if(rd==8)
 {
   d8(x[1],y[1],x[2],y[2],1);
   d4(x[2],y[1],x[3],y[2],2);
   d6(x[3],y[1],x[4],y[2],3);
   d2(x[1],y[2],x[2],y[3],4);
   d1(x[2],y[2],x[3],y[3],5);
   d3(x[3],y[2],x[4],y[3],6);
   d5(x[1],y[3],x[2],y[4],7);
   db(x[2],y[3],x[3],y[4],8);
   d7(x[3],y[3],x[4],y[4],9);
 }
    else if(rd==9)
 {
   db(x[1],y[1],x[2],y[2],1);
   d2(x[2],y[1],x[3],y[2],2);
   d1(x[3],y[1],x[4],y[2],3);
   d4(x[1],y[2],x[2],y[3],4);
   d6(x[2],y[2],x[3],y[3],5);
   d8(x[3],y[2],x[4],y[3],6);
   d7(x[1],y[3],x[2],y[4],7);
   d3(x[2],y[3],x[3],y[4],8);
   d5(x[3],y[3],x[4],y[4],9);
 }
    for(i=1;i<=1000;i++)
    {
      move=getche();
	    flag=1;
      if(stat[9]==1)
      {
	if(move=='4') {}
	else if(move=='8'){}
	else if(move=='5'){}
	else flag=0;
      }           //stat=1
      else if(stat[9]==2)
      {
	if(move=='4'){}//6
	else if(move=='8'){}
	else if(move=='6'){}
	else if(move=='5'){}
	else flag=0;
      }               //stat=2
	 else if(stat[9]==3)
      {
	if(move=='8'){}
	else if(move=='6'){}
	else if(move=='5'){}
	else flag=0;
      }            //stat=3
	 else if(stat[9]==4)
      {
	if(move=='2'){}
	else if(move=='4'){}
	else if(move=='8'){}
	else if(move=='5'){}
	else flag=0;
      }      //stat=4
	 else if(stat[9]==5)
      {
	if(move=='8'){}
	else if(move=='6'){}
	else if(move=='4'){}
	else if(move=='2'){}
	else if(move=='5'){}
	else flag=0;
      }      //stat=5
	 else if(stat[9]==6)
      {
	if(move=='8'){}
	else if(move=='6'){}
	else if(move=='2'){}
	else if(move=='5'){}
	else flag=0;
      }       //stat=6
	 else if(stat[9]==7)
      {
	if(move=='2'){}
	else if(move=='4'){}
	else if(move=='5'){}
	else flag=0;
      }    //stat=7
	 else if(stat[9]==8)
      {
	if(move=='6'){}
	else if(move=='2'){}
	else if(move=='4'){}
	else if(move=='5'){}
	else flag=0;
      }   //stat=8
	 else if(stat[9]==9)
      {
	if(move=='6'){}
	else if(move=='2'){}
	else if(move=='5'){}
	else flag=0;
      }   //stat=9

    if(flag==1)
	 cleardevice();
      if(stat[9]==1)             //old
      {
	if(move=='4')   //6
	{
	  j=digfromstat(2);
	  edit(j,x[1],y[1],x[2],y[2],1);
	  db(x[2],y[1],x[3],y[2],2);
	  remove2(1,2);
	  flag=1;
	}
	else if(move=='8')    //2
	{
	   j=digfromstat(4);
	  edit(j,x[1],y[1],x[2],y[2],1);
	  db(x[1],y[2],x[2],y[3],4);
	  remove2(1,4);
	  flag=1;
	}
	else if(move=='5')
	{
	  goto end;
	}
      }           //stat=1

      else if(stat[9]==2)
      {
	if(move=='4') //6
	{
	  j=digfromstat(3);
	  edit(j,x[2],y[1],x[3],y[2],2);
	  db(x[3],y[1],x[4],y[2],3);
	  remove2(2,3);
	}
	else if(move=='8')
	{
	   j=digfromstat(5);
	  edit(j,x[2],y[1],x[3],y[2],2);
	  db(x[2],y[2],x[3],y[3],5);
	  remove2(2,5);
	}
	else if(move=='6')
	{
	   j=digfromstat(1);
	  edit(j,x[2],y[1],x[3],y[2],2);
	  db(x[1],y[1],x[2],y[2],1);
	  remove2(1,2);
	}
	else if(move=='5')
	{
	  goto end;
	}
      }               //stat=2
	 else if(stat[9]==3)
      {
	if(move=='8')
	{
	  j=digfromstat(6);
	  edit(j,x[3],y[1],x[4],y[2],3);
	  db(x[3],y[2],x[4],y[3],6);
	  remove2(3,6);
	}
	else if(move=='6')
	{
	  j=digfromstat(2);
	  edit(j,x[3],y[1],x[4],y[2],3);
	  db(x[2],y[1],x[3],y[2],2);
	  remove2(2,3);
	}
		else if(move=='5')
	{
	  goto end;
	}

      }            //stat=3
	 else if(stat[9]==4)
      {
	if(move=='2')
	{
	  j=digfromstat(1);
	  edit(j,x[1],y[2],x[2],y[3],4);
	db(x[1],y[1],x[2],y[2],1);
	  remove2(1,4);
	}
	else if(move=='4')
	{
	  j=digfromstat(5);
	  edit(j,x[1],y[2],x[2],y[3],4);
	  db(x[2],y[2],x[3],y[3],5);
	  remove2(4,5);
	}
	else if(move=='8')
	{
	  j=digfromstat(7);
	  edit(j,x[1],y[2],x[2],y[3],4);
	  db(x[1],y[3],x[2],y[4],7);
	  remove2(4,7);
	}
		else if(move=='5')
	{
	  goto end;
	}

      }      //stat=4
	 else if(stat[9]==5)
      {
	if(move=='8')
	{
	  j=digfromstat(8);
	  edit(j,x[2],y[2],x[3],y[3],5);
	  db(x[2],y[3],x[3],y[4],8);
	  remove2(5,8);
	}
	else if(move=='6')
	{
	  j=digfromstat(4);
	  edit(j,x[2],y[2],x[3],y[3],5);
	  db(x[1],y[2],x[2],y[3],4);
	  remove2(4,5);
	}
	else if(move=='4')
	{
	  j=digfromstat(6);
	  edit(j,x[2],y[2],x[3],y[3],5);
	  db(x[3],y[1],x[4],y[3],6);
	  remove2(5,6);
	}
	else if(move=='2')
	{
	  j=digfromstat(2);
	  edit(j,x[2],y[2],x[3],y[3],5);
	  db(x[2],y[1],x[3],y[2],2);
	  remove2(2,5);
	}
		else if(move=='5')
	{
	  goto end;
	}

      }      //stat=5
	 else if(stat[9]==6)
      {
	if(move=='8')
	{
	  j=digfromstat(9);
	  edit(j,x[3],y[2],x[4],y[3],6);
	  db(x[3],y[3],x[4],y[4],9);
	  remove2(6,9);
	}
	else if(move=='6')
	{
	  j=digfromstat(5);
	  edit(j,x[3],y[2],x[4],y[3],6);
	  db(x[2],y[2],x[3],y[3],5);
	  remove2(5,6);
	}
	if(move=='2')
	{
	  j=digfromstat(3);
	  edit(j,x[3],y[2],x[4],y[3],6);
	  db(x[3],y[1],x[4],y[2],3);
	  remove2(3,6);
	}
		else if(move=='5')
	{
	  goto end;
	}

      }       //stat=6
	 else if(stat[9]==7)
      {
	if(move=='2')
	{
	  j=digfromstat(4);
	  edit(j,x[1],y[3],x[2],y[4],7);
	  db(x[1],y[2],x[2],y[3],4);
	  remove2(4,7);
	}
	else if(move=='4')
	{
	  j=digfromstat(8);
	  edit(j,x[1],y[3],x[2],y[4],7);
	  db(x[2],y[3],x[3],y[4],8);
	  remove2(7,8);
	}
		else if(move=='5')
	{
	  goto end;
	}

      }    //stat=7
	 else if(stat[9]==8)
      {
	if(move=='6')
	{
	  j=digfromstat(7);
	  edit(j,x[2],y[3],x[3],y[4],8);
	  db(x[1],y[3],x[2],y[4],7);
	  remove2(7,8);
	}
	else if(move=='2')
	{
	  j=digfromstat(5);
	  edit(j,x[2],y[3],x[3],y[4],8);
	  db(x[2],y[2],x[3],y[3],5);
	  remove2(5,8);
	}
		if(move=='4')
	{
	  j=digfromstat(9);
	  edit(j,x[2],y[3],x[3],y[4],8);
	  db(x[3],y[3],x[4],y[4],9);
	  remove2(8,9);
	}
	   else if(move=='5')
	{
	  goto end;
	}

      }   //stat=8
	 else if(stat[9]==9)
      {
	if(move=='6')
	{
	  j=digfromstat(8);
	 // printf("%d",j);
	  edit(j,x[3],y[3],x[4],y[4],9);
	  db(x[2],y[3],x[3],y[4],8);
	  remove2(8,9);
	}
	else if(move=='2')
	{
	  j=digfromstat(6);
	   // printf("%d",j);
		edit(j,x[3],y[3],x[4],y[4],9);
	  db(x[3],y[2],x[4],y[3],6);
	  remove2(6,9);
	}
		else if(move=='5')
	{
	  goto end;
	}
      }   //stat=9

      if(stat[1]==1)
       {
	  if(stat[2]==2)
	  {
	     if(stat[3]==3)
	     {
		if(stat[4]==4)
		 {
		   if(stat[5]==5)
		    {
		      if(stat[6]==6)
		       {
			 if(stat[7]==7)
			   {
			     if(stat[8]==8)
			      {
				 cleardevice();
				 d1(140,55,260,175,1);
				 d2(260,55,380,175,2);
				 d3(380,55,500,175,3);
				 d4(140,175,260,295,4);
				 d5(260,175,380,295,5);
				 d6(380,175,500,295,6);
				 d7(140,295,260,415,7);
				 d8(260,295,380,415,8);
				 d10(380,295,500,415,9);
				 circle(202,446,14);
				 circle(462,449,15);
				 circle(166,446,10);
				 circle(499,450,11);
				 circle(138,446,8);
				 circle(528,452,8);
				 setfillstyle(1,15);
				 floodfill(140,445,15);
				 setfillstyle(1,15);
				 floodfill(165,445,15);
				 setfillstyle(1,15);
				 floodfill(200,445,15);
				 setfillstyle(1,15);
				 floodfill(470,445,15);
				 setfillstyle(1,15);
				 floodfill(500,445,15);
				 setfillstyle(1,15);
				 floodfill(530,450,15);
				  for(int col=1;!kbhit();col++)
				  { setcolor(col);
				  settextstyle(7,0,5);
				  outtextxy(240,418,"You win");
				  delay(10);
				   }
				 goto win;
			      }
			    }
			  }
			}
		      }
		    }
		  }
		}
    }   // end of main for loop
    win:
getch();
end:
}