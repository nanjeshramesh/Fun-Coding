#include<iostream.h>
#include<conio.h>
void main()
{
 int n,i,a[10],x=0;
 clrscr();
 cout<<"enter the size of an array";
 cin>>n;
 cout<<"enter the array elements";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 for(i=0;i<n;i++)
 {
   x=x+a[i];
 }
 cout<<"the sum of array elements is "<<x;
 getch();
}