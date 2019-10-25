#include<stdio.h>
#include<conio.h>
void main()
{
int stack[10];
int top;
int a,b,c,d,e,f;
clrscr();
top=-1;
printf(" enter max size of array \n ");
scanf("%d",&a);
printf(" 1.) push \n ");
printf(" 2.) pop \n ");
printf(" 3.) display \n ");
printf(" 4.) exit \n ");
do
{
  printf(" \n enter the choice \n ");
  scanf("%d",&b);
switch(b)
{
case 1: if(top==a-1)
{
printf(" stack overflow !!!! \n ");
}
else
{ printf(" enter the element to be pushed \n ");
scanf("%d",&c);
top++;
stack[top]=c;
}
break;
case 2: if(top==-1)
{
printf(" underflow!!!!!!\n");
}
else
{

printf(" element to be poppped out is %d ", stack[top]);
e=stack[top];
top--;
}
break;
case 3:
if(top>=0)
{
for(f=top;f>=0;f--)
{
printf("%d\n",stack[f]);
}
}
else
{
printf(" stack is empty \n");
}
break;
case 4: printf( " exit \n");
break;
default:printf(" entered wrong choice \n");
}
}while(b!=4);
getch();
}