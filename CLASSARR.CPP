#include<iostream.h>
#include<conio.h>
class largest
{  int n,a[10],big;

 public:
	void func()
	{ int i;
	 cout<<"enter the array size : \n";
	 cin>>n;
	 cout<<"enter the array elements : \n";
	 for(i=0;i<n;i++)
	 {
	  cin>>a[i];
	 }
	}
	void greatest()
	{ int i;
	 big=a[0];
	 for(i=0;i<n;i++)
	 {
	  if(big<a[i])
	  cout<<a[i];
	 }
	}
	void display()
	{      int i;
	 for(i=0;i<n;i++)
	 {
	  cout<<a[i];
	 }
	}
      };
      void main()
      {
	 largest a;
	 clrscr();
	 a.func();
	 a.greatest();
	 a.display();
	 getch();
       }
