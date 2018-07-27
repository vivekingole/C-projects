//programmer:-vivek ingole
#include <stdio.h>
#include <conio.h>
#include<balon.h>
animation()
{
	register y=72,z=60,i;
	int gdriver=DETECT,gmode,x=78;
	initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
	for(i=50;!hit();i++,y++)
			{
	settextstyle(3,0,8);
	outtextxy(200,50,"wait...");   /*nam*/																																																												 																																																				  															settextstyle(7,0,5);outtextxy(17,300,"programmer :- vivek ingole");
			bar(i+2,250,630,255);
		 if(i>=75&&i<=100||i>=125&&i<=150||i>=175&&i<=200||    i>=225&&i<=250||i>=275&&i<=300||i>=325&&i<=350||
		    i>=375&&i<=400||i>=425&&i<=450||i>=475&&i<=500||   i>=525&&i<=550||i>=575&&i<=600||i>=625&&i<=630)
		   {
		 ellipse(i,252,20,340,30,30);
		 line(i,252,x,241);
		 line(i,252,x,262);
		 circle(i+3,234,4);        //smile animation
		  z=z+10;
		  x++;
					  if(i==75||i==125||i==175||i==225||i==275||i==325
			     ||i==375||i==425||i==475||i==525)
			  {

			  voic(1000);
			  wait(15);
			  novoic();
		 }
		 }
		 else
		 {     x++;
			 ellipse(i,252,40,320,30,30);
		 line(i,252,y,232);
		 line(i,252,y,272);
		 circle(i+3,234,4);        //smile animation
		 setfillstyle(1,4);

		}
		wait(15);
		clear();
		if(i==630)
		break;
		}

}

