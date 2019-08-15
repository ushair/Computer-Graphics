#include <stdio.h>
#include <graphics.h>
#include <conio.h>

main()
{
void far line();
int gdriver;
int gmode,maxx,maxy,i,j;
int scale [2][2] =
{
2,0,
0,2
};
float scale1 [2][2] =
{
2,0,
0,2
};

int tri [76] [2];
int tri1 [66] [2] =
{
0,8,
7,8,
0,8,
8,6,
7,8,
8,12,
7,8,
10,5,
8,12,
21,12};
int tri2 [66] [2] =
{21,12,
31,27,
31,27,
53,36,
53,36,
50,30,
50,30,
54,32,
54,32,
53,29,
53,29,
55,30,
55,30,
53,26
};
int tri3 [66] [2] =
{27,13,
38,25,
38,25,
53,26,
53,26,
56,26,
56,26,
70,35,
70,35,
66,28,
66,28,
72,30,
72,30,
67,26,
67,26,
74,29,
74,29,
52,10,
52,10,
44,7};
int tri4 [66] [2] =
{44,7,
52,10,
52,10,
80,10,
80,10,
42,0,
42,0,
36,0,
36,0,
23,4,
23,4,
10,5};
int tri5 [66] [2] =
{11,7,
11,9,
11,9,
13,9,
13,9,
13,7,
13,7,
11,7
};
detectgraph(&gdriver,&gmode);
if(gdriver < 0)
{
puts("Cannot detect a graphics card");
exit(1);
}
initgraph(&gdriver, &gmode, "..\\bgi");

cleardevice();

setbkcolor(0);
setcolor(15);
maxy=getmaxy();
for(i=0;i<10;i++)
{j=i;
	tri[j][0] = tri1[i][0]*scale[0][0]+tri1[i][1]*scale[1][0];
	tri[j][1] = tri1[i][0]*scale[0][1]+tri1[i][1]*scale[1][1];
}
for(i=0;i<14;i++)
{ j=i+10;
	tri[j][0] = tri2[i][0]*scale[0][0]+tri2[i][1]*scale[1][0];
	tri[j][1] = tri2[i][0]*scale[0][1]+tri2[i][1]*scale[1][1];
}
for(i=0;i<20;i++)
{ j=i+24;
	tri[j][0] = tri3[i][0]*scale1[0][0]+tri3[i][1]*scale1[1][0];
	tri[j][1] = tri3[i][0]*scale1[0][1]+tri3[i][1]*scale1[1][1];
}
for(i=0;i<14;i++)
{ j=i+44;
	tri[j][0] = tri4[i][0]*scale[0][0]+tri4[i][1]*scale[1][0];
	tri[j][1] = tri4[i][0]*scale[0][1]+tri4[i][1]*scale[1][1];
}
for(i=0;i<8;i++)
{ j=i+58;
	tri[j][0] = tri5[i][0]*scale[0][0]+tri5[i][1]*scale[1][0];
	tri[j][1] = tri5[i][0]*scale[0][1]+tri5[i][1]*scale[1][1];
}
for(j=500;j>100;)
{
	for (i=0;i<72;)
	{ line(j+tri[i][0],maxy/2-tri[i][1],j+tri[i+1][0],maxy/2-tri[i+1][1]);
	i=i+2;
	}
delay(20);
j=j-1;
	for (i=0;i<72;)
        { line(j+tri[i][0],maxy/2-tri[i][1],j+tri[i+1][0],maxy/2-tri[i+1][1]);
	i=i+2;
	}
j=j+1;
setcolor(0);
	for (i=0;i<72;)
        { line(j+tri[i][0],maxy/2-tri[i][1],j+tri[i+1][0],maxy/2-tri[i+1][1]);
	i=i+2;
	}


setcolor(15);
j=j-1;
	for (i=0;i<72;)
        { line(j+tri[i][0],maxy/2-tri[i][1],j+tri[i+1][0],maxy/2-tri[i+1][1]);
	i=i+2;
	}



}
getch();
closegraph();
}