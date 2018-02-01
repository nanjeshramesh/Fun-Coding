#include<iostream.h>
#include<conio.h>
#include<process.h>

class student
{
 protected:
	  int sem;
	  char name[30];
	  char usn[30];
 public:
	void read()
	{
	 cout<<"\n enter name:";
	 cin>>name;
	 cout<<"\n enter usn:";
	 cin>>usn;
	 cout<<"\n enter sem:";
	 cin>>sem;
	}
};

class internal : public student
{
  protected:
	       int m1,m2,m3;
  public:
	 void int_marks()
	 {
	  read();
	  cout<<"\n enter internal marks:";
	  cout<<"\n enter marks of sub-1:";
	  cin>>m1;
	  cout<<"\n enter marks of sub-2:";
	  cin>>m2;
	  cout<<"\n enter marks of sub-3:";
	  cin>>m3;
	 }
};


 class external : public student
 {
     protected:

	    int m4,m5,m6;

 public:

	 void ext_marks()
	 {
	  cout<<"\n enter the external marks:";
	  cout<<"\n enter marks of sub-1:";
	  cin>>m4;
	  cout<<"\n enter marks of sub-2:";
	  cin>>m5;
	  cout<<"\n enter marks of sub-3:";
	  cin>>m6;
	 }
};

class result : public internal, public external
{
 int tot;
  public:
	  void total()
	  {
	   int_marks();
	   ext_marks();
	   tot=m1+m2+m3+m4+m5+m6;
	   cout<<"\n total marks:"<<tot;
      }
};

void main()
{
 result r[10];
 int n,i;
 clrscr();
 cout<<"\n enter the no. of students:";
 cin>>n;
 cout<<"\n details:";
 for(i=0;i<n;i++)
 {
  cout<<"\n enter the data of "<<i+1<<"student \n";
  r[i].total();
 }
 getch();
}




