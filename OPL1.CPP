#include<iostream.h>
#include<conio.h>
class veg
{
 int x,y,z;
 public:
	void func()
	{
	 cin>>x>>y>>z;
	}

	void display()
	{
	 cout<<"\n"<<x;
	 cout<<"\n"<<y;
	 cout<<"\n"<<z;
	}

	void veg::operator-()
	{
	 x=-x;
	 y=-y;
	 z=-z;
	}

 };

 void main()
 {


  veg v1;
  clrscr();
  v1.func();
  v1.display();
  -v1;
  v1.display();
  getch();
 }