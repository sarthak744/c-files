#include<stdio.h>
#include<conio.h>
int fun(int x,int n);
int main()
{
int a,b;
clrscr();
printf("enter the number\n");
scanf("%d",&a);
printf("enter the power\n");
scanf("%d",&b);
printf("answer : %d ",fun(a,b));
getch();
}
int fun(int x,int n)
{

if(n==0)
{
return 1;
}
else
{
return x*fun(x,n-1);
}
}