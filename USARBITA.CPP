#include<conio.h>
#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
   void draw (int r[][2])
{
    int i;
    setlinestyle (DOTTED_LINE, 0, 1);
    line (320, 0, 320, 480);
    line (0, 240, 640, 240);
 
    setlinestyle (SOLID_LINE, 0, 1);
    line (320+r[0][0], 240-r[0][1], 320+r[1][0], 240-r[1][1]);
    line (320+r[0][0], 240-r[0][1], 320+r[3][0], 240-r[3][1]);
    line (320+r[1][0], 240-r[1][1], 320+r[2][0], 240-r[2][1]);
    line (320+r[2][0], 240-r[2][1], 320+r[3][0], 240-r[3][1]);
}

void reset (int r[][2])
{
    int i;
    int val[4][2] = {
			{ 0, 0 },{ 100, 0 },{ 100, 50 },{ 0, 50 }
		    };
	for (i=0; i<4; i++)
    {
	r[i][0] = val[i][0];
	r[i][1] = val[i][1];
    }
}

void rotate (int r[][2], int angle)
{
    int i;
    double ang_rad = (angle * M_PI) / 180;
    for (i=0; i<4; i++)
    {
	double xnew, ynew;
	xnew = r[i][0] * cos (ang_rad) - r[i][1] * sin (ang_rad);
	ynew = r[i][0] * sin (ang_rad) + r[i][1] * cos (ang_rad);
	r[i][0] = xnew;
	r[i][1] = ynew;
    }
}
void translate (int r[][2], int dx, int dy)
{
    int i;
    for (i=0; i<4; i++)
    {
	r[i][0] += dx;
	r[i][1] += dy;
    }
}
 
void ini()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..//bgi");
}
void main()
{
int r[4][2],angle,dx,dy,x, y,choice;
printf("Enter the rotation angle: ");
scanf("%d",&angle);
printf("Enter the x- and y-coordinates of the point: ");
scanf("%d%d",&x,&y);
ini();
cleardevice();
reset(r);
translate(r,x,y);
draw(r);
//putpixel(320+x,240-y,WHITE);
getch();
translate(r,-x,-y);
draw(r);getch();
rotate(r,angle);
draw(r);getch();
translate(r,x,y);
cleardevice();
draw(r);
//putpixel(320+x,240-y,WHITE);
getch();
closegraph();
}