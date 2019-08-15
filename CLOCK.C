# include<dos.h>
# include<tsr.h>

void interrupt (*prevtimer)();
void interrupt mytimer();
int running=0;
//int io=0,hours,sec,min;
unsigned long int far *time=(unsigned long far *)0x46C;
char far *scr;
char far *mode;
//struct time t;
void main()
{
if((*mode & 0x30)==0x30)
scr=(char far *)0xB0000000L;
else
scr=(char far *)0xB8000000L;
/*if(io==0)
{
gettime(&t);
hours=t.ti_hour;//(*time/65520);
min=t.ti_min;//(*time - hours*65520)/1092;
sec=t.ti_sec;//(*time-(hours*65520)-(min*1092))*10/182;
io++;
} */
prevtimer=getvect(8);
setvect(8,mytimer);
keep(0,1000);
}


void interrupt mytimer()
{
unsigned char hours,min,sec;
if(running==0)
{
running=1;
hours=(*time/65520);
min=(*time - hours*65520)/1092;
sec=(*time-(hours*65520)-(min*1092))*10/182;

if(sec>=60)
{
sec-=60;
min++;

if(min==60)
{
min=0;
hours++;
if(hours==24)
hours=0;
}
}


writechar(48+hours/10,0,72,66);
writechar(48+hours%10,0,73,66);
writechar(':',0,74,66);
writechar(48+min/10,0,75,66);
writechar(48+min%10,0,76,66);
writechar(':',0,77,66);
writechar(48+sec/10,0,78,66);
writechar(48+sec%10,0,79,66);
writestring("Made by AAKASH DEEP MANDHAR ",0,44,66);
running=0;
}
(*prevtimer)();
}

