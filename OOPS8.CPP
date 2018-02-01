#include<iostream.h>
#include<conio.h>
#include<process.h>

class shape
{
 protected:
	    double x,y;

 public:
	    virtual void display()
	    {
	    }
	    virtual void getdata()
	    {
	    }

};

class triangle:public shape
{
 public:
	  void getdata()
	  {
	   cout<<"\n enter the base and height of triangle:";
	   cin>>x>>y;
	  }

	  void display()
	  {
	   double area;
	   area=0.5*x*y;
	   cout<<"\n area of triangle:"<<area;
	  }
};

class rectangle:public shape
{
 public:
	 void getdata()
	 {
	  cout<<"\n enter the length and breadth of rectangle:";
	  cin>>x>>y;
	 }
	 void display()
	 {
	  double area_r;
	  area_r=x*y;
	  cout<<"\n area of rectangle:"<<area_r;
	 }
};

void main()
{
 clrscr();
 triangle t;
 rectangle r;
 shape * list[2];
 list[0]=&t;
 list[1]=&r;
 int ch;
 while(1)
 {
  cout<<"\n1.triangle \n2.rectangle \n3.exit:";
  cout<<"\n enter the choice:";
  cin>>ch;
  switch(ch)
  {
   case 1:
	  list[0]->getdata();
	  list[0]->display();
	  break;

  case 2:
	 list[1]->getdata();
	 list[1]->display();
	 break;

  case 3: exit(0);

  defaullt: cout<<"\n inavlid choice!!";
	    break;
    }
   }
  }

















