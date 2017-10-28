#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	
	int x,f=0,y,i,f1=0,x2,y2,x3,y3,n;
	
	y3=10;
	x2=getmaxx();
	y2=10;
	x=10;
	y=getmaxy();i=0;
	x3=10;
	n=getmaxx()/2;


//1
while(!kbhit())
{
	if(x>getmaxx()-170||x<=10)
		f=!f;
	i++;
	//setbkcolor(BLUE);
	setcolor(i);
	line(10,y-10,getmaxx()-10,y-10);
	outtextxy(n-45,getmaxy()/2,"Nasir Basha K");
	circle(x+30,y-30,20);
	circle(x+120,y-30,20);
	rectangle(x,y-150,x+110,y-50);
	rectangle(x+110,y-110,x+170,y-50);

	delay(100);
	cleardevice();

	if(f)
		x=x+10;
	else
		break;
}





//2
while(!kbhit())
{
	if(y>getmaxy()-10||y<=150)
		f1=!f1;
	i++;
	//setbkcolor(BLUE);
	setcolor(i);	
	line(x2-10,10,x2-10,getmaxy()-10);
	outtextxy(n-45,getmaxy()/2,"Nasir Basha K");
	circle(x2-30,y-20,20);
	circle(x2-30,y-100,20);
	rectangle(x2-140,y-2,x2-50,y-100);
	rectangle(x2-100,y-100,x2-50,y-150);
	
	delay(100);
	cleardevice();

	if(f1)
		y=y-10;
	else
		break;
}





//3
while(!kbhit())
{
	if(x2>getmaxx()-10||x2<=170)
		f=!f;
	i++;
	//setbkcolor(BLUE);
	setcolor(i);
	line(10,y2+10,getmaxx()-10,y2+10);
	outtextxy(n-45,getmaxy()/2,"Nasir Basha K");
	circle(x2-30,y2+30,20);
	circle(x2-110,y2+30,20);
	rectangle(x2-10,y2+50,x2-110,y2+130);
	rectangle(x2-110,y2+50,x2-160,y2+100);

	delay(100);
	cleardevice();

	if(f)
		x2=x2-10;
	else
		break;

}




//4
while(!kbhit())
{
	if(y3>getmaxy()-150||y3<=10)
		f1=!f1;
	i++;
	//setbkcolor(BLUE);
	setcolor(i);
	line(x3,10,x3,getmaxy()-10);
	outtextxy(n-45,getmaxy()/2,"Nasir Basha K");
	circle(x3+20,y3+20,20);
	circle(x3+20,y3+100,20);
	rectangle(x3+40,y3+2,x3+140,y3+80);
	rectangle(x3+40,y3+80,x3+100,y3+140);
	
	delay(100);
	cleardevice();

	if(f1)
		y3=y3+10;
	else
		break;

}

getch();
closegraph();
return 0;
}