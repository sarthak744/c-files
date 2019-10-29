#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>

struct node{
char data[100];
struct node*link;
}*start,*top,*p;
void createemptystack()
{
start='\0';
}
void insert(char data1[100])
{
struct node*new1=(struct node*)malloc(sizeof(struct node));
if(start=='\0')
{
strcpy(new1->data,data1);
start=new1;
top=start;
}
else if(new1=='\0')
{
printf("overflow!!!!!!\n");
}
else
{ strcpy(new1->data,data1);
top->link=new1;
top=top->link;
}
}
void del()
{
char item[100];
p=start;
if(start=='\0')
{
printf("underflow!!!!\n");
}
else if(start==top)
{
  strcpy(item,start->data);
  start='\0';
  }
  else
  {
strcpy(item,top->data);
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
printf("                                                     TO DO LIST                           \n");
printf("                                                        empty                             \n");
}
else if(top==start)
{
printf("                                                     TO DO LIST                              \n");
printf("                                                        >  %s                                ",top->data);
printf("\n");
}
else
{
while(p!=top)
{
printf("                                                     UPDATED TO DO LIST                      \n");
printf("                                                        >  %s                                 ",p->data);
printf("\n");
p=p->link;
}
printf("                                                        >  %s                                 ",p->data);

printf("\n");
}

}
void main()
{
int a;
struct node*t='\0';
clrscr();
printf("TO DO LIST MENU\n");
printf("1.)add      2.)delete    3.)exit\n");
do
{
printf("enter your choice\n");
scanf("%d",&a);
switch(a)
{
case 1:printf("enter the data\n");
fflush(stdin);
gets(t->data);
insert(t->data);
display();
break;
case 2:del();
display();
break;
case 3:exit(0);
break;
default:printf("wrong choice!!!!!\n");
}
}while(a!=3);
getch();
}
