#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void main()
{
char a[10];
int n,i,j,space=1,gd=DETECT,gm,x,y;
clrscr();
printf("Enter the no of rows\n");
scanf("%d",&n);

    initgraph(&gd,&gm,"C:\\tc\\bgi");
	x=getmaxx()/2;
	y=getmaxy()/2;
	
	space=n-1;
	for(i=1; i<=n; i++)
	{
	      for(j=1;j<=space;j++)
			{
				printf(" ");
			}
			space--;
			
			for(j=1,y=10;j<=2*i-1;j++)
			{
				setbkcolor(j);
				printf("*");
				delay(300);
			}
			printf("\n");
	}

	space=1;
	    for(i=1 ;i<=n;i++)
		{
			for(j=1;j<=space;j++)
			{
				printf(" ");
		    }
		     space++;
			for(j=1;j<=2*(n-i)-1;j++)
		    {
				setbkcolor(j);
				printf("*");
				delay(300);
		    }
			printf("\n");
		}
getch();
}


