#include<iostream.h>
#include<conio.h>
class w
{
 int a,b;

 public:
	void func(int x,int y)
	 {
	  a=x;
	  b=y;
	 }
	 friend void swap(w &);
	 void display()
	 {
	  cout<<"a: \t"<<a;
	  cout<<"\nb: \t"<<b;
	 }

};
void swap(w &s1)
{
int temp=s1.a;
s1.a=s1.b;
s1.b=temp;
}
void main()
{
  int a,b;
  clrscr();
  cout<<"enter the two values:\n";
  cin>>a>>b;
  w a1;
  a1.func(a,b);
  swap(a1);
  a1.display();
  getch();
}
