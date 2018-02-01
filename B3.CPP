#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<process.h>
int func(int a);
void main()
{ int x;
  clrscr();
  cout<<"enter the number";
  cin>>x;
  x=func(x);
  getch();
}
int func(int a)
{
  a=-a;
 cout<<"the result is"<<a;

  return -a;
}