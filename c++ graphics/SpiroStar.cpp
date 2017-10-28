#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<dos.h>

int main()
{
	int gd=DETECT,gm;
	int midx,midy;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");

	float r=200,x1=100,y1=20,set=0;

	for(float i=0;i<1000;i=i+0.003)
	{
		if(kbhit())exit(0);
		float b=+200*cos(i*10);
		int a1=x1+r+(b)*sin(i);
		int b1=y1+r+(b)*cos(i);
		int clr;

		clr=random(16);
		setcolor(random(15));
		circle(a1-320+getmaxx()/2,b1-200+getmaxy()/2,2);
		putpixel(a1-200,b1-100,(clr+1));
		putpixel(a1+200,b1-100,(clr+2));
		putpixel(a1-200,b1+150,(clr-1));
		putpixel(a1+200,b1+150,(clr-2));
		delay(1.5);

	}

getch();
return 0;
}