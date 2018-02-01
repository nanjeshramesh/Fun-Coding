#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<process.h>
void func(int a,int b=2);
void main()
{
 int a,b;
 clrscr();
 cout<<"enter the number: ";
 cin>>a;
 cout<<"enter the power: ";
 cin>>b;
 func(a,b);
}
void func(int a,int b)
{ int x;
  x=pow(a,b);
  cout<<"the result is: "<<x;
  getch();
}
