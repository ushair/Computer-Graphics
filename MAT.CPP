//**************************************
// Name: Matrix-like Digital Rain on windows console
// Description:This program presents a "Digital Rain" effect much alike that of the Matrix movie series. It utilizes only the windows console characters and functions, it can be easily tweaked to work on a windowed console, but it's already ready to go on fullscreened consoles.
// By: Felipe Garcia Tamosauskas
//
// Inputs:None.
//
// Returns:EXIT_SUCCESS, or TRUE, if ended succesfully.
//
// Assumes:I've compiled it with Bloodshed's Dev-cpp IDE, it will probably work on other ones too. The OS must be windows of course, I think 98, XP and NT will accept it well, earlier versions and Vista are unlikely to work.
//To understand the code I guess the user will need pointer, classes and Handles knowledge.
//It's not very well commented sorry, but if you are having trouble understanding how something works I'll be glad to help.
//
// Side Effects:You might want to use it as your screensaver =], it's a really cool effect, specially if yoa are a series fan like me.
//
//This code is copyrighted and has// limited warranties.Please see http://www.Planet-Source-Code.com/vb/scripts/ShowCode.asp?txtCodeId=12405&lngWId=3//for details.//**************************************

#include <cstdlib.h> //rand and srand()
#include <iostream.h> //we need cout
#include <windows.h> //for all the console functions and structures
#include <process.h>
#include <math.h>
#include <conio.h>//for kbhit
static int SCREEN_WIDTH=80;
static int SCREEN_HEIGHT=51;
using namespace std;
//Executes an Alt+Enter combo
void AltEnter()
{
 keybd_event(VK_MENU,
0x38,
0,
0);
 keybd_event(VK_RETURN,
0x1c,
0,
0);
 keybd_event(VK_RETURN,
0x1c,
KEYEVENTF_KEYUP,
0);
 keybd_event(VK_MENU,
0x38,
KEYEVENTF_KEYUP,
0);
}
//Set console window buffer
void setBuffer(int x, int y)
{
HANDLE console;
SMALL_RECT screen = {0, 0, 0, 0};
console = GetStdHandle(STD_OUTPUT_HANDLE);
screen.Right = x;
screen.Bottom = y;
SetConsoleWindowInfo(console,TRUE,&screen);
}
//Puts output cursor on coordinates X and Y
void setXY(int x, int y)
{
HANDLE console;
COORD pos;
console = GetStdHandle(STD_OUTPUT_HANDLE);
pos.X = x;
pos.Y = y;
SetConsoleCursorPosition(console,pos);
}
//Set cursor size and visibility
void setCursor(int size, bool visible)
{
HANDLE console;
CONSOLE_CURSOR_INFO cursor;
console = GetStdHandle(STD_OUTPUT_HANDLE);
cursor.dwSize = size;
cursor.bVisible = visible; 
SetConsoleCursorInfo(console,&cursor);
}
//Receives an integer and sets the current output background and foreground colors, format is RGBIrgbi, capitals are related to foreground color, lowercase to background, r=red, g=green, b=blue, i=intensity(brightness). Values can be 1 for true and 0 for false:
//Eg.: Ruby red text with blood red on background: 10011000, Bright white text on cyan blue: 11110111, yellow stars on nightsky: 1110010 (<-Notice you need to take out any leading zeroes or else the compiler will think you are working with octals)
void setColor(int rgb)
{
HANDLE console;
WORD color=0;
console = GetStdHandle(STD_OUTPUT_HANDLE);
if(rgb>=10000000){color+=FOREGROUND_RED;rgb-=10000000;}
if(rgb>=1000000){color+=FOREGROUND_GREEN;rgb-=1000000;}
if(rgb>=100000){color+=FOREGROUND_BLUE;rgb-=100000;}
if(rgb>=10000){color+=FOREGROUND_INTENSITY;rgb-=10000;}
if(rgb>=1000){color+=BACKGROUND_RED;rgb-=1000;}
if(rgb>=100){color+=BACKGROUND_GREEN;rgb-=100;}
if(rgb>=10){color+=BACKGROUND_BLUE;rgb-=10;}
if(rgb>=1){color+=BACKGROUND_INTENSITY;}
SetConsoleTextAttribute(console, color);
}
//digital rain "drop"
class droplet{
private:
COORD pos;//location of drop head on screen
char trail[16];//information on all characters
int speed;//speed, 1, 2 or 3.
public:
			 //constructor, takes a coordinate and a speed
droplet(int x, int y, int spd){
 int i=0;
 while(i<16){
trail[i] = 32+rand()%223;
i++;
}
pos.X=x;
pos.Y=y;
speed=spd;
 }
 
			//moves drop one coordinate down and moves it back up to a random horizontal coordinate when it has past SCREEN_HEIGHT+max drop size
void down()
{
 if(pos.Y+speed>SCREEN_HEIGHT+16){pos.X=rand()%SCREEN_WIDTH; pos.Y=0;}else pos.Y+=speed;
 for(int i=15;i>0;i--)trail[i]=trail[i-1];
 trail[0] = 32+rand()%223;
}
 
			//draws droplet on screen, drop head is bright green, tail is a darker shade of green, after drawing the tail, it "erases" some part of the previous tail, depending on the droplet speed
void draw()
{
 for(int i=0;i<speed*5+2;i++)
 {
 if(i==0)setColor(1010000);else if(i==1) setColor(1000000);
 if(!(pos.Y-i<-1||pos.Y-i>SCREEN_HEIGHT-2))
 {
if(i==speed*5+1)
{
for(int j=0;j<speed;j++)
{
 if(!(pos.Y-i-j<-1||pos.Y-i-j>SCREEN_HEIGHT-1))
 {
setXY(pos.X,pos.Y-i-j);
cout<<" ";
 }
}
}
else
{
setXY(pos.X,pos.Y-i);
cout<<trail[i];
}
 }
 }
}
};
//main =P
int main(int argc, char *argv[])
{ 
 srand(time(0));//sets random seed
 
 int num=((rand()%4)+1)*50;
 SetConsoleTitle("Matrix!");
 setCursor(0,true);
 AltEnter();
 
 droplet **drops = new droplet * [num];//declare a pointer of a droplet pointer and sets it to an array of droplet pointers
 
 for(int i=0;i<num;i++)
 drops[i] = new droplet(rand()%SCREEN_WIDTH,rand()%(SCREEN_HEIGHT+16),rand()%2+1);//initializes each droplet pointer to a randomly placed droplet with random speed
 
 while(!kbhit())//while no key is pressed...
 {
for(int i=0;i<num;i++)//runs through all drops
{
 drops[i]->draw();//drawing...
 drops[i]->down();//and lowering them!
}
setXY(-1,-1);//hide keyboard cursor out of the screen
 }
	//after we are done, clean the mess
 for(int i=0;i<num;i++) delete drops[i];//destorying droplets
 delete[] drops;//destroying droplet pointer array
 return EXIT_SUCCESS;//exit!
}