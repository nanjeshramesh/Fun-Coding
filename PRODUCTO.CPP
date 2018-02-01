#include<iostream.h>
#include<conio.h>
void main()
{
 int x=1,n,i,a[20];
 clrscr();
 cout<<"enter the size of a array";
 cin>>n;
 cout<<"enter the elements of an array";
  for(i=0;i<n;i++)
  {
     cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
     x=x*a[i];
  }
  cout<<"the product of array elements is"<<x;
  getch();
}
