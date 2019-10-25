#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int a[10][10], b[10][10], c[10][10],d[10][10],e[10][10],f[10][10],g[10][10],h,i,j,k,l,sum[10][10],m,n,o,p;
clrscr();
printf(" enter first matrix \n ");
for(i=1;i<=2;i++)
{
for(j=1;j<=2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf(" enter second matrix \n ");
for(k=1;k<=2;k++)
{
for(l=1;l<=2;l++)
{
scanf("%d",&b[k][l]);
}
}
printf(" 1. addition \n ");
printf(" 2. subtraction \n ");
printf(" 3. trace \n ");
printf(" 4. multiplication \n ");
printf(" enter your choice \n ");
scanf("%d",&h);
switch(h)
{
case 1 : for(m=1;m<=2;m++)
{
for(n=1;n<=2;n++)
{
sum[m][n] = a[m][n] + b[m][n] ;
}
}
printf(" sum of matrices = %d \n ");
for(o=1;o<=2;o++)
{
for(p=1;p<=2;p++)
{
printf("%d\n",sum[o][p]);
}
}
break;
default : printf(" you have entered a wrong choice ");
exit(0);
}
getch();
}