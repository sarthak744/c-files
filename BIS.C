#include<stdio.h>
#include<conio.h>
double func(double x)
{
return x*x*x + 3*x*x + 2*x ;
}
double e = 0.01;
double mid;
void bisec(double a,double b)
{
while((b-a) > 0.01)
{
mid=(a+b)/2;
if(func(mid)==0.0)
{
printf("root of the equation is : %d \n ",mid);
}
else if(func(mid)*func(a)<0)
{
b=mid;
printf("the root is : %d \n",mid);
}
else if(func(mid)*func(b)<0)
{
a=mid;
printf("the root is : %d \n",mid);
}
}
}
int main()
{
double a = 1;
double b = 2;
clrscr();
printf("the given equation is : X^3 + 3*X^2 +2*X - 10 \n");
printf("interval in which root lies is : (1,2) \n");
bisec(a,b);
getch();
}
