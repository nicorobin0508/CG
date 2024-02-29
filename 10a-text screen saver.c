Develop a simple text screen saver using graphics functions
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm,x=600;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(x=0;x<250;x++)
{
x %=250;
setcolor(random(16));
circle(random(635),random(70),50);
circle(random(635),random(70),50);
circle(random(635),random(70),50);
circle(random(635),random(70),50);
circle(random(635),random(70),50);
clearviewport();
settextstyle(1,0,5);
setcolor(RED);
outtextxy(50,415-2*x,"*WORLD*");
setcolor(GREEN);
outtextxy(200,415-2*x,"*of*");
setcolor(YELLOW);
settextstyle(3,0,5);
outtextxy(350,415-2*x,"*graphics*");
}
getch();
}
