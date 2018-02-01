#include<iostream.h>
#include<conio.h>
void main()
{
 int a[30],i,n;
 clrscr();
 cout<<"enter the array size :";
 cin>>n;
 cout<<"enter the elements of the array";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 cout<<"the reverse order is :";
 for(i=n-1;i>=0;i--)
 {
  cout<<a[i]<<" ";
  }
 getch();

 }