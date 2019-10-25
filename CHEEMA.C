#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d=0,e,f=0,n,g,h;
clrscr();
printf(" enter n = " );
scanf("%d",&n);
printf("enter any  number  = ");
scanf("%d",&a);
b = a/((10)^(n-1));
c = a%((10)^(n-1));
for(e=n-2;e>=1;e--)
{
d = d+ c%((10)^(e));
f = f+ c/((10)^(e));
};
g = b+d+f;
printf(" sum of digits = %d " , g );
getch();
}