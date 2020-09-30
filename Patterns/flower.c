#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//clrscr();
setcolor(BLACK);

settextstyle(4,HORIZ_DIR,5);

outtextxy(250,100,"Flower");

setcolor(RED);


circle(300,230,100);


arc(455,220,218,150,80);

arc(300,85,313,230,80);

arc(150,235,40,325,80);

arc(295,380,125,50,80);


setcolor(GREEN);

getch();

closegraph();

}