#include<iostream.h>
#include<conio.h>
#include<process.h>

class time
{
 int hrs,mins,secs;

 public:
	 void getdata(int,int,int);
	 friend time add(int,time);
	 friend time add(time,time);
	 friend ostream& operator << (ostream&,time&);

};

void time :: getdata(int n1,int n2,int n3)
{
 hrs=n1;
 mins=n2;
 secs=n3;
}

ostream& operator <<(ostream& print,time &t)
{
 print<<t.hrs<<t.mins<<t.secs;
return print;
}

time add(int n,time t2)
{
 time result;
 result.secs=n+t2.secs;
 result.mins=t2.mins;
 result.hrs=t2.hrs;
 return result;
}

time add(time t1,time t2)
{
 time result;
 result.secs=t1.secs+t2.secs;
 result.mins=t1.secs+t2.secs;
 result.hrs=t1.hrs+t2.hrs;
 return result;
}

void main()
{
 int n1,n2,n3,a;
 time c1,c2,c3,c4;
 clrscr();
 cout<<"\n enter the time t1:";
 cin>>n1>>n2>>n3;
 c1.getdata(n1,n2,n3);

 cout<<"\n enter the time t2:";
 cin>>n1>>n2>>n3;
 c2.getdata(n1,n2,n3);

 cout<<"\n enter the extra seconds to be added:";
 cin>>a;

 c3=add(c1,c2);
 c4=add(a,c3);

 cout<<"\n total time:"<<c3;
 cout<<"\n total time after adding extra seconds:"<<c4;
 getch();
}






























