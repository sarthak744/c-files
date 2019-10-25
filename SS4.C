#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd = DETECT,gm;
clrscr();
initgraph(&gd,&gm,"");
arc(250,250,155,300,100);
getch();
closegraph();
}