#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char c,d;
for(a=65;a<=68;a++)
{ c=a;
for(b=65;b<=68;b++)
{  d=b;
while(a>=b)
{
if(a==b)
{
printf( " %c " , c);
}
else
{
printf(" %c ",d);
}
break;
}
}
}
getch();
}
