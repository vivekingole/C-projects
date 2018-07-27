//programmer:-vivek ingole
#include<stdio.h>
#include<conio.h>
#include<paint.h>
char selector,shape[50]={0},save,move,buffer[80],name[20];
int dotx[50],doty[50],linex1[50],liney1[50],linex2[50],liney2[50],
    circlex[50],circley[50],circler[50],rectx1[50],rectx2[50],
    recty1[50],recty2[50],arcx[50],arcy[50],arcsa[50],arcea[50],arcr[50],
    ellipsex[50],ellipsey[50],ellipsesa[50],ellipseea[50],ellipsexr[50],
    ellipseyr[50],i,j,k,d=0,m,idx=0,x1,y1,x2,y2,xr,yr,color[50],
    colorx[50],colory[50],colorselector=15,coloridx=0,modify,showcords=0;
FILE *fp;
movex1y1()
{
   if(move=='4') x1--;
   else if(move=='6') x1++;
   else if(move=='2') y1++;
   else if(move=='8')y1--;
   else if(move=='9'){ x1++;y1--;}
   else if(move=='3'){ x1++;y1++;}

   else if(move=='1'){ x1--;y1++;}
   else if(move=='7'){ x1--;y1--;}
   if(showcords==49)
   {
   gotoxy(1,3);
   printf("x1=%-3d  y1=%-3d",x1,y1);
   gotoxy(1,4);
   printf("x2=%-3d  y2=%-3d",x2,y2);
   gotoxy(1,5);
   printf("xr=%-3d  yr=%-3d",xr,yr);
   }
}
movex2y2()
{
   if(move=='4') x2--;
   else if(move=='6') x2++;
   else if(move=='2') y2++;
   else if(move=='8')y2--;
   else if(move=='9'){ x2++;y2--;}
   else if(move=='3'){ x2++;y2++;}
   else if(move=='1'){ x2--;y2++;}
   else if(move=='7'){ x2--;y2--;}
      if(showcords==49)
   {
	 gotoxy(1,3);
   printf("x1=%-3d  y1=%-3d",x1,y1);
     gotoxy(1,4);
   printf("x2=%-3d  y2=%-3d",x2,y2);
	gotoxy(1,5);
   printf("xr=%-3d  yr=%-3d",xr,yr);
   }
}
movexryr()
{
   if(move=='4') xr--;
   else if(move=='6') xr++;
   else if(move=='2') yr++;
   else if(move=='8')yr--;
   else if(move=='9'){ xr++;yr--;}
   else if(move=='3'){ xr++;yr++;}
   else if(move=='1'){ xr--;yr++;}
   else if(move=='7'){ xr--;yr--;}
     if(showcords==49)
   {
    gotoxy(1,3);
   printf("x1=%-3d  y1=%-3d",x1,y1);
     gotoxy(1,4);
   printf("x2=%-3d  y2=%-3d",x2,y2);
     gotoxy(1,5);
   printf("xr=%-3d  yr=%-3d",xr,yr);
   }
}
moveall()
{
       if(move=='4')
      { x1--;x2--; }
      else if(move=='6')
      { x1++;x2++;}
      else if(move=='2')
      { y1++;y2++;}
      else if(move=='8')
      { y1--;y2--;}
      else if(move=='3')
      { x1++;x2++;y1++;y2++; }
      else if(move=='1')
      { x1--;x2--;y1++;y2++;}
      else if(move=='7')
      { y1--;y2--;x1--;x2--;}
      else if(move=='9')
      { y1--;y2--;x1++;x2++;}

       if(showcords==49)
   {
   gotoxy(1,3);
   printf("x1=%-3d  y1=%-3d",x1,y1);
   gotoxy(1,4);
   printf("x2=%-3d  y2=%-3d",x2,y2);
   gotoxy(1,5);
   printf("xr=%-3d  yr=%-3d",xr,yr);
   }
}
drawshape(int temp=-1)
{
  for(j=0;j<=49;j++)
  {
    if(j!=temp)
    {
       if(shape[j]=='d')
       {
	 putpixel(dotx[j],doty[j],15);
       }
       else if(shape[j]=='l')
       {
	 line(linex1[j],liney1[j],linex2[j],liney2[j]);
       }
       else if(shape[j]=='c')
       {
	 circle(circlex[j],circley[j],circler[j]);
       }
	else if(shape[j]=='r')
       {
	 rectangle(rectx1[j],recty1[j],rectx2[j],recty2[j]);
       }
	else if(shape[j]=='a')
       {
	 arc(arcx[j],arcy[j],arcsa[j],arcea[j],arcr[j]);
       }
       else if(shape[j]=='e')
       {
	 ellipse(ellipsex[j],ellipsey[j],ellipsesa[j],ellipseea[j],ellipsexr[j],ellipseyr[j]);
       }
    }
  }   //end of for loop
}  // end of drawshape function
colormenu()
{
   int n=0,x=2;
   rectangle(1,20,600,38);
   for(j=1;j<=600;j=j+60)
   {
      line(j,20,j,38);
   }
   for(j=0;j<=9;j++)
   {
     if(j<=7)
     {
       setfillstyle(1,j+1);
       floodfill(x,26,15);
     }
     else
     {
       setfillstyle(1,j+6);
       floodfill(x,26,15);
     }
     x=x+60;
   }
   setcolor(0);
   for(j=1;j<=600;j=j+60)
   {
     sprintf(buffer,"%d",n=inc(n));
     outtextxy(j+25,26,buffer);
   }
   setcolor(15);
}  //end of color menu function
drawcolor()
{
  for(j=0;j<=49;j++)
  {
    setfillstyle(1,color[j]);
    floodfill(colorx[j],colory[j],15);
  }
}   //end of drawcolor();
main()
{
clrscr();
setval1();
int d=0,m,rd,a1,b1,c1,d1,e1,f1;
initgraph(&d,&m,"c:\\tc\\bgi");
setval();
roughf();
clear();
showcords=takeche();
menu();
for(i=1;i<=1000;i++)
{
  selector=takeche();
  if(selector=='d')
  {
    putpixel(x1=315,y1=240,15);
    dot1:
    for(j=1;j<=1000;j++)
    {
      move=takeche();
       if(move=='.')
      {
       gotoxy(1,25);
       printf("enter values : ");
       scanf("%d%d",&x1,&y1);
       clrscr();
       cleardevice(); menu(); drawshape();
       putpixel(x1,y1,15);
       goto dot1;
      }
      clear();
      menu();  drawshape();
      movex1y1();
      putpixel(x1,y1,15);
      if(move==32)
       break;
     }
     shape[idx]='d';
     dotx[idx]=x1;
     doty[idx]=y1;
     idx=inc(idx);
  } //end of dot
  else if(selector=='l')
  {
     line(x1=300,y1=240,x2=350,y2=240);
     line1:
     for(j=1;j<=1000;j++)
    {
      move=getche();
      if(move=='.')
      {
       gotoxy(1,25);
       printf("enter values : ");
       scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
       clrscr();
       cleardevice(); menu(); drawshape();
       line(x1,y1,x2,y2);
       goto line1;
      }
      cleardevice();
      menu();  drawshape();
      movex1y1();
      line(x1,y1,x2,y2);
      if(move=='5')
       goto line2;
      else if(move==32)
       goto lineenter;
       else if(move=='0')
       goto line3;
    }
    line2:
       for(j=1;j<=1000;j++)
    {
      move=getche();
       if(move=='.')
      {
       gotoxy(1,25);
       printf("enter values : ");
       scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
       clrscr();
       cleardevice(); menu(); drawshape();
       line(x1,y1,x2,y2);
       goto line1;
      }
      cleardevice();
      menu();  drawshape();
      movex2y2();
      line(x1,y1,x2,y2);
      if(move=='5')
       goto line1;
      else if(move==32)
       goto lineenter;
	 else if(move=='0')
       goto line3;
    }
    line3: for(j=1;j<=1000;j++)
	 {
      move=getche();
      cleardevice();
      menu();  drawshape();
      moveall();
	  line(x1,y1,x2,y2);
      if(move=='0')
       goto line1;
      else if(move==32)
       goto lineenter;
    }

    lineenter:
    shape[idx]='l';
    linex1[idx]=x1;
    liney1[idx]=y1;
    linex2[idx]=x2;
    liney2[idx]=y2;
    idx=inc(idx);
  }  //end of line
  else if (selector=='c')
  {
    circle(x1=315,y1=240,x2=50);
    circle1:
	for(j=1;j<=1000;j++)
    {
      move=getche();
	 if(move=='.')
      {
       gotoxy(1,25);
       printf("enter values : ");
       scanf("%d%d%d",&x1,&y1,&x2);
       clrscr();
       cleardevice(); menu(); drawshape();
       circle(x1,y1,x2);
       goto circle1;
      }
      cleardevice();
      menu();  drawshape();
      movex1y1();
      circle(x1,y1,x2);
      if(move=='5')
       goto circle2;
      else if(move==32)
       goto circleenter;
    }
    circle2:
       for(j=1;j<=1000;j++)
    {
      move=getche();
	 if(move=='.')
      {
       gotoxy(1,25);
       printf("enter values : ");
       scanf("%d%d%d",&x1,&y1,&x2);
       clrscr();
       cleardevice(); menu(); drawshape();
       circle(x1,y1,x2);
       goto circle1;
      }
      cleardevice();
      menu();  drawshape();
      movex2y2();
      circle(x1,y1,x2);
      if(move=='5')
       goto circle1;
      else if(move==32)
       goto circleenter;
    }
    circleenter:
    shape[idx]='c';
    circlex[idx]=x1;
     circley[idx]=y1;
     circler[idx]=x2;
     idx=inc(idx);
      }  //end of circle
    else if(selector=='r')
  {
     rectangle(x1=300,y1=220,x2=340,y2=260);
     rect1:
     for(j=1;j<=1000;j++)
    {
      move=getche();
      if(move=='.')
      {
       gotoxy(1,25);
       printf("enter values : ");
       scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
       clrscr();
       cleardevice(); menu(); drawshape();
	rectangle(x1,y1,x2,y2);
       goto rect1;
      }
      cleardevice();
      menu();  drawshape();
      movex1y1();
      rectangle(x1,y1,x2,y2);
      if(move=='5')
       goto rect2;
      else if(move==32)
       goto rectenter;
	if(move=='0')
       goto rect3;
    }
    rect2:
       for(j=1;j<=1000;j++)
    {
      move=getche();
	    if(move=='.')
      {
       gotoxy(1,25);
       printf("enter values : ");
       scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
       clrscr();
       cleardevice(); menu(); drawshape();
	rectangle(x1,y1,x2,y2);
       goto rect1;
      }
      cleardevice();
      menu();  drawshape();
      movex2y2();
      rectangle(x1,y1,x2,y2);
      if(move=='5')
       goto rect1;
      else if(move==32)
       goto rectenter;
	if(move=='0')
       goto rect3;
    }
	  rect3:
       for(j=1;j<=1000;j++)
    {
      move=getche();
      cleardevice();
      menu();  drawshape();
      moveall();
      rectangle(x1,y1,x2,y2);
      if(move=='0')
       goto rect1;
      else if(move==32)
       goto rectenter;
    }

	  if(move=='4')
      { x1--;x2--; }
      else if(move=='6')
      { x1++;x2++;}
      else if(move=='2')
      { y1++;y2++;}
      else if(move=='8')
      { y1--;y2--;}

    rectenter:
    shape[idx]='r';
    rectx1[idx]=x1;
    recty1[idx]=y1;
    rectx2[idx]=x2;
    recty2[idx]=y2;
    idx=inc(idx);
  }  //end of rectangle
    else if(selector=='a')
  {
     arc(x1=315,y1=240,x2=180,y2=360,xr=50);
     arc1:
     for(j=1;j<=1000;j++)
    {
      move=getche();
      if(move=='.')
      {
       gotoxy(1,25);
       printf("enter values : ");
       scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&xr);
       clrscr();
       cleardevice(); menu(); drawshape();
	 arc(x1,y1,x2,y2,xr);
       goto arc1;
      }
      cleardevice();
      menu();  drawshape();
      movex1y1();
      arc(x1,y1,x2,y2,xr);
      if(move=='5')
       goto arc2;
      else if(move==32)
       goto arcenter;
    }
    arc2:
       for(j=1;j<=1000;j++)
    {
      move=getche();
	    if(move=='.')
      {
       gotoxy(1,25);
       printf("enter values : ");
       scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&xr);
       clrscr();
       cleardevice(); menu(); drawshape();
	 arc(x1,y1,x2,y2,xr);
       goto arc1;
      }
      cleardevice();
      menu();  drawshape();
      movex2y2();
      arc(x1,y1,x2,y2,xr);
      if(move=='5')
       goto arc3;
      else if(move==32)
       goto arcenter;
    }
    arc3:
	for(j=1;j<=1000;j++)
    {
      move=getche();
	    if(move=='.')
      {
       gotoxy(1,25);
       printf("enter values : ");
       scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&xr);
       clrscr();
       cleardevice(); menu(); drawshape();
	 arc(x1,y1,x2,y2,xr);
       goto arc1;
      }
      cleardevice();
      menu();  drawshape();
      movexryr();
      arc(x1,y1,x2,y2,xr);
      if(move=='5')
       goto arc1;
      else if(move==32)
       goto arcenter;
    }
    arcenter:
    shape[idx]='a';
    arcx[idx]=x1;
    arcy[idx]=y1;
    arcsa[idx]=x2;
    arcea[idx]=y2;
    arcr[idx]=xr;
    idx=inc(idx);
  }  //end of arc
    else if(selector=='e')
  {
     ellipse(x1=315,y1=240,x2=0,y2=360,xr=50,yr=50);
     ellipse1:
     for(j=1;j<=1000;j++)
    {
      move=getche();
       if(move=='.')
      {
       gotoxy(1,25);
       printf("enter values : ");
       scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&xr,&yr);
       clrscr();
       cleardevice(); menu(); drawshape();
       ellipse(x1,y1,x2,y2,xr,yr);
       goto ellipse1;
      }
      cleardevice();
      menu();  drawshape();
      movex1y1();
      ellipse(x1,y1,x2,y2,xr,yr);
      if(move=='5')
       goto ellipse2;
      else if(move==32)
       goto ellipseenter;
    }
    ellipse2:
       for(j=1;j<=1000;j++)
    {
      move=getche();
	     if(move=='.')
      {
       gotoxy(1,25);
       printf("enter values : ");
       scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&xr,&yr);
       clrscr();
       cleardevice(); menu(); drawshape();
       ellipse(x1,y1,x2,y2,xr,yr);
       goto ellipse1;
      }
      cleardevice();
      menu();  drawshape();
      movex2y2();
      ellipse(x1,y1,x2,y2,xr,yr);
      if(move=='5')
       goto ellipse3;
      else if(move==32)
       goto ellipseenter;
    }
    ellipse3:
	for(j=1;j<=1000;j++)
    {
      move=getche();
	     if(move=='.')
      {
       gotoxy(1,25);
       printf("enter values : ");
       scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&xr,&yr);
       clrscr();
       cleardevice(); menu(); drawshape();
       ellipse(x1,y1,x2,y2,xr,yr);
       goto ellipse1;
      }
      cleardevice();
      menu();  drawshape();
      movexryr();
      ellipse(x1,y1,x2,y2,xr,yr);
      if(move=='5')
       goto ellipse1;
      else if(move==32)
       goto ellipseenter;
    }
    ellipseenter:
    shape[idx]='e';
    ellipsex[idx]=x1;
    ellipsey[idx]=y1;
    ellipsesa[idx]=x2;
    ellipseea[idx]=y2;
    ellipsexr[idx]=xr;
    ellipseyr[idx]=yr;
    idx=inc(idx);
  }  //end of ellipse
  else if (selector=='p')
  {
    colormenu();
    circle(x1=315,y1=240,2);
    setfillstyle(1,15);
    floodfill(x1,y1,15);
    while(1)
    {
    color1:
    while(1)
    {
      move=getche();
      cleardevice(); menu();
      drawshape();
       colormenu();
       switch(move)
      {
      case '4':   x1=x1-5;    break;
      case '6': x1=x1+5;      break;
      case '2': y1=y1+5;      break;
      case '8': y1=y1-5;      break;
      case 's': goto paintend;
      }
      circle(x1,y1,2);
      setfillstyle(1,colorselector);
      floodfill(x1,y1,15);
	    if(move=='#')
      goto color2;
      else if(move==32)
      goto colorenter;
       //	drawcolor();
    }
    color2:
    while(1)
    {
      move=getche();
      switch(move)
      {
      case '0': setfillstyle(1,colorselector=1);   floodfill(x1,y1,15); break;
      case '1': setfillstyle(1,colorselector=2);   floodfill(x1,y1,15); break;
      case '2': setfillstyle(1,colorselector=3);   floodfill(x1,y1,15); break;
      case '3': setfillstyle(1,colorselector=4);   floodfill(x1,y1,15); break;
      case '4': setfillstyle(1,colorselector=5);   floodfill(x1,y1,15); break;
      case '5': setfillstyle(1,colorselector=6);   floodfill(x1,y1,15); break;
      case '6': setfillstyle(1,colorselector=7);   floodfill(x1,y1,15); break;
      case '7': setfillstyle(1,colorselector=8);   floodfill(x1,y1,15); break;
      case '8': setfillstyle(1,colorselector=14);  floodfill(x1,y1,15); break;
      case '9': setfillstyle(1,colorselector=15);  floodfill(x1,y1,15); break;
      }
      circle(x1,y1,2);
      setfillstyle(1,colorselector);
      floodfill(x1,y1,15);
      if(move=='#')
      goto color1;
      else if(move==32)
      goto colorenter;
    }
    colorenter:
    color[coloridx]=colorselector;
    colorx[coloridx]=x1;
    colory[coloridx++]=y1;
    cleardevice();
    menu(); drawshape();    drawcolor();
	circle(x1,y1,2);
    setfillstyle(1,colorselector);
    floodfill(x1,y1,15);
    colormenu();
    }
    paintend:
  } //end of paint
  else if(selector=='s')
  {
     clrscr();
     cleardevice();
     printf("\n\n\n       enter file name :- ");
     scanf("%s",&name);
     if(strcmp(name,"exit")==0)
    // if(name=="exit")
     {
       goto stop;
     }
     strcat(name,".cpp");
     fp=fopen(name,"w");
     fputs("//programmer :- vivek ingole\n",fp);
     fputs("#include<stdio.h>\n#include<conio.h>\n#include<graphics.h>\n",fp);
     fputs("main(){\nclrscr();\nint d=0,m;",fp);
     fputs("\ninitgraph(&d,&m,\"c:\\\\tc\\\\bgi\");\n",fp);
     for(j=0;j<=49;j++)
     {
	if(shape[j]=='d')
	{
	   sprintf(buffer,"putpixel(%d,%d,15);\n",dotx[j],doty[j]);
	   fputs(buffer,fp);
	}
	else if(shape[j]=='l')
	{
	   sprintf(buffer,"line(%d,%d,%d,%d);\n",linex1[j],liney1[j],linex2[j],liney2[j]);
	   fputs(buffer,fp);
	}
	else if(shape[j]=='c')
	{
	   sprintf(buffer,"circle(%d,%d,%d);\n",circlex[j],circley[j],circler[j]);
	   fputs(buffer,fp);
	}
	else if(shape[j]=='r')
	{
	   sprintf(buffer,"rectangle(%d,%d,%d,%d);\n",rectx1[j],recty1[j],rectx2[j],recty2[j]);
	   fputs(buffer,fp);
	}
	  else if(shape[j]=='a')
	{
	   sprintf(buffer,"arc(%d,%d,%d,%d,%d);\n",arcx[j],arcy[j],arcsa[j],arcea[j],arcr[j]);
	   fputs(buffer,fp);
	}
	  else if(shape[j]=='e')
	{
	   sprintf(buffer,"ellipse(%d,%d,%d,%d,%d,%d);\n",ellipsex[j],ellipsey[j],ellipsesa[j],ellipseea[j],ellipsexr[j],ellipseyr[j]);
	   fputs(buffer,fp);
	}
     }
     for(j=0;j<=49;j++)
     {
       if(color[j]!=0)
       {
	  sprintf(buffer,"setfillstyle(1,%d);\nfloodfill(%d,%d,15);\n",color[j],colorx[j],colory[j]);
	  fputs(buffer,fp);
       }
     }
     fputs("getch();\n}",fp);
     fclose(fp);
     clrscr();
     cleardevice();
     printf("\n\n\n\n\n\n\n\n\n\n\n\n			   drawing successfully saved");
     getch();
     goto stop;
  }   //end of save
  else if(selector=='m')
  {   int n;
      clrscr();
      cleardevice();
      menu();
      drawshape();
      printf("\n\n   enter index no. of shape :- ");
      scanf("%d",&modify);
      modify--;
      n=modify;
      if(shape[n]=='d')
      {
      x1=dotx[n];
      y1=doty[n];
	  for(j=1;j<=1000;j++)
	     {
	 move=getche();
	 cleardevice();
	 menu();  drawshape(n);
	 movex1y1();
	 putpixel(x1,y1,15);
		if(move==32)
	 break;
	       }
     dotx[n]=x1;
     doty[n]=y1;
  } //end of mdot
  else if(shape[n]=='l')
  {
     x1=linex1[n];  x2=linex2[n];
     y1=liney1[n];  y2=liney2[n];
     mline1:
     for(j=1;j<=1000;j++)
    {
      move=getche();
      cleardevice();
      menu();  drawshape(n);
      movex1y1();
      line(x1,y1,x2,y2);
      if(move=='5')
       goto mline2;
      else if(move==32)
       goto mlineenter;
    }
    mline2:
       for(j=1;j<=1000;j++)
    {
      move=getche();
      cleardevice();
      menu();  drawshape(n);
      movex2y2();
      line(x1,y1,x2,y2);
      if(move=='5')
       goto mline1;
      else if(move==32)
       goto mlineenter;
    }
    mlineenter:
    linex1[n]=x1;
    liney1[n]=y1;
    linex2[n]=x2;
    liney2[n]=y2;
  }  //end of mline
  else if (shape[n]=='c')
  {
    x1=circlex[n];
    y1=circley[n];
    x2=circler[n];
    mcircle1:
	for(j=1;j<=1000;j++)
    {
      move=getche();
      cleardevice();
      menu();  drawshape(n);
      movex1y1();
      circle(x1,y1,x2);
      if(move=='5')
       goto mcircle2;
      else if(move==32)
       goto mcircleenter;
    }
    mcircle2:
       for(j=1;j<=1000;j++)
    {
      move=getche();
      cleardevice();
      menu();  drawshape(n);
      movex2y2();
      circle(x1,y1,x2);
      if(move=='5')
       goto mcircle1;
      else if(move==32)
       goto mcircleenter;
    }
    mcircleenter:
    circlex[n]=x1;
     circley[n]=y1;
     circler[n]=x2;
  }  //end of mcircle
    else if(shape[n]=='r')
  {
     x1=rectx1[n];
     x2=rectx2[n];
     y1=recty1[n];
     y2=recty2[n];
     mrect1:
     for(j=1;j<=1000;j++)
    {
      move=getche();
      cleardevice();
      menu();  drawshape(n);
      movex1y1();
      rectangle(x1,y1,x2,y2);
      if(move=='5')
       goto mrect2;
      else if(move==32)
       goto mrectenter;
    }
    mrect2:
       for(j=1;j<=1000;j++)
    {
      move=getche();
      cleardevice();
      menu();  drawshape(n);
      movex2y2();
      rectangle(x1,y1,x2,y2);
      if(move=='5')
       goto mrect1;
      else if(move==32)
       goto mrectenter;
    }
    mrectenter:
    rectx1[n]=x1;
    recty1[n]=y1;
    rectx2[n]=x2;
    recty2[n]=y2;
  }  //end of mrectangle
    else if(shape[n]=='a')
  {
     x1=arcx[n];
     y1=arcy[n];
     x2=arcsa[n];
     y2=arcea[n];
     xr=arcr[n];
     marc1:
     for(j=1;j<=1000;j++)
    {
      move=getche();
      cleardevice();
      menu();  drawshape(n);
      movex1y1();
      arc(x1,y1,x2,y2,xr);
      if(move=='5')
       goto marc2;
      else if(move==32)
       goto marcenter;
    }
    marc2:
       for(j=1;j<=1000;j++)
    {
      move=getche();
      cleardevice();
      menu();  drawshape(n);
      movex2y2();
      arc(x1,y1,x2,y2,xr);
      if(move=='5')
       goto marc3;
      else if(move==32)
       goto marcenter;
    }
    marc3:
	for(j=1;j<=1000;j++)
    {
      move=getche();
      cleardevice();
      menu();  drawshape(n);
      movexryr();
      arc(x1,y1,x2,y2,xr);
      if(move=='5')
       goto marc1;
      else if(move==32)
       goto marcenter;
    }
    marcenter:
    arcx[n]=x1;
    arcy[n]=y1;
    arcsa[n]=x2;
    arcea[n]=y2;
    arcr[n]=xr;
  }  //end of marc
    else if(shape[n]=='e')
  {
     x1=ellipsex[n];
     y1=ellipsey[n];
     x2=ellipsesa[n];
     y2=ellipseea[n];
     xr=ellipsexr[n];
     yr=ellipseyr[n];
     mellipse1:
     for(j=1;j<=1000;j++)
    {
      move=getche();
      cleardevice();
      menu();  drawshape(n);
      movex1y1();
      ellipse(x1,y1,x2,y2,xr,yr);
      if(move=='5')
       goto mellipse2;
      else if(move==32)
       goto mellipseenter;
    }
    mellipse2:
       for(j=1;j<=1000;j++)
    {
      move=getche();
      cleardevice();
      menu();  drawshape(n);
      movex2y2();
      ellipse(x1,y1,x2,y2,xr,yr);
      if(move=='5')
       goto mellipse3;
      else if(move==32)
       goto mellipseenter;
    }
    mellipse3:
	for(j=1;j<=1000;j++)
    {
      move=getche();
      cleardevice();
      menu();  drawshape(n);
      movexryr();
      ellipse(x1,y1,x2,y2,xr,yr);
      if(move=='5')
       goto mellipse1;
      else if(move==32)
       goto mellipseenter;
    }
    mellipseenter:
    ellipsex[n]=x1;
    ellipsey[n]=y1;
    ellipsesa[n]=x2;
    ellipseea[n]=y2;
    ellipsexr[n]=xr;
    ellipseyr[n]=yr;
  }  //end of mellipse


  }   //end of modify
  else if(selector=='E')
  {
     goto stop;
  }
}//end of main for loop
getch();
stop:
}