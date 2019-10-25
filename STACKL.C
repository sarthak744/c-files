#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
int data;
struct node*link;
}*start,*top,*p;
void createemptystack()
{
start='\0';
}
void insert(int data1)
{
struct node*new1=(struct node*)malloc(sizeof(struct node));
if(start=='\0')
{
new1->data=data1;
start=new1;
top=start;
}
else if(new1=='\0')
{
printf("overflow!!!!!!\n");
}
else
{ new1->data=data1;
top->link=new1;
top=top->link;
}
}
void del()
{
int item;
p=start;
if(start=='\0')
{
printf("underflow!!!!\n");
}
else if(start==top)
{
  item=start->data;
  start='\0';
  }
  else
  {
item=top->data;
while(p->link!=top)
{
p=p->link;
}
p->link='\0';
top=p;
}
}
void display()
{
p=start;
if(start=='\0')
{
printf("empty\n");
}
else
{
while(p!=top)
{
printf("%d->",p->data);
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
printf("stack menu\n");
printf("1.)push\n");
printf("2.)pop\n");
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