#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
struct node{
int data;
char carcompanyname[20];
char carname[20];
struct node*left;
struct node*right;
}*root,*p,*curr;
void createemptytree()
{
root='\0';
}

void insert(int data1,char carcompanyname1[20],char carname1[20])
{
struct node*new1=(struct node*)malloc(sizeof(struct node));

new1->data=data1;
strcpy(new1->carcompanyname,carcompanyname1);
strcpy(new1->carname,carname1);
p=root;
if(root=='\0')
{
root=new1;
}

else
{ curr=root;
while(curr!='\0')
{   p=curr;
if(new1->data>curr->data)
{
 curr=curr->right;
}
else
{
curr=curr->left;
}
}
if(new1->data>p->data)
{
p->right=new1;
}
else
{
p->left=new1;
}
}
}

void inorder(struct node*p)
{
if(root=='\0')
{
printf("empty\n");
}
else if(p!='\0')
{
inorder(p->left);
printf("%d",p->data);
printf("%s",p->carcompanyname);
printf("%s",p->carname);
inorder(p->right);
}
printf("\n");
}
void preorder(struct node*p)
{
if(root=='\0')
{
printf("empty\n");
}
else if(p!='\0')
{
printf("car model no: %d",p->data);
printf("%s",p->carcompanyname);
printf("%s",p->carname);
preorder(p->left);
preorder(p->right);
}
printf("\n");
}
void postorder(struct node*p)
{
if(root=='\0')
{
printf("empty\n");
}
else if(p!='\0')
{
postorder(p->left);
postorder(p->right);
printf("%d",p->data);
printf("%s",p->carcompanyname);
printf("%s",p->carname);
}
printf("\n");
}
void main()
{
int a;
struct node*temp  = '\0';
clrscr();
printf("menu\n");
printf("1.)insert\n");
printf("2.)inorder\n");
printf("3.)preorder\n");
printf("4.)postorder\n");
printf("5.)exit\n");
do
{
printf("enter your choice\n");
scanf("%d",&a);
switch(a)
{
case 1:printf("enter the car model no,car company name,car name\n");
scanf("%d",&temp->data);
fflush(stdin);
gets(temp->carcompanyname);
fflush(stdin);
gets(temp->carname);
insert(temp->data,temp->carcompanyname,temp->carname);
break;
case 2:inorder(root);
break;
case 3:preorder(root);
break;
case 4:postorder(root);
break;
case 5:printf("exit point\n");
break;
default:printf("wrong choice\n");
}
}while(a!=5);
getch();
}