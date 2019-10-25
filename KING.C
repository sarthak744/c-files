#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
int data;
struct node*link;
}*start,*temp,*p;
void createlist()
{
start='\0';
}
void insertatfront(int data1)
{
struct node*new1=(struct node*)malloc(sizeof(struct node));
p=start;
if(start=='\0')
{
new1->data=data1;
new1->link=new1;
start=new1;
}
else if(new1=='\0')
{
printf("overflow!!!!!\n");
}
else
{
new1->data=data1;

while(p->link!=start)
{
p=p->link;
}
new1->link=start;
p->link=new1;
start=new1;
}
}
void delatlast()
{
int item;
p=start;
temp=start;
if(start=='\0')
{
printf("underflow!!!\n");
}
else if(start->link==start)
{
item=start->data;
start='\0';
}
else
{
while(p->link!=start)
{
temp=p;
p=p->link;
}
temp->link=start;
item=p->data;
p->link='\0';
free(p);
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
while(p->link!=start)
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
printf(" circular linked list menu \n");
printf("1.)insertion at front \n");
printf("2.)delete from last \n");
printf("3.)display\n");
printf("4.)exit\n");
do
{
printf("enter your choice \n");
scanf("%d",&a);
switch(a)
{
case 1:printf("enter the roll no. of student \n");
scanf("%d",&data1);
insertatfront(data1);
break;
case 2:delatlast();
break;
case 3:display();
break;
case 4:printf("exit\n");
break;
default:printf("wrong choice\n");
}
}while(a!=4);
getch();
}