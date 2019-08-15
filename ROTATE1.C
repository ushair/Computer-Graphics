#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>
   int gdriver,gmode,j,k,sum,mult;

   int pi[8];
   double b[3][3]={1,0,0,
		   0,1,0,
		   0,0,1
		  };
   int c[1][1];
   float a[1][1];
   int x=0,y=0;
   void matmul(float[8]);
   main()
   { int angle;
    float p1[10]=  {100,200,
		130,200,
		130,270,
		100,270,
		100,200,
	       };
float p2[10]=  {100,200,
		120,180,
		150,180,
		130,200,
		100,200
	       };
float p3[10]=  {130,200,
		150,180,
		150,250,
		130,270,
		130,200
	       };


      detectgraph(&gdriver,&gmode);
      initgraph(&gdriver,&gmode," ");
      setcolor(4);
      matmul(p1);
      setfillstyle(1,4);
      fillpoly(4,pi);
      matmul(p2);
      setfillstyle(1,1);
      fillpoly(4,pi);
      matmul(p3);
      setfillstyle(1,15);
      fillpoly(4,pi);
      getch();
      for(angle=0;angle<360;angle++)
      {
      setcolor(0);
      matmul(p1);
      setfillstyle(1,0);
      fillpoly(4,pi);
      matmul(p2);
      setfillstyle(1,0);
      fillpoly(4,pi);
      matmul(p3);
      setfillstyle(1,0);
      fillpoly(4,pi);
      b[0][0] =cos(angle*3.142/180);
      b[0][1] =sin(angle*3.142/180);
      b[1][0] =-sin(angle*3.142/180);
      b[1][1] =cos(angle*3.142/180);
      b[1][2] = 0;
      b[2][0] =-x*cos(angle*3.142/180)+y*sin(angle*3.142/180)+x;
      b[2][1] =-x*sin(angle*3.142/180)+y*cos(angle*3.142/180)+y;
      b[2][2] = 0;
      matmul(p1);
      setfillstyle(1,4);
      fillpoly(4,pi);
      matmul(p2);
      setfillstyle(1,1);
      fillpoly(4,pi);
      matmul(p3);
      setfillstyle(1,15);
      fillpoly(4,pi);

      delay(100);
      }
	for(angle=360;angle>=0;angle--)
      {
      setcolor(0);
      matmul(p1);
      setfillstyle(1,0);
      fillpoly(4,pi);
      matmul(p2);
      setfillstyle(1,0);
      fillpoly(4,pi);
      matmul(p3);
      setfillstyle(1,0);
      fillpoly(4,pi);
      b[0][0] =cos(angle*3.142/180);
      b[0][1] =sin(angle*3.142/180);
      b[0][2] = 0;
      b[1][0] =-sin(angle*3.142/180);
      b[1][1] =cos(angle*3.142/180);
      b[1][2] = 0;
      b[2][0] =-x*cos(angle*3.142/180)+y*sin(angle*3.142/180)+x;
      b[2][1] =-x*sin(angle*3.142/180)+y*cos(angle*3.142/180)+y;
      b[2][2] = 0;
      matmul(p1);
      setfillstyle(1,4);
      fillpoly(4,pi);
      matmul(p2);
      setfillstyle(1,1);
      fillpoly(4,pi);
      matmul(p3);
      setfillstyle(1,15);
      fillpoly(4,pi);
      delay(100);
      }
      getch();
      closegraph();
   }

   void matmul(float p[10])
   {
      int i;
      for(i=0;i<9;i=i+2)
      { a[0][0]=p[i];
	a[0][1]=p[i+1];
	c[0][0] = a[0][0]*b[0][0]+a[0][1]*b[1][0]+b[2][0]+320;
	c[0][1] = a[0][0]*b[0][1]+a[0][1]*b[1][1]+b[2][1]+240;
	pi[i]=c[0][0];
	pi[i+1]=c[0][1];
      }
   }


