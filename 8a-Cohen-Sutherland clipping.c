 Write a program to implement Cohen-Sutherland clipping.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<process.h>
int code1[4],code2[4],r1,r2,r3,r4,x1,x2,y1,y2,i,n;
void draw(int,int,int,int);
void clip(int,int,int,int);
void draw(int a1,int b1,int a2,int b2)
{
x1=a1,y1=b1,x2=a2,y2=b2;
line(x1,y1,x2,y2);
}
void clip(int r1,int r2,int r3,int r4)
{
int cnt=0,ch=0,i,count=0;
float x,y,dx,dy;
float m;
int temp[4];
while(ch<2)
{
dx=x2-x1;
dy=y2-y1;
if(dy==0)
dy++;
if(dx==0)
dx++;
m=dy/dx;
if(x1<r1)
code1[0]=1;
if(x1>r3)
code1[1]=1;
if(y1<r2)
code1[2]=1;
if(y1>r4)
code1[3]=1;
if(x2<r1)
code2[0]=1;
if(x2>r3)
code2[1]=1;
if(y2>r2)
code2[2]=1;
if(y2>r4)
code2[3]=1;
if(cnt<=0)
{
cnt++;
clearviewport();
outtextxy(50,50,"Line Before Clipping");
rectangle(r1,r2,r3,r4);
draw(x1,y1,x2,y2);
getch();
}
for(i=0;i<3;i++)
temp[i]=code1[i]&&code2[i];
for(i=0;i<3;i++)
if(temp[i]!=0)
count++;
if(count!=0)
{
outtextxy(100,440,"Line Cannot Be Clipped");
getch();
exit(0);
}
if(code1[0]==1)
{
y1=y1+(r1-x1)*m;
x1=r1;
}
if(code1[1]==1)
{
y1=y1+((r3-x1)*m);
y1=r3;
}
if(code1[2]==1)
{
x1=x1+((r2-y1)/m);
y1=r2;
}
if(code1[3]==1)
{
x1=x1+(r4-y1)/m;
y1=r4;
}
if(code2[0]==1)
{
y2=y2+((r2-x2)*m);
x2=r1;
}
if(code2[1]==1)
{
y2=y2+((r3-x2)*m);
x2=r3;
}
if(code2[2]==1)
{
x2=x2+((r2-y2)/m);
y2=r2;
}
if(code2[3]==1)
{
x2=x2+((r4-y2)/m);
y2=r4;
}
clearviewport();
for(i=0;i<=3;i++)
{
code1[1]=0;
code2[1]=0;
}
ch++;
}
outtextxy(50,50,"Line After Clipping");
rectangle(r1,r2,r3,r4);
draw(x1,y1,x2,y2);
}
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,r1,r2,r3,r4;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\nEnter the rectangle top left x:\t");
scanf("\n%d",&r1);
printf("\nEnter the rectangle top left y:\t");
scanf("\n%d",&r2);
printf("\nEnter the rectangle bottom right x:\t");
scanf("\n%d",&r3);
printf("\nEnter the rectangle bottom right y:\t");
scanf("\n%d",&r4);
printf("\nEnter the line co-ordinate x1: \t");
scanf("\n%d",&x1);
printf("\nEnter the line co-ordinate y1: \t");
scanf("\n%d",&y1);
printf("\nEnter the line co-ordinate x2: \t");
scanf("\n%d",&x2);
printf("\nEnter the line co-ordinate y2: \t");
scanf("\n%d",&y2);
cleardevice();
rectangle(r1,r2,r3,r4);
draw(x1,y1,x2,y2);
clip(r1,r2,r3,r4);
getch();
}
