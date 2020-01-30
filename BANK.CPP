#include<iostream.h>
#include<conio.h>
#include<process.h>
class bank
{
public:
char name[10];
int acc;
int bal;


void assign()
{
bal = 1000;
}
void read()
{
cout<<"enter your name : "<<endl;
cin>>name;
cout<<"enter your account number : "<<endl;
cin>>acc;
}
void dep()
{
int dep;
cout<<"enter the amount to be deposited : "<<endl;
cin>>dep;
bal = bal + dep;
}
void with()
{
int with;
cout<<"enter the amount to be withdrawn : "<<endl;
cin>>with;
bal = bal - with;
}
void dis()
{
cout<<" name : "<<name<<endl;
cout<<" acc no :"<<acc<<endl;
cout<<" balance : "<<bal<<endl;
}
};
void main()
{
int a;
bank b;
clrscr();
b.read();
b.assign();
cout<<"1.) deposit " <<endl;
cout<<"2.) withdraw "<<endl;
cout<<"3.) check balace "<<endl;
cout<<"4.) exit "<<endl;
do
{
cout<<"enter your choice : "<<endl;
cin>>a;
switch(a)
{
case 1 : b.dep();
break;
case 2 : b.with();
break;
case 3 : b.dis();
break;
case 4 : exit(0);
break;
default : cout<<" wrong choice!!!!! "<<endl;
}
}while(a!=4);
getch();
}

