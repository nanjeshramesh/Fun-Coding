#include<iostream.h>
#include<conio.h>

class student
{
 int m1,m2,m3;
 char usn[10],name[10];

 public:
	    void input()
	    {
	     cout<<"\t\t enter the name: \t";
	     cin>>name;
	     cout<<"\t\t enter the usn number: \t";
	     cin>>usn;
	     cout<<"\t\t enter the marks of 3 subjects: \t";
	     cin>>m1>>m2>>m3;
	    }

	    void output()
	    {
	     int avg;
	     cout<<"\t\t"<<name<<"\t"<<usn<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<"\t\t";

	     if(m1<m2 && m1<m3)
	     {
	      avg=(m2+m3)/2;
	     }
	     else if(m2<m1 && m2<m3)
	     {
	      avg=(m1+m3)/2;
	     }
	     else
	     avg=(m1+m2)/2;

	     cout<<avg<<"\n";
	   }

	};

  void main()
  {
    student s[50];
    int i,n;
    clrscr();
    cout<<"\n enter the no. of students:";
    cin>>n;

    cout<<"\n student innformation";
    for(i=0;i<n;i++)
    {
     cout<<"\n student"<<i+1;

     s[i].input();
    }

    cout<<"\tname\t\tusn\t\tm1\t\tm2\t\tm3\t\taverage\n";
    for(i=0;i<n;i++)
    s[i].output();
    getch();
   }

















