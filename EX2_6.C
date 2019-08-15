#include<stdio.h>
#include<graphics.h>
#include<math.h>
main()
{
float d,t,c,r,vo,v,T;
int i,gd,gm,x,y;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"");
printf("Enter the value of battery voltage :");
scanf("%f",&v);
printf("Enter the value of capacitor :");
scanf("%f",&c);
printf("Enter the value of resistor :");
scanf("%f",&r);

t=  0.0;

/* Draw axis */
line(50,400,600,400);
line(100,440,100,50);

for(i=0;i<450;i++)
{
T = -t/(c*r);
vo = v - (v*(1-exp(T)));
t = t + 0.001;
putpixel(100+t*1000,400-vo*(300/v),15);
delay(1000);
}
getch();
closegraph();

}