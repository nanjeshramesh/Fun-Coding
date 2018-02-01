#include<iostream.h>
#include<math.h>
#include<process.h>
#include<conio.h>
void tax(int amount,float tax_per=15);
void main()
{
 int amount;
 float tax_per;
 clrscr();
 cout<<"enter the amount: ";
 cin>>amount;
 cout<<"enter the tax percentage: ";
 cin>>tax_per;
 tax(amount,tax_per);
 getch();
}
void tax(int amount,float tax_per)
{ float tax;
  //cin>>tax;
  tax=(amount*tax_per)/100;
  cout<<"tax is: "<<tax;
}

