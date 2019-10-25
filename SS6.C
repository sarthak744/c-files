#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int a[10],b,c,d,e,f,g,h,j,k,l,m,n,top;

clrscr();
top=-1;
printf("       STACK MENU    \n");
printf("1.)push\n");
printf("2.)pop\n");
printf("3.)display\n");
printf("4.)exit\n");

do
{
printf(" enter your choice \n");
scanf("%d",&b);
switch(b)
{
case 1:
printf(" enter the element to be pushed \n");
scanf("%d",&c);
if(top==10)
{
printf(" overflow!!!!\n");
}
else
{
top=top+1;
a[top]=c;
}
break;
case 2:
if(top==-1)
{
printf(" underflow \n");
}
else
{
e=a[top];
top=top-1;
}
break;
case 3 :
if(top!=-1)
{
printf(" elements in stack \n ");
for(f=top;f>=0;f--)
{
printf("%d\n",a[f]);
}
}
else
{
printf(" stack is empty ");
}
break;
case 4 : printf(" exit point ");
exit(0);
default : printf(" you have entered wrong option \n");
}
}while(b!=4);
getch();
}