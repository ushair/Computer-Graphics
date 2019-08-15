#include<stdio.h>
#include<graphics.h>
#include<math.h>
main()
{
float  sum=0,d0,angle,theta,x,y,xc,yc;
int i,gd,gm;

/* initialise graphics
------------------------ */
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"");

rectangle(320,190,370,240);
rectangle(270,240,320,290);
setfillstyle(1,4);
floodfill(340,210,15);
setfillstyle(1,0);
floodfill(290,270,15);
xc=320;
yc=240;
x=370;
y=240;
d0 = 1/(3.2 * (abs(x-xc) + abs(y-yc)));
angle = 0;
theta = 90;
	for(i=0;i<2;i++)
	{
	while (angle*180/3.142 < theta )
		{
		 setcolor(2);
		 line(xc,yc,x,y);
		 x = x - (y-yc) * d0;
		 y = y + (x - xc)*d0;
		 angle = angle + d0;
		 delay(100);
		 }
	angle = (180*3.142/180);
	theta = 270;
	x = 270;
	y = 240;
	}
getch();
closegraph();
}