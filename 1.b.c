#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int gdriver=DETECT,gmode;
int xcen,ycen;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
xcen=getmaxx()/2;
ycen=getmaxy()/2;
line(xcen,0,xcen,getmaxy());
line(0,ycen,getmaxx(),ycen);
getch();
closegraph();
}
