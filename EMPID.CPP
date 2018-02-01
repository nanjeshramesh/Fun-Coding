#include<iostream.h>
#include<conio.h>
#include<process.h>
class employee
{
 private:
	  int emp_no;
	  char emp_name[10];
	  float basic_salary,da,it,net_salary,gross_salary;

public:
	 void read_value();
	 void call_value();
	 void print_value();

};

void employee::read_value()
{
 cout<<"\n enter employee name: \t";
 cin>>emp_name;

 cout<<"\n enter employee number: \t";
 cin>>emp_no;

 cout<<"\n enter employee's basic salary: \t";
 cin>>basic_salary;

 return;
}

void employee::call_value()
{
  da=(52/100)*basic_salary;
  gross_salary=basic_salary+da;
  it=(30/100)*gross_salary;
  net_salary=gross_salary-it;
}

void employee::print_value()
{
 cout<<" employee-name:"<<emp_name;
 cout<<" employee-number:"<<emp_no;
 cout<<" basic salary:"<<basic_salary;
 cout<<" da:"<<da;
 cout<<" it:"<<it;
 cout<<" net-salary:"<<net_salary;

return;
}

void main()
{
 int i,n;
 employee e[100];
 clrscr();
 cout<<"enter the number of employees: \n";
 cin>>n;

 for(i=1;i<=n;i++)
 {
  e[i].read_value();
  e[i].call_value();
 }

 cout<<"employee details are: \n";


 for(i=1;i<=n;i++)
 {
  e[i].print_value();
 }
 getch();
}












