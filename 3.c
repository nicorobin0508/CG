#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gdriver = DETECT, gmode;
    int xmax, ymax, side,x_radius,y_radius;

    initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
    xmax = getmaxx();
    ymax = getmaxy();
    line(xmax/2,0,xmax/2,ymax);
    line(0,ymax/2,xmax,ymax/2);
    side = 100;
    x_radius=200;
    y_radius=100;
    rectangle(xmax / 2 - side / 2, ymax / 2 - side / 2, xmax / 2 + side / 2, ymax / 2 + side / 2);
    circle(xmax/2,ymax/2,side);
    ellipse(xmax/2,ymax/2,0,360,x_radius,y_radius);
    getch();
    closegraph();
}

