Develop the program for DDA Line drawing algorithm.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int xa,ya,xb,yb,gd,gm;
gd=DETECT;
initgraph(&gd,&gm,"c:\\TC\\bgi");
printf("\nEnter the Value of xa:");
scanf("%d",&xa);
printf("\nEnter the Value of ya:");
scanf("%d",&ya);
printf("\nEnter the Value of xb:");
scanf("%d",&xb);
printf("\nEnter the Value of yb:");
scanf("%d",&yb);
DDA(xa,ya,xb,xb);
getch();
}
DDA(xa,ya,xb,yb)
{
int k,dx,dy,steps;
float x,y,xinc,yinc;
dx=abs(xb-xa);
dy=abs(yb-ya);
if(dx>=dy)
steps=dx;
else
steps=dy;
xinc=dx/steps;
yinc=dy/steps;
x=xa;
y=ya;
putpixel(ceil(x),ceil(y),15);
for(k=1;k<=steps;k++)
{
x=x+xinc;
y=y+yinc;
putpixel(x,y,15);
}
return 0;
}
