#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
main()
{
double xnew, ynew;
int xp,yp,r[4][2]={{0,0},{100,0},{100,50},{0,50}};
int gd=DETECT,gm ,i, j, k,x=100,y=100;
float ang_rad = (20 * 3.14) / 180;
clrscr();
for(i=0;i<4;i++)
{
for(j=0;j<2;j++)
{
r[i][j]+=100;
}
}
initgraph(&gd,&gm,"..//bgi");
line(r[0][0],r[0][1],r[1][0],r[1][1]);
line(r[0][0],r[0][1],r[3][0],r[3][1]);
line(r[1][0],r[1][1],r[2][0],r[2][1]);
line(r[2][0],r[2][1],r[3][0],r[3][1]);
getch();

    for (i=0; i<4; i++)
    {
	r[i][0] -=x;
	r[i][1] -=y;
    }
    line(r[0][0],r[0][1],r[1][0],r[1][1]);
line(r[0][0],r[0][1],r[3][0],r[3][1]);
line(r[1][0],r[1][1],r[2][0],r[2][1]);
line(r[2][0],r[2][1],r[3][0],r[3][1]);
    getch();
 cleardevice();
    line(r[0][0],r[0][1],r[1][0],r[1][1]);
line(r[0][0],r[0][1],r[3][0],r[3][1]);
line(r[1][0],r[1][1],r[2][0],r[2][1]);
line(r[2][0],r[2][1],r[3][0],r[3][1]);

 cleardevice();

for (i=0; i<4; i++)
    {
	xnew = r[i][0] * cos (ang_rad) - r[i][1] * sin (ang_rad);
	ynew = r[i][0] * sin (ang_rad) + r[i][1] * cos (ang_rad);
	r[i][0] = xnew;
	r[i][1] = ynew;
    }
    line(r[0][0],r[0][1],r[1][0],r[1][1]);
line(r[0][0],r[0][1],r[3][0],r[3][1]);
line(r[1][0],r[1][1],r[2][0],r[2][1]);
line(r[2][0],r[2][1],r[3][0],r[3][1]);

getch();

 cleardevice();

  for (i=0; i<4; i++)
    {
	r[i][0] +=x;
	r[i][1] +=y;
    }
    line(r[0][0],r[0][1],r[1][0],r[1][1]);
line(r[0][0],r[0][1],r[3][0],r[3][1]);
line(r[1][0],r[1][1],r[2][0],r[2][1]);
line(r[2][0],r[2][1],r[3][0],r[3][1]);
getch();
closegraph();
}