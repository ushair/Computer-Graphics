#include<stdio.h>
#include<graphics.h>
#include<math.h>
main()
{
float  sum=0,comp[5],d0,angle,theta,x,y,xc,yc;
int i,gd,gm;

/* initialise graphics
------------------------ */
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"..\\bgi");

/* Read the turnover values */
/*for(i=0;i<5;i++)
{
printf("Enter the turnvalue for company%d :",i+1);
scanf("%f",&comp[i]);
} */
comp[0]=125;
comp[1]=90;
comp[2]=530;
comp[3]=140;
comp[4]=115;
for(i=0;i<5;i++)
{
sum = sum + comp[i];
}
for(i=0;i<5;i++)
{
comp[i] = (comp[i]/sum)*360;
}
xc=320;
yc=240;
x = 420;
y = 240;
d0 = 1/(3.2 * (abs(x-xc) + abs(y-yc)));
angle = 0;
theta = 0;
	for(i=0;i<5;i++)
	{
	theta = theta + comp[i];
	while (angle*180/3.142 < theta )
		{
		 setcolor(i+1);
		 line(xc,yc,x,y);
		 x = x - (y-yc) * d0;
		 y = y + (x - xc)*d0;
		 angle = angle + d0;
		 delay(100);
		 }
	}
getch();
closegraph();
}