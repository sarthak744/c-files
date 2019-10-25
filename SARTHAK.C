#include<stdio.h>
#include<conio.h>
void main()
{
int a, c,f,h ,d , e,m,g; clrscr();
printf("enter any number");
scanf("%d",&a);
g=a/100;
c= a%100;
d=c;
e = d/10;
h=d%10;
f=e;
m = g+f+h;
printf(" sum of digits =  %d " , m);
getch();
}