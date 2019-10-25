#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
int data;
struct node*link;
}*start,*front,*rear,*p;
void createemptyqueue()
{
start = '\0';
}
void insert(int data1)
{
struct node*new1=(struct node*)malloc(sizeof(struct node));
if(start=='\0')
{
new1->data=data1;
start=new1;
rear=start;
front=start;
}
else if(new1=='\0')
{
printf("overflow!!!!!!\n");
}
else
{ new1->data=data1;
rear->link=new1;
rear=new1;
}
}
void del()
{
int item;
p=front;
if(start=='\0')
{
printf("underflow!!!!\n");
}
else if(front==rear)
{
  item=front->data;
  start='\0';
  }
  else
  {
item=p->data;
start=p->link;
front=start;
p->link='\0';
}
}
void display()
{
p=front;
if(=='\0')
{
printf("empty\n");
}
else
{
while(p!=rear)
{
printf("%d<-",p->data);
p=p->link;
}
printf("%d",p->data);
printf("\n");
}
}
void main()
{
int data1,a;
clrscr();
printf("queue menu\n");
printf("1.)insert\n");
printf("2.)delete\n");
printf("3.)display\n");
printf("4.)exit\n");
do
{
printf("enter your choice\n");
scanf("%d",&a);
switch(a)
{
case 1:printf("enter the data\n");
scanf("%d",&data1);
insert(data1);
break;
case 2:del();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:printf("wrong choice!!!!!\n");
}
}while(a!=4);
getch();
}