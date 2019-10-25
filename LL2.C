#include<stdio.h>
#include<conio.h>
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
struct node*new1;
new1=(struct node*)malloc(sizeof(struct node));
if(new1=='\0')
{
printf("overflow");
}
else if(start=='\0')
{
  new1->data = data1;
  new1->link = '\0';
  start=new1;
  }
  else
  {
  new1->data=data1;
  new1->link=start;
  start=new1;
  }
  }
  void insertatend(int data2)
  {
  struct node*new2;
  new2=(struct node*)malloc(sizeof(struct node));
  if(new2=='\0')
  {
  printf("overflow");
  }
  else if(start=='\0')
  {
  new2->data=data2;
  new2->link='\0';
  }
  else
  {
  p=start;
  while(p->link!='\0')
  {
  p=p->link;
  }
  new2->data=data2;
  p->link=new2;
  new2->link='\0';
  }
  }
  void insertatanypos(int data3,int pos)
  { int i =1;

  struct node*new3;
  new3 = (struct node*)malloc(sizeof(struct node));

  temp=start;
  p=start;

  if(start=='\0')
  {
  new3->data=data3;
  new3->link='\0';
  start=new3;
  }
  else if(new3=='\0')
  {
  printf("overflow");
  }
  else
  {

  while(i<pos)
  {
   temp=p;
   p=p->link;
   i++;
   }
   new3->data=data3;
   temp->link=new3;
   new3->link=p;
   }
   }
   void delatfront()
   { int item;
   p=start;
   if(start=='\0')
   {
   printf("underflow!!!");
   }
   else if(start->link=='\0')
   {
      item=p->data;
      free(p);
      }
      else
      {
      item=p->data;
      start=start->link;
      p->link='\0';
      free(p);
      }
      }
    void delatend()
    {int item;
    p=start;
    temp=start;
    if(start=='\0')
    {
    printf("underflow!!!");
    }
    else
    {
    while(p->link!='\0')
    {
    temp=p;
    p=p->link;
    }
    item=p->data;
    temp->link='\0';
    free(p);
    }
    }
    void delatanypos()
    { int item;
    int pos1;
    int i =1;
    temp=start;
    p=start;
    if(start=='\0')
    {
    printf("underflow");
    }
    else
    {   printf("enter pos:\n");
    scanf("%d",&pos1);
    while(i<pos1)
    {
    temp=p;
    p=p->link;
    i++;
    }
    item=p->data;
    temp->link=p->link;
    p->link='\0';
    free(p);
    }
    }
    void display()
    {
    p=start;
    while(p!='\0')
    {
    printf("%d->",p->data);
    p=p->link;
    }
    printf("\n");
    }
    void main()
    {
    int a,data1,data2,data3, pos;
    clrscr();
    printf(" linked list menu: \n");
    printf("1.)insert at front\n");
    printf("2.)insert at end\n");
    printf("3.)insert at any pos\n");
    printf("4.)del at front\n");
    printf("5.)del at any pos\n");
    printf("6.)del at end\n");
    printf("7.)display\n");
    printf("8.)exit\n");
    do
    {
    printf("enter your choice\n");
    scanf("%d",&a);
    switch(a)
    {
     case 1: printf("enter the data of node\n");
     scanf("%d",&data1);
     insertatfront(data1);
     break;
     case 2:printf("enter the data of the node\n");
     scanf("%d",&data2);
     insertatend(data2);
     break;
     case 3:printf("enter the data of the node\n");
     scanf("%d",&data3);
     printf("enter pos:\n");
     scanf("%d",&pos);
     insertatanypos(data3,pos);
     break;
     case 4:delatfront();
     break;
     case 5:delatanypos();
     break;
     case 6:delatend();
     break;
     case 7:display();
     break;
     case 8:printf("exit point");
     break;
     default: printf("wrong choice!!!\n");
     }
     }while(a!=8);
     getch();
     }



