#include<iostream.h>
#include<conio.h>
class sample
{
 int x,y;
 public:
	void setvalue(int a,int b)
	{  x=a;
	   y=b;
	}
	void display()
	{
	 cout<<x<<" ";
	 cout<<y<<" ";
	}
};
void main()
{
 sample s1;
 clrscr();
 s1.setvalue(3,2);
 s1.display();
 getch();
}
