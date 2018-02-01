#include<iostream.h>
#include<conio.h>
template<class t>
class vector
{
 t a[10],value;
 int scalar,index,n;

 public:
	   vector(int x)
	   {
	    n=x;
	   }
	   void create()
	   {
	    cout<<"\n enter elements:";
	    for(int i=1;i<=n;i++)
	    cin>>a[i];
	   }
	   void display()
	   {
	    cout<<"\n( ";
	    for(int i=1;i<=n;i++)
	    cout<<a[i]<<", ";
	    cout<<a[i]<<" )\n";
	   }
	   void modify()
	   {
	    cout<<"\n enter index to be changed:";
	    cin>>index;
	    cout<<"\n enter the value to be inserted:";
	    cin>>value;
	    a[index]=value;
	   }
	   void multiply()
	   {
	    cout<<"\n enter scalar to multiply:";
	    cin>>scalar;
	    for(int i=1;i<=n;i++)
	     a[i]=a[i]*scalar;
	   }
};

void main()
{
 int n;
 clrscr();
 cout<<"\n enter the value of n:";
 cin>>n;
 vector<int>iv(n);
 vector<float>fv(n);
 cout<<"\n integer type";
 iv.create();
 iv.display();
 iv.modify();
 iv.display();
 iv.multiply();
 iv.display();
 getch();
 clrscr();
 cout<<"\n float type";
 fv.create();
 fv.display();
 fv.modify();
 fv.display();
 fv.multiply();
 fv.display();
 getch();
}


























