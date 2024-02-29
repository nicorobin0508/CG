i. Circle ii. Rectangle iii. Square iv. Concentric Circles v. Ellipse vi. Line
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int gdriver=DETECT,gmode;
int xcen,ycen,top,left,right,bottom;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
xcen=getmaxx()/2;
ycen=getmaxy()/2;
circle(xcen,ycen,100);
circle(xcen,ycen,150);
left=getmaxx()/2-80;
top=getmaxy()/2-50;
right= getmaxx()/2+80;
bottom=getmaxy()/2+50;
rectangle(left,top,right,bottom);
rectangle(left-50,top-50,right+50,bottom+50);
line(xcen,0,xcen,getmaxy());
ellipse(xcen,ycen,0,360,75,25);
getch();
closegraph();
}
