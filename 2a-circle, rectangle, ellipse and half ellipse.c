//Divide your screen into four region, draw circle, rectangle, ellipse and half ellipse in each region
//with appropriate message.
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int gdriver=DETECT,gmode;
int xmax,ymax;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
xmax=getmaxx()/2;
ymax=getmaxy()/2;
line(xmax,0,xmax,getmaxy());
line(0,ymax,getmaxx(),ymax);
circle(170,125,100);
outtextxy(150,125,"circle");
rectangle(58,251,304,392);
outtextxy(130,300,"rectangle");
arc(500,150,45,135,100);
outtextxy(470,150,"half ellipse");
ellipse(500,300,0,360,75,25);
outtextxy(470,300,"ellipse");
getch();
closegraph();
}
