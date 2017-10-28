#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>

int main()
{
	int gd=DETECT,gm;
	int x,y,i,flag=0,flagg=0,a,b,c,d,g,h,f=0,ff=0;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	
	x=getmaxx()/2;  //for 1st ball x point
	y=30;           //for 1st ball y point
	a=30;        //for 2nd ball x point
	b=getmaxy()/2; //for 2nd ball y point
	c=30;           //for 3rd ball x point
	d=30;          //for 3rd ball y point
	g=getmaxx()-30; //for 4th ball x point
	h=getmaxy()/2;  //for 4th ball x point

	while(!kbhit())
	{
		if(y>=getmaxy()-30||y<=30) //first ball boundary condition
			flag=!flag;
    
		if(a>=getmaxx()-30||a<=30)  //second ball boundary condition
			flagg=!flagg;
		
		if(c>=getmaxx()-30||c<=30&&d>=getmaxy()-30||d<=30) //3rd ball boundary condition
			f=!f;
		
		if(g>=getmaxx()-30||g<=30) //4th ball boundary condition
			ff=!ff;

		
		setbkcolor(BLACK); // background color
		setcolor(RED);    //line color
		setfillstyle(SOLID_FILL,BLUE); //inside of the circle pattern color
		
		circle(x,y,30);               //drawing the 1st circle
		circle(a,b,30);             //drawing the 2nd circle
		circle(c,d,30);             //drawing the 3rd circle
		circle(g,h,30);				//drawing the 4th circle
		
		floodfill(x,y,RED);           //for solid color filling to 1st circle
		floodfill(a,b,RED);         //2nd circle
		floodfill(c,d,RED);        //3rd circle
		floodfill(g,h,RED);      //4th circle

		delay(100);  //adding the delay time(dos.h)

		cleardevice();  //this is for clearing the output screen

		if(!flag)       //for bounce back of first ball
			y=y-5;
		else
			y=y+5;
		
		if(!flagg)    //for bounce back of second ball
			a=a-5;
		else
			a=a+5;
  
		if(!flag)    //for bounce back of third ball
		{
			c=c-5;
			d=d-5;
		}
		else
		{
			c=c+5;
			d=d+5;
		}
  
		if(ff)   //for bounce back of 4th ball
			g=g-5;
		else
			g=g+5;

	}
	
	getch();
	closegraph();
return 0;
}