#include<stdio.h>
#include<conio.h>
void main()
{
int front=-1,rear=-1,a[6],b,c,d,e,f,g,h,item;
clrscr();
printf("   circular queue    \n ");
printf("1.)insert\n");
printf("2.)delete\n");
printf("3.)display\n");
printf("4.)exit\n");
do
{
printf(" enter your choice \n");
scanf("%d",&b);
switch(b)
{
case 1:printf(" enter the element to be inserted \n");
scanf("%d",&c);
if(rear==5&&front==0||front==rear+1)
{
printf(" overflow \n");
}
else if(front==-1)
{
front=front+1;
rear=rear+1;
a[rear]=c;
}
else if(rear==5&&front!=0)
{
rear=0;
a[rear]=c;
}
else
{
rear=rear+1;
a[rear]=c;
}

break;
case 2:if(front==-1)
{
printf(" underflow \n");
}
else
{
item=a[front];
front++;
}
break;
case 3:if(front==-1)
{
printf(" circular queue is empty \n");
}
else
{
for(d=front;d=rear;d++)
{
if(rear<front)
{
if(d==5)
{
d=0;
}
}

printf("  %d  ",a[d]);

}
printf("\n");
}
break;
case 4:printf(" exit point \n");
break;
default:printf(" you have entered wrong choice \n");
}
}while(b!=4);
getch();
}