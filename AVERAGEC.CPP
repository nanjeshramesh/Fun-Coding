#include<iostream.h>
#include<conio.h>
#include<math.h>
class avg
{
 int a,b,m;
 public:
	void func()
	{
	 cout<<"enter the first number : \n";
	 cin>>a;
	 cout<<"enter the second number : \n";
	 cin>>b;
	 m=(a+b)/2;
	}
	void display()
	{
	 cout<<"the result is :"<<m;
	}
};
void main()
{
 avg x;
 clrscr();
 x.func();
 x.display();
 getch();
}