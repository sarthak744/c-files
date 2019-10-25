#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c;
float d,e;
clrscr();
printf(" enter the coefficient of x^2 = ");
scanf("%d",&a);
printf(" enter the coefficient of x = ");
scanf("%d",&b);
printf(" enter the value of constant = ");
scanf("%d",&c);
d =( -b+sqrt(b*b-4*a*c))/2*a;
e = ((-b-sqrt(b*b-4*a*c))/2*a;
if((b*b-4*a*c)==0)
{ printf("the roots are real and equal : %f",d," and %f ",e);
}
else if((b*b-4*a*c)>0)
{
printf("the roots are real and unique : %f",d," and %f",e);
}
else if((b*b-4*a*c)<0)
{
printf("the roots are imaginary : %fi",d," and %fi ",e);
}
getch();
}

