#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int gd = DETECT , gm , i;
clrscr();
initgraph(&gd,&gm,"c:\TC\\BIN");
textcolor(RED);
setbkcolor(BLUE);
for(i=0;i<=500;i++);
{ setcolor(i);
circle(100,100,100+i);
delay(30);
}
getch();
closegraph();
}