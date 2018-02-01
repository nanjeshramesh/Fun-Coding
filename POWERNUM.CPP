#include<iostream.h>
#include<conio.h>
void main()
{
 int x,i,a=0;
 clrscr();
 cout<<"enter the number";
 cin>>x;
 for(i=1;i<=x/2;i++)
 { if(x%i==0)
    {  a=a+i;
    }
 }
 if(a==x)
 {
  cout<<"it is a perfect number"<<a;
 }
 else
 {
 cout<<"it isn't a perfect number";
 }
 getch();
}
