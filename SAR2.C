#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
int data;
struct node*next;
struct node*prev;
}*start,*p,*temp;
void createemptylist()
{
start='\0';
}
void insertatfront(int data1)
{
struct node*new1=(struct node*)malloc(sizeof(struct node));

if(start=='\0')
{
new1->data=data1;
new1->next='\0';
new1->prev='\0';
start=new1;
}
else if(new1=='\0')
{
printf("overflow\n");
}
else
{
new1->data=data1;
new1->next=start;
new1->prev='\0';
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
printf("underfow\n");
}
else if(start->next=='\0')
{
item=start->data;
start='\0';
}

else
{
while(p->next!='\0')
{
temp=p;
p=p->next;
}
temp->next='\0';
item=p->data;
p->prev='\0';
free(p);
}
}
void display()
{
p=start;
if(start!='\0')
{
while(p!='\0')
{
printf("%d->",p->data);
p=p->next;
}
printf("\n");
}
else
{
printf("empty\n");
}
}
void main()
{
int data1,a;
clrscr();
printf(" doubly linked list menu\n");
printf("1.)insert at front\n");
printf("2.)del at last\n");
printf("3.)display\n");
printf("4.)exit\n");
do
{
printf("enter your choice\n");
scanf("%d",&a);
switch(a)
{
case 1: printf("enter the employee id: \n");
scanf("%d",&data1);
insertatfront(data1);
break;
case 2:delatlast();
break;
case 3:display();
break;
case 4:printf("exit point \n");
break;
default: printf("wrong choice\n");
}
}while(a!=4);
getch();
}
