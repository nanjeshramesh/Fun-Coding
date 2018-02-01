#include<iostream.h>
#include<conio.h>
#include<process.h>
class employee
{
 char ename[10];
 char eno[10];
 float da,it,netsal,basic;

  public:
	     void getdata();
	     void calculate();
	     void display();
};

void employee::getdata()
{
 cout<<"\n enter employee no.  employee name   basic:\t";
 cin>>eno>>ename>>basic;
}

void employee::calculate()
{
 da=0.51*basic;
 it=0.2*(basic+da);
 netsal=(basic+da)-it;
}

void employee::display()
{
 cout<<"\n the employee details:";
 cout<<"\n employee name:"<<ename;
 cout<<"\n employee number:"<<eno;
 cout<<"\n DA:"<<da;
 cout<<"\n IT:"<<it;
 cout<<"\n netsalary:"<<netsal;
 cout<<"\n";
}

void main()
{
 employee e[30];
 int i,n;
 clrscr();
 cout<<"enter the no. of employees:";
 cin>>n;
 for(i=0;i<n;i++)
 {
  e[i].getdata();
  e[i].calculate();
 }
 for(i=0;i<n;i++)
 e[i].display();
 getch();
}













