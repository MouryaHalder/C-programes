#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int a[4], b[4];
float m,xnew,ynew;
float x1=100,y1=100,xh=300,yh=300,xa=10, ya=200,xb=250,yb=150;
int gd= DETECT,gm;
initgraph (&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(5);
line (xa,ya,xb,yb);
setcolor(12);
rectangle(x1,y1,xh,yh);
m=(yb-ya)  /  (xb-xa);
if (xa  < x1)
a[ 3 ] = 1;
else a[3] =0;
if (xa>xh)
a[2] = 1;
else a[2]=0;
//else  a[1]=0;

if (ya  >  yh)
a[0] = 1;
else  a[0] =0;

if (xb <  x1)
b[3] =1;
else b[2]=0;

if (yb<y1)
b[1]=1;
else b[1]=0;
if (yb>yh)
b[0]=1;
else b[0]=0;
printf("Press a key to continue");
getch();
if  (a [0] == 0 && a[1]  ==  0 &&  a[2] == 0 && a[3] == 0 &&b  [0] == 0  &&b[1]  ==  0 && b[2] == 0 && b[3] ==  0)
{
printf("NO clipping");
line (xa,ya,xb,yb);
}
else if (a[0]  && b[0] ||  a[1]  && b[1] || a[3] && b[3])
{
clrscr();
printf("Line discarded");
rectangle (x1,y1,xh,yh);
}
else
{
if (a[3] ==  1 && b[3] ==  0)
{
ynew = (m*(x1-xa)) + ya;
setcolor(12);
rectangle(x1,y1,xh,yh);
setcolor (0);
line  (xa,ya,xb,yb);
setcolor(15);
line(x1,ynew,xb,yb);
setcolor(15);
line(xnew,yh,xb,yb);
}
else if (a[0]  == 1 && b[0] == 0)
{
xnew =xa +  (yh-ya)/m;
setcolor(15);
line(xnew,yh,xb,yb);
}
}
getch();
closegraph();
}