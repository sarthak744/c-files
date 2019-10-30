#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
struct node{
int index;
char data[100];
struct node*link;
}*start,*top,*p,*temp;
void createemptystack()
{
start='\0';
}
void insert(int c,char data1[100])
{

struct node*new1=(struct node*)malloc(sizeof(struct node));
new1->index=c;
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
void del(int i)
{ int z=1;
int a = 1;
char item[100];
p=start;
if(i==1&&start!=top)
{
strcpy(item,p->data);
start=p->link;
temp=start;
p->link='\0';
free(p);
while(temp!=top)
{
temp->index = temp->index-1;
temp=temp->link;
}
temp->index = temp->index-1;
}
else if(start==top)
{
strcpy(item,top->data);
start='\0';
}
else if(i!=1)
{
while(a<i)
{
temp=p;
p=p->link;
a++;
}
strcpy(item,p->data);
temp->link=p->link;
free(p);
temp=start;
while(z<i)
{
temp=temp->link;
z++;
}
while(temp!=top&&temp!='\0')
{
temp->index=temp->index-1;
}
temp->index=temp->index-1;
}
}
void display(int b,int d)
{ int x=1;
p=start;
if(start=='\0')
{
printf("\n");
printf("\t\t\t\tEmpty\n");
}
else if(d==1)
{
printf("\t\t\t\t%d.)%s",p->index,p->data);
}
else if(b==0||d==0)
{
while(p!=top)
{

printf("\t\t\t\t%d.)%s",p->index,p->data);
printf("\n");
p=p->link;
}
printf("\t\t\t\t%d.)%s",p->index,p->data);
}
else
{
if(b==1&&start!='\0')
{
while(p!=top)
{

printf("\t\t\t\t%d.)%s",p->index,p->data);
printf("\n");
p=p->link;
}
printf("\t\t\t\t%d.)%s",p->index,p->data);
}
else if(b==d)
{
while(p!=top)
{

printf("\t\t\t\t%d.)%s",p->index,p->data);
printf("\n");
p=p->link;
}
printf("\t\t\t\t%d.)%s",p->index,p->data);
}
else if(b!=d)
{
while(x<d)
{
printf("\t\t\t\t%d.)%s",p->index,p->data);
p=p->link;
printf("\n");
x++;

}
printf("\t\t\t\t%d.)%s",p->index,p->data);
printf("\n");
}
}
}
void main()
{
int i1=0,a,count=0;
struct node*t='\0';

clrscr();
printf("\t\t\t\tTo Do List\n");
printf("********************************************************************************");
printf("1.)Add\t\t\t2.)Delete\t\t\t3.)Exit\n");
do
{
display(i1,count);
printf("\n\n");
printf("\t\t\t\tEnter Your Choice\n");
printf("\n\n");
scanf("%d",&a);
switch(a)
{
case 1:printf("\t\t\t\tEnter The Data\n");
fflush(stdin);
gets(t->data);
count++;
insert(count,t->data);
break;
case 2:printf("\t\t\t\tEnter The Index NO. Of The Task To Be Deleted\n");
scanf("%d",&i1);
del(i1);
count--;
break;
case 3:exit(0);
break;
default:printf("wrong choice!!!!!\n");
}
}while(a!=3);
getch();
}