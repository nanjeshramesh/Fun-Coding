#include<iostream.h>
#include<conio.h>
void main()
{
 int n,i,j,temp,a[30];
 clrscr();
 cout<<"enter the array size :";
 cin>>n;
 cout<<"enter the array elements :";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 for(i=0;i<n-1;i+=2)
 {
  temp=a[i];
  a[i]=a[i+1];
  a[i+1]=temp;
 }
 cout<<"the resultant array is :";
 for(i=0;i<n;i++)
 {
   cout<<a[i]<<" ";
 }
 getch();
}