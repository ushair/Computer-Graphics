#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

void main()
{
	int gd=DETECT,gm;
	int i=0,m=0;
	initgraph(&gd,&gm,"..\\bgi");

    while(!kbhit())
	{
		cleardevice();
	      //	sound(110);
		setcolor(getmaxcolor());

		setfillstyle(SOLID_FILL,WHITE);

		rectangle(620,345,720,335);          //Road
		floodfill(621,344,getmaxcolor());

		rectangle(510,345,610,335);
		floodfill(511,344,getmaxcolor());

		rectangle(400,345,500,335);
		floodfill(401,344,getmaxcolor());

		rectangle(290,345,390,335);
		floodfill(291,344,getmaxcolor());

		rectangle(180,345,280,335);
		floodfill(181,344,getmaxcolor());

		rectangle(70,345,170,335);
		floodfill(71,344,getmaxcolor());

		rectangle(-40,335,60,345);
		floodfill(59,344,getmaxcolor());      //Road

		setcolor(WHITE);
		line(-100,165,700,165);     //top
		line(-100,170,700,170);

		setfillstyle(SOLID_FILL,7);

		rectangle(-10,166,640,-10);
		floodfill(1,1,15);

		setcolor(YELLOW);            //Building No. 1
		rectangle(630,165,511,100),
		setfillstyle(SOLID_FILL,5);
		floodfill(520,160,YELLOW);

		rectangle(610,100,570,45);
		floodfill(605,46,YELLOW);

		rectangle(570,100,530,45);
		floodfill(565,46,YELLOW);

		setfillstyle(SOLID_FILL,3);

		line(630,100,615,85);
		line(610,85,615,85);
		floodfill(628,99,YELLOW);

		line(610,45,595,30);
		line(530,45,515,30);
		line(595,30,515,30);
		floodfill(605,44,YELLOW);

		line(515,30,515,85);
		line(515,85,530,100);
		floodfill(520,50,YELLOW);

		line(510,85,515,85);
		line(511,100,511,85);
		floodfill(512,90,YELLOW);

		setfillstyle(SOLID_FILL,0);

		setcolor(15);

		rectangle(585,164,555,125);
		floodfill(560,130,15);


		rectangle(600,110,620,130);
		floodfill(601,111,15);

		rectangle(520,110,540,130);
		floodfill(521,111,15);

		rectangle(593,77,603,92);
		floodfill(600,80,15);

		rectangle(593,53,603,68);
		floodfill(600,60,15);

		rectangle(577,77,587,92);
		floodfill(580,80,15);

		rectangle(577,53,587,68);
		floodfill(580,60,15);

		rectangle(553,77,563,92);
		floodfill(560,80,15);

		rectangle(553,53,563,68);
		floodfill(560,60,15);

		rectangle(537,77,547,92);
		floodfill(540,80,15);

		rectangle(537,53,547,68);
		floodfill(540,60,15);

		setcolor(2);      // Building No. 2
		setfillstyle(SOLID_FILL,4);

		rectangle(510,165,445,35);
		floodfill(505,160,2);

		rectangle(340,165,405,35);
		floodfill(345,160,2);

		setfillstyle(SOLID_FILL,6);
		rectangle(405,165,445,35);
		floodfill(410,40,2);

		setfillstyle(SOLID_FILL,8);

		line(510,35,490,15);
		line(340,35,320,15);
		line(490,15,320,15);
		floodfill(505,34,2);

		line(320,15,320,85);
		line(320,84,340,99);
		floodfill(321,20,2);

		setcolor(WHITE);

		setfillstyle(SOLID_FILL,0);

		rectangle(440,165,410,115);
		floodfill(420,160,15);

		setfillstyle(SOLID_FILL,0);

		rectangle(482,130,502,150);
		floodfill(490,140,15);

		rectangle(454,130,474,150);
		floodfill(460,140,15);

		rectangle(482,102,502,122);
		floodfill(490,105,15);

		rectangle(454,102,474,122);
		floodfill(460,105,15);

		rectangle(482,74,502,94);
		floodfill(490,80,15);

		rectangle(454,74,474,94);
		floodfill(460,80,15);

		rectangle(482,46,502,66);
		floodfill(490,50,15);

		rectangle(454,46,474,66);
		floodfill(460,50,15);

		rectangle(377,130,397,150);
		floodfill(380,140,15);

		rectangle(349,130,369,150);
		floodfill(350,140,15);

		rectangle(377,102,397,122);
		floodfill(380,105,15);

		rectangle(349,102,369,122);
		floodfill(350,105,15);

		rectangle(377,74,397,94);
		floodfill(380,80,15);

		rectangle(349,74,369,94);
		floodfill(350,80,15);

		rectangle(377,46,397,66);
		floodfill(380,50,15);

		rectangle(349,46,369,66);
		floodfill(350,50,15);

		setcolor(3);			// Building No. 3

		setfillstyle(SOLID_FILL,78);

		rectangle(339,165,216,100);
		floodfill(330,164,3);
      
		rectangle(315,100,275,45);
		floodfill(310,99,3);

		rectangle(275,100,235,45);
		floodfill(260,99,3);

		setfillstyle(SOLID_FILL,20);

		line(315,45,300,30);
		line(235,45,220,30);
		line(300,30,220,30);
		floodfill(310,44,3);

		line(220,30,220,85);
		line(220,85,235,100);
	   
		floodfill(230,50,3);

		line(215,85,220,85);
		line(216,100,216,85);
		floodfill(218,90,3);

		line(320,85,340,100);
		line(315,85,320,85);
		floodfill(318,99,3);

		setcolor(WHITE);

		setfillstyle(SOLID_FILL,0);

		rectangle(295,164,260,125);
		floodfill(290,160,15);

		rectangle(310,110,330,130);
		floodfill(320,120,15);

		rectangle(225,110,245,130);
		floodfill(230,120,15);

		rectangle(298,77,308,92);
		floodfill(300,80,15);

		rectangle(298,53,308,68);
		floodfill(300,60,15);

		rectangle(282,77,292,92);
		floodfill(290,80,15);

		rectangle(282,53,292,68);
		floodfill(290,60,15);

		rectangle(258,77,268,92);
		floodfill(260,80,15);

		rectangle(282,77,292,92);
		floodfill(290,80,15);

		rectangle(242,77,252,92);
		floodfill(250,80,15);

		rectangle(258,53,268,68);
		floodfill(260,60,15);

		rectangle(242,53,252,68);
		floodfill(250,60,15);

		setcolor(12);                // Building No. 4

		setfillstyle(SOLID_FILL,78);

		rectangle(215,165,150,35);
		floodfill(200,160,12);

		rectangle(110,165,45,35);
		floodfill(100,160,12);

		setfillstyle(SOLID_FILL,7);

		rectangle(150,165,110,35);
		floodfill(120,160,12);

		setfillstyle(SOLID_FILL,4);

		line(215,35,195,15);
		line(45,35,25,15);
		line(195,15,25,15);
		floodfill(210,34,12);

		line(25,15,25,150);
		line(45,165,25,150);
		floodfill(30,34,12);

		setcolor(WHITE);

		setfillstyle(SOLID_FILL,0);

		rectangle(145,164,115,115);
		floodfill(140,160,15);

		rectangle(187,130,207,150);
		floodfill(190,140,15);

		rectangle(159,130,179,150);
		floodfill(160,140,15);

		rectangle(187,102,207,122);
		floodfill(190,110,15);

		rectangle(159,102,179,122);
		floodfill(160,110,15);

		rectangle(187,74,207,94);
		floodfill(190,80,15);

		rectangle(159,74,179,94);
		floodfill(160,80,15);

		rectangle(187,46,207,66);
		floodfill(190,50,15);

		rectangle(159,46,179,66);
		floodfill(160,50,15);

		rectangle(82,130,102,150);
		floodfill(90,140,15);

		rectangle(54,130,74,150);
		floodfill(60,140,15);

		rectangle(82,102,102,122);
		floodfill(90,110,15);

		rectangle(54,102,74,122);
		floodfill(60,110,15);

		rectangle(82,74,102,94);
		floodfill(90,80,15);

		rectangle(54,74,74,94);
		floodfill(60,80,15);

		rectangle(82,46,102,66);
		floodfill(90,50,15);

		rectangle(54,46,74,66);
		floodfill(60,50,15);


		i++;

		if(i>getmaxx())
			i-=670;
	     //	setcolor(random(225));
		setcolor(GREEN);				//Car No.1

		setfillstyle(SOLID_FILL,49);

		line(80+i,450,90+i,420);     //1
		line(90+i,420,125+i,380);

	   //	floodfill(81+i,430,2);

		line(90+i,420,120+i,420);    //2
		line(120+i,420,155+i,380);
		line(125+i,380,155+i,380);

		line(120+i,420,160+i,390);   //3
		line(160+i,390,195+i,350);
		line(155+i,380,195+i,350);

		line(120+i,420,120+i,435);
		line(122+i,420,122+i,432);

		line(160+i,390,230+i,390);   //4
		line(230+i,390,265+i,350);
		line(195+i,350,265+i,350);
		line(205+i,385,232+i,355);
		line(225+i,385,252+i,355);
		line(205+i,385,225+i,385);
		line(232+i,355,252+i,355);

		line(230+i,390,275+i,420);   //5
		line(275+i,420,310+i,380);
		line(265+i,350,310+i,380);

		line(275+i,420,310+i,420);   //6
		line(274+i,420,274+i,440);
		line(276+i,420,276+i,438);

		line(310+i,420,335+i,440);   //7
		line(310+i,419,345+i,380);

		line(310+i,380,345+i,380);
		ellipse(350+i,400,0,360,5,5);
		ellipse(332+i,420,0,360,5,5);

		line(335+i,440,335+i,450);   //8
		line(335+i,440,370+i,400);
		line(345+i,380,370+i,400);
		line(335+i,450,370+i,410);
		line(370+i,400,370+i,410);

		line(335+i,450,312+i,450);   //9

		line(153+i,450,272+i,450);   //10
		line(194+i,390,194+i,425),
		line(196+i,390,196+i,425),
		line(194+i,430,194+i,450);
		line(196+i,430,196+i,450);

		line(184+i,425,206+i,425);
		line(184+i,428,206+i,428);
		line(184+i,425,184+i,428);
		line(206+i,425,206+i,428);
		line(195+i,425,195+i,428);

		line(120+i,420,194+i,420);
		line(124+i,418,194+i,418);


		line(196+i,420,275+i,420);
		line(196+i,418,271+i,418);

		line(80+i,450,113+i,450);    //11

		arc(292+i,450,0,180,20);     //12

		arc(133+i,450,0,180,20);     //13

		circle(292+i,450,16);        //14

		circle(133+i,450,16);        //15

		pieslice(292+i,450,0+m,90+m,16); //16

		pieslice(292+i,450,180+m,270+m,16);  //17


		pieslice(133+i,450,0+m,90+m,16);    //18

		pieslice(133+i,450,180+m,270+m,16); //19

		setcolor(YELLOW);				//Car No.2
	     //	setcolor(random(225));

		setfillstyle(SOLID_FILL,49);

		line(550-i,310,527-i,310);   //1

	     //   floodfill(545,305,YELLOW);

		line(550-i,310,555-i,300);   //2

		line(555-i,300,555-i,263);  //3

		line(555-i,263,492-i,263);     //D
		line(555-i,265,492-i,265);

		line(490-i,263,442-i,263);
		line(490-i,265,442-i,265);

		line(440-i,263,380-i,263);
		line(440-i,265,380-i,265);

		rectangle(540-i,270,550-i,280);
		line(550-i,270,540-i,280);

		line(490-i,228,490-i,290);
		line(492-i,228,492-i,290);

		rectangle(475-i,270,485-i,275);

		line(440-i,228,440-i,310);
		line(442-i,228,442-i,310);

		rectangle(425-i,270,435-i,275);

		line(380-i,293,380-i,264);
		line(382-i,296,382-i,264);        //D..

		line(555-i,263,510-i,228);  //4
		line(555-i,263,510-i,220);
		line(510-i,220,465-i,183);

		line(510-i,228,410-i,228);  //5
		line(510-i,228,465-i,183);
		line(365-i,183,465-i,183);

		line(381-i,188,400-i,188);
		line(415-i,222,434-i,222);
		line(381-i,188,415-i,222);
		line(400-i,188,434-i,222);

		line(410-i,228,380-i,263);  //6
		line(410-i,228,365-i,183);
		line(365-i,183,335-i,220);

		line(380-i,265,342-i,265);  //7
		line(380-i,265,335-i,220);
		line(335-i,220,300-i,220);

		arc(345-i,303,93,155,38);
		arc(299-i,258,80,154,38);

		line(310-i,285,310-i,305);  //8
      //		line(295-i,220,265-i,240);

		line(310-i,305,320-i,310);   //9
		line(310-i,285,265-i,240);
		line(310-i,305,265-i,260);
		line(265-i,240,265-i,260);
		ellipse(300-i,285,0,360,4,4);
		ellipse(275-i,260,0,360,4,4);

	  //	line(335-i,220,280-i,240);
	  //	line(380-i,265,325-i,285);

		line(320-i,310,340-i,310);   //10

		line(385-i,310,481-i,310);   //11

		arc(503-i,310,0,180,23);     //12

		arc(363-i,310,0,180,23);     //13

		circle(503-i,310,18);        //14

		circle(363-i,310,18);        //15

		pieslice(503-i,310,0-m,90-m,18); //16

		pieslice(503-i,310,180-m,270-m,18);  //17

		pieslice(363-i,310,0-m,90-m,18);    //18

		pieslice(363-i,310,180-m,270-m,18); //19

		if(m<-360)
			m=90;
	     m-=3;
	     //	delay(80);
	}

	getch();
	closegraph();
}


