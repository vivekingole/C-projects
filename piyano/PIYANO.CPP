//programmer:-vivek ingole
#include<stdio.h>
#include<conio.h>
#include<piyano.h>
main()
{
clrscr();
int d=0,m,i;
char a='1';
pick();
initgraph(&d,&m,"c:\\tc\\bgi");
settextstyle(7,0,4);
outtextxy(250,15,"Piyano");
rectangle(48,98,502,202);
rectangle(44,94,506,206);
settextstyle(2,0,7);
outtextxy(75,70,"1");
outtextxy(125,70,"2");
outtextxy(175,70,"3");
outtextxy(225,70,"4");
outtextxy(275,70,"5");
outtextxy(325,70,"6");
outtextxy(375,70,"7");
outtextxy(425,70,"8");
outtextxy(475,70,"9");
bar(100,100,150,200);
bar(200,100,250,200);
bar(300,100,350,200);
bar(400,100,450,200);
setfillstyle(1,0);
bar(50,100,100,200);
bar(150,100,200,200);
bar(250,100,300,200);
bar(350,100,400,200);
bar(450,100,500,200);

rectangle(48,248,502,322);
rectangle(44,246,506,324);
settextstyle(7,0,3);
outtextxy(92,252,"press digits 1 to 9 for play");
outtextxy(180,282,"press 0 to exit");
for(int j=1;a!='0';i++)
{
   a=takeche();
	switch(a)
	{
	case '1':voic(100); wait(300); novoic();
	setfillstyle(1,2);
	bar(50,100,100,200);
	wait(100);
	setfillstyle(1,0);
	bar(50,100,100,200);
	break;

	case '2':voic(200);   wait(300); novoic();
	setfillstyle(1,2);
	bar(100,100,150,200);
	wait(100);
	setfillstyle(1,15);
	bar(100,100,150,200);

	break;

	case '3':voic(300); wait(300); novoic();
	setfillstyle(1,2);
	bar(150,100,200,200);
	wait(100);
		setfillstyle(1,0);
	bar(150,100,200,200);

	break;

	case '4':voic(400);wait(300); novoic();
	setfillstyle(1,2);
	bar(200,100,250,200);
	wait(100);
	setfillstyle(1,15);
	bar(200,100,250,200);

	break;

	case '5':voic(500); wait(300); novoic();
	setfillstyle(1,2);
	bar(250,100,300,200);
	wait(100);
	setfillstyle(1,0);
	bar(250,100,300,200);

	break;

	case '6':voic(600); wait(300); novoic();
	setfillstyle(1,2);
	bar(300,100,350,200);
	wait(100);
	setfillstyle(1,15);
	bar(300,100,350,200);

	break;

	case '7':voic(700); wait(300); novoic();
	setfillstyle(1,2);
	bar(350,100,400,200);
	wait(100);
	setfillstyle(1,0);
	bar(350,100,400,200);

	break;

	case '8':voic(800); wait(300); novoic();
	setfillstyle(1,2);
	bar(400,100,450,200);
	wait(100);
	setfillstyle(1,15);
	bar(400,100,450,200);

	break;

	case '9':voic(900); wait(300); novoic();
	setfillstyle(1,2);
	bar(450,100,500,200);
	wait(100);
	setfillstyle(1,0);
	bar(450,100,500,200);

	break;
	}
}
}