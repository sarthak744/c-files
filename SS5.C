#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int a[10],b,c,d,e,f,g,count = 0,count1 = 0,i,j,k,l,m,n,o,item;
clrscr();
printf("1.) insertion \n");
printf("2.) deletion \n");
printf("3.) display \n");
printf("4.) exit \n");
printf(" enter the max size of array \n");
scanf("%d",&b);
printf(" enter the array \n");
for(e=1;e<=b;e++)
{
scanf("%d",&a[e]);
}
do
{
printf(" enter the choice \n");
scanf("%d",&c);
switch(c)
{
 case 1: printf(" enter the element you want to insert in the array \n");
 scanf("%d",&d);
 printf(" enter the position at which you want to insert the element \n");
 scanf("%d",&f);
 b=b+1;
 g=b;
 while(g>=f)
 {
 if(g==f)
 {
 a[g]=d;
 }
 else if(g>f)
 {
 a[g]=a[g-1];
 }
 g--;
 }

 break;
 case 2: printf(" enter the element you want to delete \n");
 scanf("%d",&i);
 for(j=1;j<=b-count1;j++)
 {
 if(a[j]==i)
 {
 item=a[j];
 a[j]=a[j+1];
 m=j;
 }
 else if(j>m)
 {
   a[j]=a[j+1];
   }
   }
   count1++;
   break;
   case 3:printf(" array is \n");
   for(k=1;k<=b-count1;k++)
   {
   printf("%d\n",a[k]);
   }
   break;
   case 4: printf(" exit point ");
   exit(0);
   break;
   default : printf(" you have entered wrong choice ");
   }
   }while(c!=4);
   getch();
   }