	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int a,b;
	char ch;
	clrscr();
	printf(" enter any number ");
	scanf("%d",&a);
	while(ch=='y')
	{b=a*a;
	printf("square of number = %d",b);
	}
	printf("want to find out square of another number ");
	scanf("%c",&ch);

	getch();
	}