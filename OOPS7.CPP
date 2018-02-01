#include<iostream.h>
#include<conio.h>
#include<process.h>
#define max 5

class stack
{
 int s[max],top;

 public:
	  stack()
	  {
	   top=-1;
	  }

	  stack operator +(int);
	  stack operator -();
	  friend ostream& operator <<(ostream &,stack &);

};

stack stack::operator +(int x)
{
 if(top==max-1)
 {
  cout<<"\n stack underflow:";
 }
 else
 {
  s[++top]=x;
 }

 return *this;
}

stack stack::operator -()
{
 if(top==-1)
 {
  cout<<"\n stack underflow";
 }
 else
 {
  cout<<"\n item deleted is:"<<s[top--];
 }
 return *this;
}

ostream & operator <<(ostream &out,stack &s1)
{
 if(s1.top==-1)
 {
  cout<<"\n stack empty";
  }
  else
  {
   for(int i=s1.top;i>=0;i--)
   {
    out<<s1.s[i]<<" ";
   }
  }
  return out;
}
void main()
{
 stack s1;
 int ch,ele;
 clrscr();
 while(1)
 {
  cout<<"\n1.push \n2.pop \n3.display \n4.exit";
  cout<<"\n enter your choice:";
  cin>>ch;

  switch(ch)
  {
    case 1: cout<<"\n enter the item to insert:";
	    cin>>ele;
	    s1=s1+ele;
	    break;

   case 2: s1=-s1;
	   break;

   case 3: cout<<s1;

	   break;

   case 4: exit(0);

   default: cout<<"\n wrong choice";
	    break;
    }
   }
  getch();
 }



























