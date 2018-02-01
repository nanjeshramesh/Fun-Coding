
#include<iostream.h>
#include<conio.h>
void swap(int a[],int n);
void main()
{
 int n,temp,i,j,a[50];
 clrscr();
 cout<<"enter the array size :";
 cin>>n;
 cout<<"enter the elements of the array :";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 swap(a,n);
 cout<<"the resultant array :";
 for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";

 }
 getch();
}
void swap(int a[],int n)
{
 int temp,i,j;
 for(i=0,j=1;i<n-1;i++,j--)
 { temp=a[i];
   a[i]=a[j];
   a[j]=temp;
 }
}

