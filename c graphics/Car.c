#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>

int main()
{
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	setbkcolor(BLUE);
	delay(3000);
	setcolor(random(16)) ;
	line(30,400,getmaxx()-30,400);delay(1000);
	circle(230,365,35);delay(1000);circle(230,365,5);delay(1000);
	circle(500,365,35);delay(1000);circle(500,365,5);delay(1000);
	arc(230,365,0,180,40); delay(1000);
	arc(500,365,0,180,40); delay(1000);
	line(90,365,190,365);delay(1000);line(270,365,460,365);delay(1000);line(540,365,570,365);delay(1000);
	line(90,285,90,365);delay(1000);line(570,265,570,365);delay(1000);
	line(110,265,180,265);delay(1000);line(545,265,570,265);delay(1000);
	line(180,265,280,165);delay(1000);line(180,265,280,265);delay(1000);line(280,165,280,268);delay(1000);
	line(280,165,515,165);delay(1000);line(280,265,545,265);delay(1000);line(515,165,545,265);delay(1000);
	ellipse(230,235,0,360,12,2);delay(1000);line(230,235,210,265);delay(1000);
	line(90,285,110,265); delay(1000);
	arc(230,362,0,180,42);delay(1000);arc(500,362,0,180,42); delay(1000);
	line(188,363,186,363);delay(1000);line(186,363,186,268);delay(1000);line(186,268,280,268); delay(1000);
	line(272,363,288,363);delay(1000);line(288,363,288,165);delay(1000);
	outtextxy(300,280,"Nasir Basha K");

	getch();
	closegraph();
return 0;
}