main()
{
clrscr();
char selector;
int gd=DETECT,gm,i,j,score=0,baloon,elipcenter=2,random,balon;
ck();
initgraph(&gd,&gm,"c:\\tc\\bgi");
animation();
clear();
	settextstyle(1,0,8);
	outtextxy(185,150,"Welcome");
	wait(1000);
	clear();
      settextstyle(1,0,4);
for(i=1;i<=10;i++)
{
  randomize();
	random=rand()%14;
	if(random==0||random==1||random==2||random==3)
	{
	baloon=1;
	}
	else if(random==4||random==5||random==6||random==7)
	{
	baloon=2;
	}
	else
	{
	baloon=3;
	}
		random=rand()%11;
	if(random==0||random==1||random==2||random==3)
	{
	balon=157;
	}
	else if(random==4||random==5||random==6||random==7)
	{
	balon=315;
	}
	else
	{
	balon=472;
	}

	switch(baloon)
	{
		case 1:
			for(j=0;j<=430;j++)

		{
		       //	circle(157,j,50);
			ellipse(157,j,0,360,40,50);

			switch(i)
{
case 1:
outtextxy(152,j-20,"1");
break;
case 2:
outtextxy(152,j-20,"2");
break;
case 3:
outtextxy(152,j-20,"3");
break;
case 4:
outtextxy(152,j-20,"4");
break;
case 5:
outtextxy(152,j-20,"5");
break;
case 6:
outtextxy(152,j-20,"6");
break;
case 7:
outtextxy(152,j-20,"7");
break;
case 8:
outtextxy(152,j-20,"8");
break;
case 9:
outtextxy(152,j-20,"9");
break;
case 10:
outtextxy(142,j-20,"10");
break;
}

			if(hit())
			{
				selector=takeche();
				if(selector=='4')
				{
				     if(elipcenter==1)
				     {
				     }
				     else
				     {
				      elipcenter--;
				     }
				}
				  else if(selector=='6')
				{
				     if(elipcenter==3)
				     {
				     }
				     else
				     {
				      elipcenter++;
				     }
				}
				else if(selector=='s')
				{
				   goto stop;
				}
			}   //end of hit()

		 switch(elipcenter)
		 {
		   case 1:
		   ellipse(157,430,0,360,100,20);
		   ellipse(157,430,190,350,100,48);
		   break;
		   case 2:
		    ellipse(315,430,0,360,100,20);
		   ellipse(315,430,190,350,100,48);
		   break;
		    case 3:
		   ellipse(472,430,0,360,100,20);
		  ellipse(472,430,190,350,100,48);
		   break;
		 }

	   if((baloon==elipcenter)&&(j==430))
	   {
	      score++;
		 voic(1000);
	      wait(100);
	      novoic();

	   }
	   wait(3);
	   clear();
	   }   // 2 nd for
	   break;  // of 1 st switch

	   //second case

		case 2:
		for(j=0;j<=430;j++)
		{
		     //	circle(315,j,50);
		      ellipse(315,j,0,360,40,50);

					switch(i)
{
case 1:
outtextxy(310,j-20,"1");
break;
case 2:
outtextxy(310,j-20,"2");
break;
case 3:
outtextxy(310,j-20,"3");
break;
case 4:
outtextxy(310,j-20,"4");
break;
case 5:
outtextxy(310,j-20,"5");
break;
case 6:
outtextxy(310,j-20,"6");
break;
case 7:
outtextxy(310,j-20,"7");
break;
case 8:
outtextxy(310,j-20,"8");
break;
case 9:
outtextxy(310,j-20,"9");
break;
case 10:
outtextxy(300,j-20,"10");
break;
}

			if(hit())
			{
				selector=takeche();
				if(selector=='4')
				{
				     if(elipcenter==1)
				     {
				     }
				     else
				     {
				      elipcenter--;
				     }
				}
				  else if(selector=='6')
				{
				     if(elipcenter==3)
				     {
				     }
				     else
				     {
				      elipcenter++;
				     }
				}
				else if(selector=='s')
				{
				   goto stop;
				}
			}   //end of hit()

		 switch(elipcenter)
		 {
		   case 1:
		    ellipse(157,430,0,360,100,20);
		  ellipse(157,430,190,350,100,48);
		   break;
		   case 2:
		    ellipse(315,430,0,360,100,20);
		  ellipse(315,430,190,350,100,48);
		   break;
		    case 3:
		    ellipse(472,430,0,360,100,20);
		  ellipse(472,430,190,350,100,48);
		   break;
		 }

	   if((baloon==elipcenter)&&(j==430))
	   {
	      score++;
		 voic(1000);
	      wait(100);
	      novoic();

	   }
	   wait(3);
	   clear();
	   }   // 2 nd for
	   break;  // of 2 st switch

		case 3:
		for(j=0;j<=430;j++)
		{
		      //	circle(472,j,50);
		      ellipse(472,j,0,360,40,50);
							switch(i)
{
case 1:
outtextxy(467,j-20,"1");
break;
case 2:
outtextxy(467,j-20,"2");
break;
case 3:
outtextxy(467,j-20,"3");
break;
case 4:
outtextxy(467,j-20,"4");
break;
case 5:
outtextxy(467,j-20,"5");
break;
case 6:
outtextxy(467,j-20,"6");
break;
case 7:
outtextxy(467,j-20,"7");
break;
case 8:
outtextxy(467,j-20,"8");
break;
case 9:
outtextxy(467,j-20,"9");
break;
case 10:
outtextxy(462,j-20,"10");
break;
}

			if(hit())
			{
				selector=takeche();
				if(selector=='4')
				{
				     if(elipcenter==1)
				     {
				     }
				     else
				     {
				      elipcenter--;
				     }
				}
				  else if(selector=='6')
				{
				     if(elipcenter==3)
				     {
				     }
				     else
				     {
				      elipcenter++;
				     }
				}
				else if(selector=='s')
				{
				   goto stop;
				}
			}   //end of hit()

		 switch(elipcenter)
		 {
		   case 1:
		    ellipse(157,430,0,360,100,20);
		  ellipse(157,430,190,350,100,48);
		   break;
		   case 2:
		    ellipse(315,430,0,360,100,20);
		  ellipse(315,430,190,350,100,48);
		   break;
		    case 3:
		    ellipse(472,430,0,360,100,20);
		  ellipse(472,430,190,350,100,48);
		   break;
		 }

	   if((baloon==elipcenter)&&(j==430))
	   {
	      score++;
	      voic(1000);
	      wait(100);
	      novoic();
	   }
	   wait(3);
	   clear();
	   }   // 2 nd for
	   break;  // of 2 st switch

       }   //firsr switch
}
stop:
clear();
settextstyle(1,0,7);
switch(score)
{
case 1:
outtextxy(150,155,"score is 1");
break;
case 2:
outtextxy(150,155,"score is 2");
break;
case 3:
outtextxy(150,155,"score is 3");
break;
case 4:
outtextxy(150,155,"score is 4");
break;
case 5:
outtextxy(150,155,"score is 5");
break;
case 6:
outtextxy(150,155,"score is 6");
break;
case 7:
outtextxy(150,155,"score is 7");
break;
case 8:
outtextxy(150,155,"score is 8");
break;
case 9:
outtextxy(150,155,"score is 9");
break;
case 10:
outtextxy(150,155,"score is 10");
break;
}
getch();

}