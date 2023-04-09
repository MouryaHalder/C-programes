#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
bar(100,200,300,400);
getch();
closegraph();
}