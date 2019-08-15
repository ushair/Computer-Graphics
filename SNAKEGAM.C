#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
int k,i;
struct body{
int x;
int y;
}b[50],target;
void firststep(int,int);


void main()
{
		int gd=DETECT,gm,x=100,y=100,i=0,j=0;
		char m[50];
		initgraph(&gd,&gm,"..\\bgi");
		//prev=getvect(9);
		firststep(x,y);
		do
		{
		switch(dir)
		{
			case 0:
			j-=size;
			break;
			case 1;
			j+=size;
			break;
			case 2:
			i+=size;
			break;
			case 3:
			i-=size;
			break;
		}
		setcolor(scolor);
		snake(x+i,y+j);
		delay(spd);
		setcolor(15);
	       // setvect(9,our);
	       if(stop==1)
	       break;
	       if(chk())
	       break;
 if(hit==1)
	       {
	       hit =0;
	       target.x=size*random(20);
	       target.y=size*random(30);
	       setcolor(tcolor);
	       circle(target.x+size/2,target.y+size/2,size/4);
	       floodfill(target.x+size/2,target.y+size/2,tcolor);
 }
 setcolor(2);
 circle(target.x+size/2,target.y+size/2,size/3);
 gotoxy(70,1);
 printf("SCORE : %d",pt);
		}while(1);
		getch();
		closegraph();
		}
void firststep(int x,int y)
{
		setcolor(14);
		rectangle(0,0,700,500);
		setfillstyle(SOLID_FILL,15);
		floodfill(250,250,15);
		b[0].x=x;
		b[0].y=y;
		for(i=0;i<=blocks;i++)
		{
		b[i].x=x-size*i;
		b[i].y=y
		}
		for(k=0;k<blocks;k++)
		rectangle(b[k].x,b[k].y,b[k].x+15,b[k].y+15);
		}
