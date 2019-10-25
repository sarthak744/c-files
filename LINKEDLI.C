#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int data;
node*link;
}*start;
void createmptylist()
{
start='\0';
}
void insertatfront(int a)
{
struct node*new1;
new1=(struct node*)malloc(sizeof(struct node));
new1->data=a;
if(new1=='\0')
{
printf(" overflow!!!!\n");
}
else
{
new1->link=start;
start=new1;
}
}
void traverselist()
{
node*p;
p=start;
while(p->link!='\0')
{  printf("%d->",p->data);
p=p->link;
}
}
void main()
{
int b,i=0;
clrscr();
do
{
printf(" enter the data of the node \n");
scanf("%d",&b);
insertatfront(b);
i++;
}while(i!=4);
printf("linked list is\n");
traverselist();
getch();
}