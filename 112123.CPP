#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
 int n,i,j;
 clrscr();
 cout<<"enter the number of rows: ";
 cin>>n;
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
 {
  if(i>=j)
  cout<<j;
 }
 cout<<endl;
 }
// if(i>=j)
 getch();
 }