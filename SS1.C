#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int a[10],b,c,d,e,f,g,h,count=0,beg=1,end=5,count1=0,count2=0;
clrscr();
printf(" 1,) linear search \n ");
printf(" 2.) binary search \n ");
printf(" enter your choice \n ");
scanf("%d",&b);
switch(b)
{
case 1: printf(" enter the array \n ");
for(c=1;c<=5;c++)
{
scanf("%d",&a[c]);
}
printf(" enter the element you want to search the array for \n ");
scanf("%d",&d);
for(e=1;e<=5;e++)
{
if(a[e]==d)
{
printf(" element found at %d ",e);
count++;
break;
}
else
{
continue;

}
}
if(count==0)
{
printf(" element not found \n ");
}
break;
case 2: printf("enter the array in ascending order \n ");
for(f=1;f<=5;f++)
{
scanf("%d",&a[f]);
}
printf(" enter the element you to search the array for \n ");
scanf("%d",&g);
for(int i =beg;i<=end;i++)
{
h=(beg+end)/2;
if(a[h]==g)
{
printf(" element lies at the middle of the given array \n");
count1++;
break;
}
else if(a[h]<g)
{
beg=h+1;
end=5;
}
else if(a[h]>g)
{
beg=1;
end=h-1;
}
else
{
if(a[i]==g)
{
printf(" element found at %d \n ",i);
count2++;
break;
}
}
if(count1==0&&count2==0)
{
printf(" element not found \n ");
}
break;
default : printf(" you have entered wrong choice \n ");
exit(0);
}
getch();
}