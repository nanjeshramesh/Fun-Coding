#include<iostream.h>
#include<conio.h>
void main()
{
 int a[10],x,n,i;
 clrscr();
 cout<<"enter the array size :";
 cin>>n;
 cout<<"enter the array elements :";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 x=a[0];
 for(i=1;i<n;i++)
 {
  if(x<a[i])
   x=a[i];
 }
 cout<<"the largest of array elements :"<<x;
 getch();
}