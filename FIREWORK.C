#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
int x,y;
int i,j,kk;

initgraph(&gd,&gm,"..\\bgi");

setcolor(WHITE);
line(0,400,640,400);
rectangle(300,330,340,400);
rectangle(310,320,330,330);
setcolor(4);
line(319,280,319,398);
line(320,280,320,398);
rectangle(320,280,330,300);
outtextxy(340,280,"PRESS ANY KEY TO IGNITE THE ROCKET");
getch();
for(j=400;j<640;j++)
{
cleardevice();
setcolor(WHITE);
line(0,j,640,j);
rectangle(300,j-70,340,j);
rectangle(310,j-80,330,j-70);

setcolor(RED);
line(319,280,319,400);
line(320,280,320,400);
rectangle(320,280,330,300);

setcolor(YELLOW);
circle(325,300,2);

delay(5);
}

for(i=400;i>340;i--)
{
cleardevice();

setcolor(RED);
line(319,i,319,i-120);
line(320,i,320,i-120);
rectangle(320,i-120,330,i-100);

setcolor(YELLOW);
circle(325,i-100,2);
delay(25);
}

cleardevice();
kk=0;
for(j=100;j<350;j++)
{
if(j%20==0)
{
setcolor(kk);
kk=kk+3;
delay(50);
}
ellipse(320,30,0,360,j+100,j+0);
}
for(j=100;j<350;j++)
{
if(j%20==0)
{
setcolor(0);
delay(3);
}
ellipse(320,30,0,360,j+100,j+0);
}
cleardevice();
for(i=0;i<1000;i++)
{
delay(3);
putpixel(random(1000),random(500),random(15));
}

for(i=0;i<70;i++)
{
setcolor(i);
settextstyle(1,HORIZ_DIR,6);
outtextxy(110,150,"HAPPY NEW YEAR");
outtextxy(285,200,"2013");
delay(90);
}
getch();
}