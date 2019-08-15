
#include<graphics.h>
#include<alloc.h>
void wheel();
void main()
{
     int gd,gm;
     detectgraph(&gd,&gm);
     initgraph(&gd,&gm,"c:\\tc\\bgi");
     wheel();
     getch();
     closegraph();
}
void wheel()
{
   int x,y,area1,area2,area3,area4;
   void *buff1,*buff2,*buff3,*buff4;

   circle(320,240,40);
   circle(320,240,30);

   line(290,240,350,240);
   setfillstyle(SOLID_FILL,YELLOW);
   fillellipse(285,240,5,5);
   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(355,240,5,5);

   line(320,210,320,270);
   setfillstyle(SOLID_FILL,RED);
   fillellipse(320,205,5,5);
   setfillstyle(SOLID_FILL,BLUE);
   fillellipse(320,275,5,5);

   area1=imagesize(280,200,360,280);
   buff1=malloc(area1);
   getimage(280,200,360,280,buff1);
   putimage(480,120,buff1,COPY_PUT);

   clearviewport();

   circle(320,240,40);
   circle(320,240,30);
   line(300,220,340,260);
   setfillstyle(SOLID_FILL,DARKGRAY);
   fillellipse(295,215,5,5);
   setfillstyle(SOLID_FILL,MAGENTA);
   fillellipse(345,265,5,5);

   line(300,260,340,220);
   setfillstyle(SOLID_FILL,CYAN);
   fillellipse(295,265,5,5);
   setfillstyle(SOLID_FILL,BROWN);
   fillellipse(345,215,5,5);

   area2=imagesize(280,200,360,280);
   buff2=malloc(area2);
   getimage(280,200,360,280,buff2);
   putimage(480,120,buff2,COPY_PUT);
   clearviewport();

   ////////////////////////////////
   circle(320,240,40);
   circle(320,240,30);

   line(290,240,350,240);
   setfillstyle(SOLID_FILL,DARKGRAY);
   fillellipse(285,240,5,5);
   setfillstyle(SOLID_FILL,CYAN);
   fillellipse(355,240,5,5);

   line(320,210,320,270);
   setfillstyle(SOLID_FILL,MAGENTA);
   fillellipse(320,205,5,5);
   setfillstyle(SOLID_FILL,BROWN);
   fillellipse(320,275,5,5);

   area3=imagesize(280,200,360,280);
   buff3=malloc(area3);
   getimage(280,200,360,280,buff3);
   putimage(480,120,buff3,COPY_PUT);

   clearviewport();

   circle(320,240,40);
   //circle(320,240,30);
   line(300,220,340,260);
   setfillstyle(SOLID_FILL,YELLOW);
   fillellipse(295,215,5,5);
   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(345,265,5,5);

   line(300,260,340,220);
   setfillstyle(SOLID_FILL,RED);
   fillellipse(295,265,5,5);
   setfillstyle(SOLID_FILL,BLUE);
   fillellipse(345,215,5,5);

   area4=imagesize(280,200,360,280);
   buff4=malloc(area4);
   getimage(280,200,360,280,buff4);
   putimage(480,120,buff4,COPY_PUT);
   clearviewport();
   //
   ////////////////////
   clearviewport();

   x=0;y=240;
   setcolor(GREEN);
   while(!kbhit())
   {
       if(x==640)
        x=0;
       putimage(x,y,buff1,COPY_PUT);
       x=x+5;
       delay(100);
       clearviewport();
       putimage(x,y,buff2,COPY_PUT);
       x=x+5;
       delay(100);
       clearviewport();
       putimage(x,y,buff3,COPY_PUT);
       x=x+5;
       delay(100);
       clearviewport();
       putimage(x,y,buff4,COPY_PUT);
       x=x+5;
       delay(100);
       clearviewport();
       ////////////
   }
}
