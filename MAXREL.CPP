/*	hello friends!!! I hope that you like this program ...
	Contact:  samirsolanki_online@hotmail.com 
	if error in initgraph function change path */

#include<dos.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<time.h>
#define n 1


void cls256(int r,int b,int g)
{
struct palettetype pal;
getpalette(&pal);
   for (int j=0; j<16; j++)
   {
   setrgbpalette(pal.colors[j], j*r, j*b, j*g);
  }
   }

void main()
{
   int gdriver , gmode ;
   gdriver = DETECT;
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
   int i,j,k,l,x,y,y1,sz,rn[16],cl;
   char str[]=" ";


   j=0;
   cl=15;
   //getch();
  randomize();
  cls256(1,4,1);
   while(1)
	{
	back:
	cl=15;
	l=0;
	if(kbhit())
		{
		closegraph();
		exit(1);
		}

		for(j=0;j<16;j++)
			{
			rn[j]= random(400)+11;

			if(rn[j]==32)
				{  rn[j]+=1;}

			x=random(600);
			sz=random(5)+1;
			//sz=2;
			y=random(200);
			y1=y;
			}

	for(i=0;i<16;i++)
		{
		k=0;
		j-=1;
		y1=y;
		for(cl=j;cl<16;cl++)
			{
			setcolor(cl);
			settextstyle(0,0,sz);
			sprintf(str,"%c",(char)(rn[k]));
			outtextxy(x,y1,str);
			delay(3);
			k+=1;
			y1+=sz*10;
			}
		}
	y=y1-sz*10;
	for(i=0;i<16;i++)
		{
		y1=y;
		k=15;
		j=15-i;
		for(cl=j;cl>=0;cl--)
			{
		setcolor(cl);
		settextstyle(0,0,sz);
		sprintf(str,"%c",(char)(rn[k]));
		//outtextxy(x,y1,str);
		y1-=sz*10;
		k--;
		delay(2);
		}
		}
	}
  }

















